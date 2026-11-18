//Challenge: Make the Memory Testbench Self-Checking (Final)
//Self-checking testbench for the 8x8 synchronous memory with acknowledge handshake
//mem_dut.sv will be the DUT
module memory_tb;

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
    integer cycle;
    reg [7:0] shadow_mem[0:7];//Reference model: mirrors DUT Memory
    integer pass_count, fail_count;
    //reg [2:0] written_addr;




    // ── Testbench FSM ──────────────────────────────────────────────
    initial begin
        // ── Initialise all signals ─────────────────────────────────
        state   = IDLE;
        rst     = 1;
        wr_en   = 0;
        rd_en   = 0;
        addr    = 0;
        wr_data = 0;
        cycle=0;

        $display("Seed=%0d",$get_initial_random_seed());
        pass_count=0; fail_count=0; 

        //CLear shadow memory
        begin: init_shadow
        integer j;
        for(j=0;j<8;j=j+1) begin
            shadow_mem[j]=8'h00;
        end

        end



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

                // ── WRITE_REQ: Random inputs + update shadow memory ──
                WRITE_REQ: begin
                    wr_en   = 1;          // assert write enable
                    addr    = 3'($urandom%8);       // target address 4
                    wr_data = 8'($urandom);      // data to store
                    shadow_mem[addr]=wr_data;//Reference model tracks every write
                    //written_addr=addr;
                    $display("[%0t] State: WRITE_REQ — addr=0x%0h data=0x%0h",
                              $time, addr, wr_data);
                    state   = WRITE_WAIT;
                end

                // ── WRITE_WAIT: hold signals, wait for DUT to ack ──
                // This state loops until ack arrives — could be 1 or
                // many cycles depending on DUT implementation
                WRITE_WAIT: begin
                    if (ack) begin
                        // DUT has confirmed the write completed
                        wr_en  = 0;       // release the bus
                        $display("[%0t] State: WRITE_WAIT — ack received, write complete",
                                  $time);
                        state  = READ_REQ;
                    end
                    // If ack not yet asserted: stay in WRITE_WAIT,
                    // loop back to @(posedge clk) and check again
                end

                // ── READ_REQ: request data back from same address ───
                READ_REQ: begin
                    rd_en  = 1;           // assert read enable
                    addr   = 3'($urandom%8);        // reading random adderss rather than reading just written address by using written_addr
                    //because it catches a DUT that returns stale data from the wrong location.
                    $display("[%0t] State: READ_REQ — addr=0x%0h", $time, addr);
                    state  = DONE;
                end

                // ── DONE: wait for ack, then check the result ───────
                DONE: begin
                    if (ack) begin
                        rd_en = 0;
                        //Reference model check: rd_data must match shadow_mem[addr]
                        if(rd_data!==shadow_mem[addr]) begin
                            $error("FAIL cycle %0d: addr=0x%0h expected=0x%0h got=0x%0h",cycle,addr,shadow_mem[addr],rd_data);
                            fail_count = fail_count+1;
                        end else
                            pass_count = pass_count+1;

                            cycle=cycle+1;
                            if(cycle<500)// so all 8 locations get hit repeatedly
                            state=WRITE_REQ;
                        else begin
                            $display("RESULTS: %0D PASSED, %0D FAILED",pass_count,fail_count);
                            if(fail_count>0)
                            $fatal(1,"Test failed");
                            else
                            $display("Test passed");
                            $finish;
                        end
                    end
                end

/*
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
*/
            endcase
        end
    end

endmodule
