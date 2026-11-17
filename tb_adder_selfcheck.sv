module tb_adder_selfcheck;
//DUT signals

reg [3:0] a;
reg [3:0] b;
reg cin;
wire [3:0] sum;
wire cout;

//DUT instantiation
adder dut(
    .a(a),
    .b(b),
    .cin(cin),
    .sum(sum),
    .cout(cout)
);

//Clock
reg clk;
initial clk = 0;
always #5 clk=~clk;
//Checker state
integer i;
integer pass_count;
integer fail_count;
reg [4:0] expected; // 5bit {cout_expeccted,sum_expected}

initial begin
    $display("Seed=%0d", $get_initial_random_seed());

    pass_count=0;
    fail_count=0;

    a=0; b=0; cin=0;
    @(posedge clk);
    @(posedge clk);

        for (i=0;i<1000;i=i+1) begin
            a   = 4'($urandom);
            b   = 4'($urandom);
            cin = 1'($urandom);
            #1; //added
            expected = {1'b0, a} + {1'b0, b} + {4'b0, cin}; //added
            @(posedge clk);


            expected=a+b+cin;


        if({cout,sum}!==expected) begin
            $error("FAIL [%0d]: a=%0d b=%0d cin=%0d | expected=%05b got=%b%04b",i,a,b,cin,expected,cout,sum);
            fail_count=fail_count+1;
        end else begin
            pass_count=pass_count+1;
        end
    end

    //Final summary
    $display("Results:%0d passed, %0d failed/1000 total",pass_count,fail_count);

    if(fail_count>0) begin
        $fatal(1,"Test failed -%0d errors detected",fail_count);
    end else begin
        $display("Test passed");
        $finish;
    end
end


endmodule

     
