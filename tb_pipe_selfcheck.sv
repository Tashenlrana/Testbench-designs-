module tb_pipe_selfcheck;
//DUT signals
reg [3:0] a,b;
wire [3:0] sum;
reg cin, clk;
wire cout;

adder_pipe dut(
    .a(a), .b(b), .cin(cin), .sum(sum), .cout(cout), .clk(clk)
    );

reg clk=0;
always #5 clk = ~clk;

//EXpected output queue
//Sized to hold more entries more than the dut piplenine depth (2 stages)
//Each entry is 5 bits wide (4 bits sum + 1 bit cout

reg [4:0] expected_outq[0:15];
integer q_head;//Index of the oldest entry in the queue
integer q_tail;//Index of the newest entry in the queue
integer q_count;//Number of entries in the queue

integer i;
integer pass_count, fail_count;

reg [4:0] expected_output;

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

initial begin
    $display("Seed=%0d",$get_initial_random_seed());
    $dumpfile("waveform.vcd");//For Verilator Waveforms
    $dumpvars(0,tb_pipe_selfcheck);//For Verilator Waveforms

    q_head=0; q_tail=0; q_count=0;
    pass_count=0;fail_count=0;
    a=0; b=0; cin=0;

    //Reset drive zeros for 2 cycles (flush the pipeline)
    repeat(4) @(posedge clk);

    //Main loop : Apply 100 random inputs
    for(i=0;i<100;i=i+1) begin
        @(posedge clk);
        //Apply new random inputs
        a=$urandom;
        b=$urandom;
        cin=$urandom;
        //Compute expected output and push to queue
        //THe DUT  will produce this result 2 cycles later
        push_expected(a+b+cin);
        //Check the DUT output when enough cycles have passed to fill the pipeline
        if(q_count>=2) begin
            expected_output=pop_expected();
            if({cout,sum}!==expected_output) begin
                $error("Failed[%0d]: expected=%05b got=%b%04b", i,expected_output,cout,sum);
                fail_count=fail_count+1;
            end else begin
                pass_count=pass_count+1;
        end
        end
    end

    //Drain remaining pipeline stages
    repeat(2) begin
        @(posedge clk);
        if(q_count>0) begin
            expected_output=pop_expected();
            if({cout,sum}!==expected_output) begin
                $error("Drain failed: expected=%05b got=%b%04b", expected_output,cout,sum);
                fail_count=fail_count+1;
            end else begin
                pass_count=pass_count+1;
            end
        end
    end

    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if(fail_count>0)
    $fatal(1,"Test failed");
    else
    $display("Test passed");
    $finish;
end
endmodule


