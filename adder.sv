//Selfchecking testbench 
//Corresponding testbench will be  tb_adder_selfcheck
// DUT: 4-bit adder
// Inputs : a, b  (4-bit operands)
//          cin   (carry-in from a previous stage)
// Outputs: sum   (4-bit result)
//          cout  (carry-out — set when the result exceeds 4 bits)
module adder (
    input  [3:0] a,
    input  [3:0] b,
    input        cin,
    output [3:0] sum,
    output       cout
);
    assign {cout, sum} = a + b + cin;
    
endmodule
