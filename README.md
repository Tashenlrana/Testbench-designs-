# Testbench-designs-

This project contains set of systemverilog challenges related to one linear random testbench architecture and three Selfchecking testbench. These testbenches are simulated by using open source IC design tools  such as Verilator and waveforms are generated via GTK Wave.


# Linear random testbench 

# Challenge 1

This is a Linear random testbench for the 8x8 synchronous memory with acknowledge handshake.

In this design tb_mem.sv will be the testbench and mem_dut.sv will be the dut file.
This testbench has modified it to use random addresses and data instead of the fixed values addr=4, wr_data=0xA5.The testbench has run 20 random write-then-read cycles. Each cycle selects a random 3-bit address (0–7) and a random 8-bit data value, writes them to the memory, reads them back from the same address, and verifies the read-back transactions. Here $urandom has utilized to generate both values and print the seed at the begining of the run.

State machine of the testbench follows the below stages as a single  transaction. 
IDLE-->WRITE_REQ-->WRITE_WAIT-->READ_REQ-->DONE

# Simulation steps

verilator --binary -j 0 --trace --timing -Wall -Wno-PROCASSINIT --top tb_mem mem_dut.sv tb_mem.sv

./obj_dir/Vtb_mem

# Simulation Results

![alt text](image.png)


# Selfchecking testbench 

# Challenge 2

Self-Checking a Combinational DUT

 In this design tb_adder_selfcheck.sv will be the testbench and adder.sv will be the dut file. This is a  4-bit adder. The checker is straightforward. This reference model computes a + b + cin in the testbench and compare against {cout, sum} from the DUT.

 $fatal is stronger than $error. $error records the failure and continues useful when developer want to count all failures across the full run. $fatal stops the simulation immediately  useful at the end.

 # Simulation steps

verilator --binary -j 0 --trace --timing -Wall -Wno-PROCASSINIT --top tb_adder_selfcheck adder.sv tb_adder_selfcheck.sv

.obj_sv/tb_adder_selfcheck

# Simulaton Results


![alt text](image.png)
