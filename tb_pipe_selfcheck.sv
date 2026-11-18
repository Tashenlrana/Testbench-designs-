//Selfchecking testbench
//Part 2: Checking a Pipelined DUT
//adder_pipe.sv will be DUT
module tb_pipe_selfcheck;
//DUT signals
reg [3:0] a,b;
wire [3:0] sum;
reg cin, clk;
wire cout;

adder_pipe dut(
    .a(a), .b(b), .cin(cin), .sum(sum), .cout(cout), .clk(clk)
    );

initial clk=0;
always #5 clk = ~clk;

//EXpected output queue
//Sized to hold more entries more than the dut piplenine depth (2 stages)
//Each entry is 5 bits wide (4 bits sum + 1 bit cout

reg [4:0] expected_outq[0:15];
integer q_head;//Index of the oldest entry in the queue
integer q_tail;//Index of the newest entry in the queue
integer q_count;//Number of entries in the queue
reg rst_released;

integer i;
integer pass_count, fail_count;

reg [4:0] expected_output;
reg [3:0] na, nb;
reg ncin;
//Queue push called when inputs are applied
task push_expected;
input [4:0] val;
begin  
    expected_outq[q_tail]=val;
    q_tail=(q_tail+1)%16;
    q_count=q_count+1;
end
endtask

//queue pop: called when dut output is ready
function [4:0] pop_expected;
begin
    pop_expected=expected_outq[q_head];
    q_head=(q_head+1)%16;
    q_count=q_count-1;
end
endfunction

task check_output;
begin
    expected_output=pop_expected();
    if({cout,sum}!== expected_output) begin
        $error("FAIL [i=%0d t=%0t]: expected=%05b got=%b%04b", i,$time,expected_output,cout,sum);
        fail_count=fail_count +1;
    end else begin
        pass_count= pass_count+1;
    end
    end
endtask



// X/Z assertion: module level, NOT inside initial
    always @(posedge clk) begin
        if (rst_released) begin
            if ($isunknown(sum))
                $error("ASSERTION FAIL at %0t: sum has X/Z (sum=%b)", $time, sum);
            if ($isunknown(cout))
                $error("ASSERTION FAIL at %0t: cout has X/Z (cout=%b)", $time, cout);
        end
    end


initial begin
    $display("Seed=%0d",$get_initial_random_seed());
    $dumpfile("waveform.vcd");//For Verilator Waveforms
    $dumpvars(0,tb_pipe_selfcheck);//For Verilator Waveforms

    q_head=0; q_tail=0; q_count=0;
    pass_count=0;fail_count=0;
    rst_released=0;
    a=0; b=0; cin=0;

    //Reset drive zeros for 2 cycles (flush the pipeline)
    repeat(4) @(posedge clk);
    rst_released=1;

    //Main loop : Apply 100 random inputs
    for(i=0;i<100;i=i+1) begin
        @(posedge clk);
            // 1) Check first: output seen here belongs to the input from 3 edges ago
        if(q_count>=3) check_output();
        //THen apply new inputs (non blocking to avoid race with DUT)
        na=4'($urandom);
        nb=4'($urandom);
        ncin=1'($urandom);
        a<=na;
        b<=nb;
        cin<=ncin;
        push_expected({1'b0,na} + {1'b0,nb} + {4'b0,ncin});
    end

     

    //Drain 3  remaining pipeline stages
    repeat(3) begin
        @(posedge clk);
        if(q_count>0) check_output();          
        end





    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if(fail_count>0)
    $fatal(1,"SIMULATION FAILED:%0d /%0d tests failed", fail_count, pass_count + fail_count);
    else
    $display("SIMULATION PASSED: all %0d tests passed", pass_count);


    /*Adding an Assertion

always @(posedge clk) begin
    if(rst_released) begin
        //^sum is the reduction xor- if any bit is X or Z,
        //The result is X, which is not equal to 0 or 1
        if(^sum === 1'bx)
        $error("ASSERTION FAIL at %0t:sum contains X or Z(sum=%b)", $time,sum);
        if(cout===1'bx)
        $error("ASSERTION FAIL at %0t:cout contains X or Z(cout=%b)", $time,cout);
    end
end



*/
    $finish;
end
endmodule



