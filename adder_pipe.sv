//Selfchecking Testbench
//Part 2: Checking a Pipelined DUT
//tb_pipe_selfcheck.sv will be testbench
// DUT: 2-stage pipelined adder
// Inputs sampled at cycle N
// Output valid at cycle N+2
module adder_pipe (
    input        clk,
    input  [3:0] a,
    input  [3:0] b,
    input        cin,
    output reg [3:0] sum,
    output  reg     cout
);
    // Stage 1 registers
    reg [3:0] a1, b1;
    reg       cin1;

  

    always @(posedge clk) begin
        // Pipeline stage 1: register the inputs
        a1   <= a;
        b1   <= b;
        cin1 <= cin;

        // Pipeline stage 2: compute and register the result
        {cout, sum} <= a1 + b1 + cin1;
    end
endmodule


