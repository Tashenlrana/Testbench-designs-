// DUT: 2-stage pipelined adder
// Inputs sampled at cycle N
// Output valid at cycle N+2
module adder_pipe (
    input        clk,
    input  [3:0] a,
    input  [3:0] b,
    input        cin,
    output [3:0] sum,
    output       cout
);
    // Stage 1 registers
    reg [3:0] a1, b1;
    reg       cin1;

    // Stage 2 output registers
    reg [3:0] sum;
    reg       cout;

    always @(posedge clk) begin
        // Pipeline stage 1: register the inputs
        a1   <= a;
        b1   <= b;
        cin1 <= cin;

        // Pipeline stage 2: compute and register the result
        {cout, sum} <= a1 + b1 + cin1;
    end
endmodule