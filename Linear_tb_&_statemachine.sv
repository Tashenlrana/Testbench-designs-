module tb_mem;

    // ── DUT signals ────────────────────────────────────────────────
    reg        clk;
    reg        rst;
    reg        wr_en;
    reg        rd_en;
    reg  [2:0] addr;
    reg  [7:0] wr_data;
    wire [7:0] rd_data;
    wire       ack;

    // ── DUT instantiation ──────────────────────────────────────────
    mem_dut dut (
        .clk    (clk),
        .rst    (rst),
        .wr_en  (wr_en),
        .rd_en  (rd_en),
        .addr   (addr),
        .wr_data(wr_data),
        .rd_data(rd_data),
        .ack    (ack)
    );

    // ── Clock ──────────────────────────────────────────────────────
    initial clk = 0;
    always  #5 clk = ~clk;

    // ── State encoding ─────────────────────────────────────────────
    // Simple integer constants — one per testbench phase
    parameter IDLE       = 0;
    parameter WRITE_REQ  = 1;
    parameter WRITE_WAIT = 2;
    parameter READ_REQ   = 3;
    parameter DONE       = 4;

    integer state;
    integer tx_count;

    // ── Testbench FSM ──────────────────────────────────────────────
    initial begin
        // ── Initialise all signals ─────────────────────────────────
        state   = IDLE;
        rst     = 1;
        wr_en   = 0;
        rd_en   = 0;
        addr    = 0;
        wr_data = 0;

        // Hold reset for two clock cycles then release
        @(posedge clk);
        @(posedge clk);
        rst = 0;

        // ── Step through each state on every rising clock edge ─────
        forever begin
            @(posedge clk);

            case (state)

                // ── IDLE: deassert everything, move to first write ──
                IDLE: begin
                    wr_en   = 0;
                    rd_en   = 0;
                    $display("[%0t] State: IDLE — starting write transaction", $time);
                    state   = WRITE_REQ;
                end

                // Replace WRITE_REQ with address derived from counter:
WRITE_REQ: begin
    wr_en   = 1;
    addr    = tx_count[2:0];      // cycle through addresses 0..7
    wr_data = tx_count * 8'h11;   // unique data per address
    state   = WRITE_WAIT;
end

// In WRITE_WAIT, after ack, decide whether to loop or proceed:
WRITE_WAIT: begin
    if (ack) begin
        wr_en = 0;
        if (tx_count < 7) begin
            tx_count = tx_count + 1;
            state    = WRITE_REQ;   // write next address
        end else begin
            tx_count = 0;
            state    = READ_REQ;    // all writes done, start reads
        end
    end
end
                // ── READ_REQ: request data back from same address ───
                READ_REQ: begin
                    rd_en  = 1;           // assert read enable
                    addr   = 3'h4;        // same address we wrote
                    $display("[%0t] State: READ_REQ — addr=0x%0h", $time, addr);
                    state  = DONE;
                end

                // ── DONE: wait for ack, then check the result ───────
                DONE: begin
                    if (ack) begin
                        rd_en = 0;
                        $display("[%0t] State: DONE — rd_data=0x%0h", $time, rd_data);

                        // Verify read-back matches what was written
                        if (rd_data !== 8'hA5)
                            $error("MISMATCH: wrote 0xA5, read back 0x%0h", rd_data);
                        else
                            $display("PASS: read-back correct");

                        $finish;
                    end
                    // Stay in DONE until ack arrives
                end

            endcase
        end
    end

endmodule