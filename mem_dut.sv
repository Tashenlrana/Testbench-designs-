// mem_dut.sv
module mem_dut (
    input  logic       clk,
    input  logic       rst,
    input  logic       wr_en,
    input  logic       rd_en,
    input  logic [2:0] addr,
    input  logic [7:0] wr_data,
    output logic [7:0] rd_data,
    output logic       ack
);
    logic [7:0] mem [0:7];

    always_ff @(posedge clk) begin
        ack <= 1'b0;
        if (rst) begin
            rd_data <= '0;
        end else if (wr_en) begin
            mem[addr] <= wr_data;
            ack       <= 1'b1;
        end else if (rd_en) begin
            rd_data <= mem[addr];
            ack     <= 1'b1;
        end
    end
endmodule