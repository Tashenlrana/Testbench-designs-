// DUT: 8x8 synchronous memory with acknowledge handshake
// Write: assert wr_en=1, provide addr and wr_data, wait for ack
// Read:  assert rd_en=1, provide addr, wait for ack, then sample rd_data
//THIS WILL BE DUT for tb_mem.sv(for extend to memory interface) and memory_tb.sv ( Make the Memory Testbench Self-Checking the challenge)
`timescale 1ns/1ps
module mem_dut (
    input        clk,
    input        rst,
    input        wr_en,       // write enable
    input        rd_en,       // read enable
    input  [2:0] addr,        // 3-bit address (8 locations)
    input  [7:0] wr_data,     // data to write
    output reg [7:0] rd_data,     // data read out
    output    reg   ack          // pulsed high for one cycle when done
);
    reg [7:0] mem [0:7];      // the 8-byte storage array
   
    integer   i;

    always @(posedge clk) begin
        ack     <= 0;         // default: ack is low
        rd_data <= 0;

        if (rst) begin
            for (i = 0; i < 8; i = i + 1)
                mem[i] <= 8'h00;
        end
        else if (wr_en) begin
            mem[addr] <= wr_data;  // store the data
            ack       <= 1;        // acknowledge one cycle later
        end
        else if (rd_en) begin
            rd_data <= mem[addr];  // fetch the data
            ack     <= 1;          // acknowledge one cycle later
        end
    end

endmodule

