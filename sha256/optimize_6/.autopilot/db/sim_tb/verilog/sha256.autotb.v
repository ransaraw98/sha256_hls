// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      sha256
`define AUTOTB_DUT_INST AESL_inst_sha256
`define AUTOTB_TOP      apatb_sha256_top
`define AUTOTB_LAT_RESULT_FILE "sha256.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "sha256.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_sha256_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00

`define AESL_FIFO_istateREG_V AESL_autofifo_istateREG_V
`define AESL_FIFO_INST_istateREG_V AESL_autofifo_inst_istateREG_V
`define AESL_FIFO_idata_V AESL_autofifo_idata_V
`define AESL_FIFO_INST_idata_V AESL_autofifo_inst_idata_V
`define AESL_FIFO_ohash_V AESL_autofifo_ohash_V
`define AESL_FIFO_INST_ohash_V AESL_autofifo_inst_ohash_V
`define AUTOTB_TVIN_istateREG_V  "./c.sha256.autotvin_istateREG_V.dat"
`define AUTOTB_TVIN_idata_V  "./c.sha256.autotvin_idata_V.dat"
`define AUTOTB_TVIN_ohash_V  "./c.sha256.autotvin_ohash_V.dat"
`define AUTOTB_TVIN_istateREG_V_out_wrapc  "./rtl.sha256.autotvin_istateREG_V.dat"
`define AUTOTB_TVIN_idata_V_out_wrapc  "./rtl.sha256.autotvin_idata_V.dat"
`define AUTOTB_TVIN_ohash_V_out_wrapc  "./rtl.sha256.autotvin_ohash_V.dat"
`define AUTOTB_TVOUT_ohash_V  "./c.sha256.autotvout_ohash_V.dat"
`define AUTOTB_TVOUT_ohash_V_out_wrapc  "./impl_rtl.sha256.autotvout_ohash_V.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 1;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = 271;
parameter LENGTH_istateREG_V = 8;
parameter LENGTH_idata_V = 64;
parameter LENGTH_ohash_V = 32;

task read_token;
    input integer fp;
    output reg [175 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

task post_check;
    input integer fp1;
    input integer fp2;
    reg [175 : 0] token1;
    reg [175 : 0] token2;
    reg [175 : 0] golden;
    reg [175 : 0] result;
    integer ret;
    begin
        read_token(fp1, token1);
        read_token(fp2, token2);
        if (token1 != "[[[runtime]]]" || token2 != "[[[runtime]]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
            $finish;
        end
        read_token(fp1, token1);
        read_token(fp2, token2);
        while (token1 != "[[[/runtime]]]" && token2 != "[[[/runtime]]]") begin
            if (token1 != "[[transaction]]" || token2 != "[[transaction]]") begin
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
            end
            read_token(fp1, token1);  // skip transaction number
            read_token(fp2, token2);  // skip transaction number
              read_token(fp1, token1);
              read_token(fp2, token2);
            while(token1 != "[[/transaction]]" && token2 != "[[/transaction]]") begin
                ret = $sscanf(token1, "0x%x", golden);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                ret = $sscanf(token2, "0x%x", result);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                if(golden != result) begin
                      $display("%x (expected) vs. %x (actual) - mismatch", golden, result);
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                end
                  read_token(fp1, token1);
                  read_token(fp2, token2);
            end
              read_token(fp1, token1);
              read_token(fp2, token2);
        end
    end
endtask

reg AESL_clock;
reg rst;
reg dut_rst;
reg start;
reg ce;
reg tb_continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
wire ap_start;
wire ap_done;
wire ap_idle;
wire ap_ready;
wire [31 : 0] istateREG_V_dout;
wire  istateREG_V_empty_n;
wire  istateREG_V_read;
wire [7 : 0] idata_V_dout;
wire  idata_V_empty_n;
wire  idata_V_read;
wire [7 : 0] ohash_V_din;
wire  ohash_V_full_n;
wire  ohash_V_write;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;

wire ap_clk;
wire ap_rst;
wire ap_rst_n;

`AUTOTB_DUT `AUTOTB_DUT_INST(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .ap_ready(ap_ready),
    .istateREG_V_dout(istateREG_V_dout),
    .istateREG_V_empty_n(istateREG_V_empty_n),
    .istateREG_V_read(istateREG_V_read),
    .idata_V_dout(idata_V_dout),
    .idata_V_empty_n(idata_V_empty_n),
    .idata_V_read(idata_V_read),
    .ohash_V_din(ohash_V_din),
    .ohash_V_full_n(ohash_V_full_n),
    .ohash_V_write(ohash_V_write));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst = dut_rst;
assign ap_rst_n = ~dut_rst;
assign AESL_reset = rst;
assign ap_start = AESL_start;
assign AESL_start = start;
assign AESL_done = ap_done;
assign AESL_idle = ap_idle;
assign AESL_ready = ap_ready;
assign AESL_ce = ce;
assign AESL_continue = tb_continue;
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_done !== 1 && AESL_done !== 0) begin
                $display("ERROR: Control signal AESL_done is invalid!");
                $finish;
            end
        end
    end
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_ready !== 1 && AESL_ready !== 0) begin
                $display("ERROR: Control signal AESL_ready is invalid!");
                $finish;
            end
        end
    end
// Fifo Instantiation istateREG_V

wire fifoistateREG_V_rd;
wire [31 : 0] fifoistateREG_V_dout;
wire fifoistateREG_V_empty_n;
wire fifoistateREG_V_ready;
wire fifoistateREG_V_done;
reg [31:0] ap_c_n_tvin_trans_num_istateREG_V;
reg istateREG_V_ready_reg;

`AESL_FIFO_istateREG_V `AESL_FIFO_INST_istateREG_V (
    .clk          (AESL_clock),
    .reset        (AESL_reset),
    .if_write     (),
    .if_din       (),
    .if_full_n    (),
    .if_read      (fifoistateREG_V_rd),
    .if_dout      (fifoistateREG_V_dout),
    .if_empty_n   (fifoistateREG_V_empty_n),
    .ready        (fifoistateREG_V_ready),
    .done         (fifoistateREG_V_done)
);

// Assignment between dut and fifoistateREG_V

// Assign input of fifoistateREG_V
assign      fifoistateREG_V_rd        =   istateREG_V_read & istateREG_V_empty_n;
assign    fifoistateREG_V_ready   =   istateREG_V_ready_reg | ready_initial;
assign    fifoistateREG_V_done    =   0;
// Assign input of dut
assign      istateREG_V_dout       =   fifoistateREG_V_dout;
reg   reg_fifoistateREG_V_empty_n;
initial begin : gen_reg_fifoistateREG_V_empty_n_process
    integer proc_rand;
    reg_fifoistateREG_V_empty_n = fifoistateREG_V_empty_n;
    while (1) begin
        @ (fifoistateREG_V_empty_n);
        reg_fifoistateREG_V_empty_n = fifoistateREG_V_empty_n;
    end
end

assign      istateREG_V_empty_n    =   reg_fifoistateREG_V_empty_n;


// Fifo Instantiation idata_V

wire fifoidata_V_rd;
wire [7 : 0] fifoidata_V_dout;
wire fifoidata_V_empty_n;
wire fifoidata_V_ready;
wire fifoidata_V_done;
reg [31:0] ap_c_n_tvin_trans_num_idata_V;
reg idata_V_ready_reg;

`AESL_FIFO_idata_V `AESL_FIFO_INST_idata_V (
    .clk          (AESL_clock),
    .reset        (AESL_reset),
    .if_write     (),
    .if_din       (),
    .if_full_n    (),
    .if_read      (fifoidata_V_rd),
    .if_dout      (fifoidata_V_dout),
    .if_empty_n   (fifoidata_V_empty_n),
    .ready        (fifoidata_V_ready),
    .done         (fifoidata_V_done)
);

// Assignment between dut and fifoidata_V

// Assign input of fifoidata_V
assign      fifoidata_V_rd        =   idata_V_read & idata_V_empty_n;
assign    fifoidata_V_ready   =   idata_V_ready_reg | ready_initial;
assign    fifoidata_V_done    =   0;
// Assign input of dut
assign      idata_V_dout       =   fifoidata_V_dout;
reg   reg_fifoidata_V_empty_n;
initial begin : gen_reg_fifoidata_V_empty_n_process
    integer proc_rand;
    reg_fifoidata_V_empty_n = fifoidata_V_empty_n;
    while (1) begin
        @ (fifoidata_V_empty_n);
        reg_fifoidata_V_empty_n = fifoidata_V_empty_n;
    end
end

assign      idata_V_empty_n    =   reg_fifoidata_V_empty_n;


//------------------------Fifoohash_V Instantiation--------------

// The input and output of fifoohash_V
wire  fifoohash_V_wr;
wire  [7 : 0] fifoohash_V_din;
wire  fifoohash_V_full_n;
wire  fifoohash_V_ready;
wire  fifoohash_V_done;

`AESL_FIFO_ohash_V `AESL_FIFO_INST_ohash_V(
    .clk          (AESL_clock),
    .reset        (AESL_reset),
    .if_write     (fifoohash_V_wr),
    .if_din       (fifoohash_V_din),
    .if_full_n    (fifoohash_V_full_n),
    .if_read      (),
    .if_dout      (),
    .if_empty_n   (),
    .ready        (fifoohash_V_ready),
    .done         (fifoohash_V_done)
);

// Assignment between dut and fifoohash_V

// Assign input of fifoohash_V
assign      fifoohash_V_wr        =   ohash_V_write & ohash_V_full_n;
assign      fifoohash_V_din        =   ohash_V_din;
assign    fifoohash_V_ready   =  0;   //ready_initial | AESL_done_delay;
assign    fifoohash_V_done    =   AESL_done_delay;
// Assign input of dut
reg   reg_fifoohash_V_full_n;
initial begin : gen_reg_fifoohash_V_full_n_process
    integer proc_rand;
    reg_fifoohash_V_full_n = fifoohash_V_full_n;
    while (1) begin
        @ (fifoohash_V_full_n);
        reg_fifoohash_V_full_n = fifoohash_V_full_n;
    end
end

assign      ohash_V_full_n    =   reg_fifoohash_V_full_n;


initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 0);
    while(AESL_ready_cnt != AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

    event next_trigger_ready_cnt;
    
    initial begin : gen_ready_cnt
        ready_cnt = 0;
        wait (AESL_reset === 0);
        forever begin
            @ (posedge AESL_clock);
            if (ready == 1) begin
                if (ready_cnt < AUTOTB_TRANSACTION_NUM) begin
                    ready_cnt = ready_cnt + 1;
                end
            end
            -> next_trigger_ready_cnt;
        end
    end
    
    wire all_finish = (done_cnt == AUTOTB_TRANSACTION_NUM);
    
    // done_cnt
    always @ (posedge AESL_clock) begin
        if (AESL_reset) begin
            done_cnt <= 0;
        end else begin
            if (AESL_done == 1) begin
                if (done_cnt < AUTOTB_TRANSACTION_NUM) begin
                    done_cnt <= done_cnt + 1;
                end
            end
        end
    end
    
    initial begin : finish_simulation
        integer fp1;
        integer fp2;
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
    fp1 = $fopen("./rtl.sha256.autotvout_ohash_V.dat", "r");
    fp2 = $fopen("./impl_rtl.sha256.autotvout_ohash_V.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.sha256.autotvout_ohash_V.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.sha256.autotvout_ohash_V.dat\"!");
    else begin
        $display("Comparing rtl.sha256.autotvout_ohash_V.dat with impl_rtl.sha256.autotvout_ohash_V.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
        $display("Simulation Passed.");
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_istateREG_V;
reg [31:0] size_istateREG_V;
reg [31:0] size_istateREG_V_backup;
reg end_idata_V;
reg [31:0] size_idata_V;
reg [31:0] size_idata_V_backup;
reg end_ohash_V;
reg [31:0] size_ohash_V;
reg [31:0] size_ohash_V_backup;

initial begin : initial_process
    integer proc_rand;
    rst = 1;
    # 100;
    repeat(0+3) @ (posedge AESL_clock);
    rst = 0;
end
initial begin : initial_process_for_dut_rst
    integer proc_rand;
    dut_rst = 1;
    # 100;
    repeat(3) @ (posedge AESL_clock);
    dut_rst = 0;
end
initial begin : start_process
    integer proc_rand;
    reg [31:0] start_cnt;
    ce = 1;
    start = 0;
    start_cnt = 0;
    wait (AESL_reset === 0);
    @ (posedge AESL_clock);
    #0 start = 1;
    start_cnt = start_cnt + 1;
    forever begin
        if (start_cnt >= AUTOTB_TRANSACTION_NUM + 1) begin
            #0 start = 0;
        end
        @ (posedge AESL_clock);
        if (AESL_ready) begin
            start_cnt = start_cnt + 1;
        end
    end
end

always @(AESL_done)
begin
    tb_continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end
initial begin : proc_gen_istateREG_V_internal_ready
    integer internal_trans_num;
    wait(AESL_reset === 0);
    wait (ready_initial === 1);
    istateREG_V_ready_reg <= 0;
    @(posedge AESL_clock);
    internal_trans_num = 1;
    while(internal_trans_num != AUTOTB_TRANSACTION_NUM + 1) begin
        if (ap_c_n_tvin_trans_num_istateREG_V > internal_trans_num) begin
            istateREG_V_ready_reg <= 1;
            @(posedge AESL_clock);
            istateREG_V_ready_reg <= 0;
            internal_trans_num = internal_trans_num + 1;
        end
        else begin
            @(posedge AESL_clock);
        end
    end
    istateREG_V_ready_reg <= 0;
end
initial begin : proc_gen_idata_V_internal_ready
    integer internal_trans_num;
    wait(AESL_reset === 0);
    wait (ready_initial === 1);
    idata_V_ready_reg <= 0;
    @(posedge AESL_clock);
    internal_trans_num = 1;
    while(internal_trans_num != AUTOTB_TRANSACTION_NUM + 1) begin
        if (ap_c_n_tvin_trans_num_idata_V > internal_trans_num) begin
            idata_V_ready_reg <= 1;
            @(posedge AESL_clock);
            idata_V_ready_reg <= 0;
            internal_trans_num = internal_trans_num + 1;
        end
        else begin
            @(posedge AESL_clock);
        end
    end
    idata_V_ready_reg <= 0;
end
    
    `define STREAM_SIZE_IN_istateREG_V "./stream_size_in_istateREG_V.dat"
    
    initial begin : gen_ap_c_n_tvin_trans_num_istateREG_V
        integer fp_istateREG_V;
        reg [127:0] token_istateREG_V;
        integer ret;
        
        ap_c_n_tvin_trans_num_istateREG_V = 0;
        end_istateREG_V = 0;
        wait (AESL_reset === 0);
        
        fp_istateREG_V = $fopen(`STREAM_SIZE_IN_istateREG_V, "r");
        if(fp_istateREG_V == 0) begin
            $display("Failed to open file \"%s\"!", `STREAM_SIZE_IN_istateREG_V);
            $finish;
        end
        read_token(fp_istateREG_V, token_istateREG_V); // should be [[[runtime]]]
        if (token_istateREG_V != "[[[runtime]]]") begin
            $display("ERROR: token_istateREG_V != \"[[[runtime]]]\"");
            $finish;
        end
        size_istateREG_V = 0;
        size_istateREG_V_backup = 0;
        while (size_istateREG_V == 0 && end_istateREG_V == 0) begin
            ap_c_n_tvin_trans_num_istateREG_V = ap_c_n_tvin_trans_num_istateREG_V + 1;
            read_token(fp_istateREG_V, token_istateREG_V); // should be [[transaction]] or [[[/runtime]]]
            if (token_istateREG_V == "[[transaction]]") begin
                read_token(fp_istateREG_V, token_istateREG_V); // should be transaction number
                read_token(fp_istateREG_V, token_istateREG_V); // should be size for hls::stream
                ret = $sscanf(token_istateREG_V, "%d", size_istateREG_V);
                if (size_istateREG_V > 0) begin
                    size_istateREG_V_backup = size_istateREG_V;
                end
                read_token(fp_istateREG_V, token_istateREG_V); // should be [[/transaction]]
            end else if (token_istateREG_V == "[[[/runtime]]]") begin
                $fclose(fp_istateREG_V);
                end_istateREG_V = 1;
            end else begin
                $display("ERROR: unknown token_istateREG_V");
                $finish;
            end
        end
        forever begin
            @ (posedge AESL_clock);
            if (end_istateREG_V == 0) begin
                if (istateREG_V_read == 1 && istateREG_V_empty_n == 1) begin
                    if (size_istateREG_V > 0) begin
                        size_istateREG_V = size_istateREG_V - 1;
                        while (size_istateREG_V == 0 && end_istateREG_V == 0) begin
                            ap_c_n_tvin_trans_num_istateREG_V = ap_c_n_tvin_trans_num_istateREG_V + 1;
                            read_token(fp_istateREG_V, token_istateREG_V); // should be [[transaction]] or [[[/runtime]]]
                            if (token_istateREG_V == "[[transaction]]") begin
                                read_token(fp_istateREG_V, token_istateREG_V); // should be transaction number
                                read_token(fp_istateREG_V, token_istateREG_V); // should be size for hls::stream
                                ret = $sscanf(token_istateREG_V, "%d", size_istateREG_V);
                                if (size_istateREG_V > 0) begin
                                    size_istateREG_V_backup = size_istateREG_V;
                                end
                                read_token(fp_istateREG_V, token_istateREG_V); // should be [[/transaction]]
                            end else if (token_istateREG_V == "[[[/runtime]]]") begin
                                size_istateREG_V = size_istateREG_V_backup;
                                $fclose(fp_istateREG_V);
                                end_istateREG_V = 1;
                            end else begin
                                $display("ERROR: unknown token_istateREG_V");
                                $finish;
                            end
                        end
                    end
                end
            end else begin
                if (istateREG_V_read == 1 && istateREG_V_empty_n == 1) begin
                    if (size_istateREG_V > 0) begin
                        size_istateREG_V = size_istateREG_V - 1;
                        if (size_istateREG_V == 0) begin
                            ap_c_n_tvin_trans_num_istateREG_V = ap_c_n_tvin_trans_num_istateREG_V + 1;
                            size_istateREG_V = size_istateREG_V_backup;
                        end
                    end
                end
            end
        end
    end
    
    
    `define STREAM_SIZE_IN_idata_V "./stream_size_in_idata_V.dat"
    
    initial begin : gen_ap_c_n_tvin_trans_num_idata_V
        integer fp_idata_V;
        reg [127:0] token_idata_V;
        integer ret;
        
        ap_c_n_tvin_trans_num_idata_V = 0;
        end_idata_V = 0;
        wait (AESL_reset === 0);
        
        fp_idata_V = $fopen(`STREAM_SIZE_IN_idata_V, "r");
        if(fp_idata_V == 0) begin
            $display("Failed to open file \"%s\"!", `STREAM_SIZE_IN_idata_V);
            $finish;
        end
        read_token(fp_idata_V, token_idata_V); // should be [[[runtime]]]
        if (token_idata_V != "[[[runtime]]]") begin
            $display("ERROR: token_idata_V != \"[[[runtime]]]\"");
            $finish;
        end
        size_idata_V = 0;
        size_idata_V_backup = 0;
        while (size_idata_V == 0 && end_idata_V == 0) begin
            ap_c_n_tvin_trans_num_idata_V = ap_c_n_tvin_trans_num_idata_V + 1;
            read_token(fp_idata_V, token_idata_V); // should be [[transaction]] or [[[/runtime]]]
            if (token_idata_V == "[[transaction]]") begin
                read_token(fp_idata_V, token_idata_V); // should be transaction number
                read_token(fp_idata_V, token_idata_V); // should be size for hls::stream
                ret = $sscanf(token_idata_V, "%d", size_idata_V);
                if (size_idata_V > 0) begin
                    size_idata_V_backup = size_idata_V;
                end
                read_token(fp_idata_V, token_idata_V); // should be [[/transaction]]
            end else if (token_idata_V == "[[[/runtime]]]") begin
                $fclose(fp_idata_V);
                end_idata_V = 1;
            end else begin
                $display("ERROR: unknown token_idata_V");
                $finish;
            end
        end
        forever begin
            @ (posedge AESL_clock);
            if (end_idata_V == 0) begin
                if (idata_V_read == 1 && idata_V_empty_n == 1) begin
                    if (size_idata_V > 0) begin
                        size_idata_V = size_idata_V - 1;
                        while (size_idata_V == 0 && end_idata_V == 0) begin
                            ap_c_n_tvin_trans_num_idata_V = ap_c_n_tvin_trans_num_idata_V + 1;
                            read_token(fp_idata_V, token_idata_V); // should be [[transaction]] or [[[/runtime]]]
                            if (token_idata_V == "[[transaction]]") begin
                                read_token(fp_idata_V, token_idata_V); // should be transaction number
                                read_token(fp_idata_V, token_idata_V); // should be size for hls::stream
                                ret = $sscanf(token_idata_V, "%d", size_idata_V);
                                if (size_idata_V > 0) begin
                                    size_idata_V_backup = size_idata_V;
                                end
                                read_token(fp_idata_V, token_idata_V); // should be [[/transaction]]
                            end else if (token_idata_V == "[[[/runtime]]]") begin
                                size_idata_V = size_idata_V_backup;
                                $fclose(fp_idata_V);
                                end_idata_V = 1;
                            end else begin
                                $display("ERROR: unknown token_idata_V");
                                $finish;
                            end
                        end
                    end
                end
            end else begin
                if (idata_V_read == 1 && idata_V_empty_n == 1) begin
                    if (size_idata_V > 0) begin
                        size_idata_V = size_idata_V - 1;
                        if (size_idata_V == 0) begin
                            ap_c_n_tvin_trans_num_idata_V = ap_c_n_tvin_trans_num_idata_V + 1;
                            size_idata_V = size_idata_V_backup;
                        end
                    end
                end
            end
        end
    end
    

reg dump_tvout_finish_ohash_V;

initial begin : dump_tvout_runtime_sign_ohash_V
    integer fp;
    dump_tvout_finish_ohash_V = 0;
    fp = $fopen(`AUTOTB_TVOUT_ohash_V_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ohash_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ohash_V_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ohash_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ohash_V = 1;
end


////////////////////////////////////////////
// progress and performance
////////////////////////////////////////////

task wait_start();
    while (~AESL_start) begin
        @ (posedge AESL_clock);
    end
endtask

reg [31:0] clk_cnt = 0;
reg AESL_ready_p1;
reg AESL_start_p1;

always @ (posedge AESL_clock) begin
    if (AESL_reset == 1) begin
        clk_cnt <= 32'h0;
        AESL_ready_p1 <= 1'b0;
        AESL_start_p1 <= 1'b0;
    end
    else begin
        clk_cnt <= clk_cnt + 1;
        AESL_ready_p1 <= AESL_ready;
        AESL_start_p1 <= AESL_start;
    end
end

reg [31:0] start_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] start_cnt;
reg [31:0] ready_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] ap_ready_cnt;
reg [31:0] finish_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] finish_cnt;
reg [31:0] lat_total;
event report_progress;

always @(posedge AESL_clock)
begin
    if (finish_cnt == AUTOTB_TRANSACTION_NUM - 1 && AESL_done == 1'b1)
        lat_total = clk_cnt - start_timestamp[0];
end

initial begin
    start_cnt = 0;
    finish_cnt = 0;
    ap_ready_cnt = 0;
    wait (AESL_reset == 0);
    wait_start();
    start_timestamp[start_cnt] = clk_cnt;
    start_cnt = start_cnt + 1;
    if (AESL_done) begin
        finish_timestamp[finish_cnt] = clk_cnt;
        finish_cnt = finish_cnt + 1;
    end
    -> report_progress;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt < AUTOTB_TRANSACTION_NUM) begin
            if ((AESL_start && AESL_ready_p1)||(AESL_start && ~AESL_start_p1)) begin
                start_timestamp[start_cnt] = clk_cnt;
                start_cnt = start_cnt + 1;
            end
        end
        if (ap_ready_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_start_p1 && AESL_ready_p1) begin
                ready_timestamp[ap_ready_cnt] = clk_cnt;
                ap_ready_cnt = ap_ready_cnt + 1;
            end
        end
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                finish_timestamp[finish_cnt] = clk_cnt;
                finish_cnt = finish_cnt + 1;
            end
        end
        -> report_progress;
    end
end

reg [31:0] progress_timeout;

initial begin : simulation_progress
    real intra_progress;
    wait (AESL_reset == 0);
    progress_timeout = PROGRESS_TIMEOUT;
    $display("////////////////////////////////////////////////////////////////////////////////////");
    $display("// Inter-Transaction Progress: Completed Transaction / Total Transaction");
    $display("// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%%");
    $display("//");
    $display("// RTL Simulation : \"Inter-Transaction Progress\" [\"Intra-Transaction Progress\"] @ \"Simulation Time\"");
    $display("////////////////////////////////////////////////////////////////////////////////////");
    print_progress();
    while (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
        @ (report_progress);
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                print_progress();
                progress_timeout = PROGRESS_TIMEOUT;
            end else begin
                if (progress_timeout == 0) begin
                    print_progress();
                    progress_timeout = PROGRESS_TIMEOUT;
                end else begin
                    progress_timeout = progress_timeout - 1;
                end
            end
        end
    end
    print_progress();
    $display("////////////////////////////////////////////////////////////////////////////////////");
    calculate_performance();
end

task get_intra_progress(output real intra_progress);
    begin
        if (start_cnt > finish_cnt) begin
            intra_progress = clk_cnt - start_timestamp[finish_cnt];
        end else if(finish_cnt > 0) begin
            intra_progress = LATENCY_ESTIMATION;
        end else begin
            intra_progress = 0;
        end
        intra_progress = intra_progress / LATENCY_ESTIMATION;
    end
endtask

task print_progress();
    real intra_progress;
    begin
        if (LATENCY_ESTIMATION > 0) begin
            get_intra_progress(intra_progress);
            $display("// RTL Simulation : %0d / %0d [%2.2f%%] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, intra_progress * 100, $time);
        end else begin
            $display("// RTL Simulation : %0d / %0d [n/a] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, $time);
        end
    end
endtask

task calculate_performance();
    integer i;
    integer fp;
    reg [31:0] latency [0:AUTOTB_TRANSACTION_NUM - 1];
    reg [31:0] latency_min;
    reg [31:0] latency_max;
    reg [31:0] latency_total;
    reg [31:0] latency_average;
    reg [31:0] interval [0:AUTOTB_TRANSACTION_NUM - 2];
    reg [31:0] interval_min;
    reg [31:0] interval_max;
    reg [31:0] interval_total;
    reg [31:0] interval_average;
    reg [31:0] total_execute_time;
    begin
        latency_min = -1;
        latency_max = 0;
        latency_total = 0;
        interval_min = -1;
        interval_max = 0;
        interval_total = 0;
        total_execute_time = lat_total;

        for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
            // calculate latency
            latency[i] = finish_timestamp[i] - start_timestamp[i];
            if (latency[i] > latency_max) latency_max = latency[i];
            if (latency[i] < latency_min) latency_min = latency[i];
            latency_total = latency_total + latency[i];
            // calculate interval
            if (AUTOTB_TRANSACTION_NUM == 1) begin
                interval[i] = 0;
                interval_max = 0;
                interval_min = 0;
                interval_total = 0;
            end else if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                interval[i] = start_timestamp[i + 1] - start_timestamp[i];
                if (interval[i] > interval_max) interval_max = interval[i];
                if (interval[i] < interval_min) interval_min = interval[i];
                interval_total = interval_total + interval[i];
            end
        end

        latency_average = latency_total / AUTOTB_TRANSACTION_NUM;
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            interval_average = 0;
        end else begin
            interval_average = interval_total / (AUTOTB_TRANSACTION_NUM - 1);
        end

        fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

        $fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latency_max);
        $fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latency_min);
        $fdisplay(fp, "$AVER_LATENCY = \"%0d\"", latency_average);
        $fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", interval_max);
        $fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", interval_min);
        $fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", interval_average);
        $fdisplay(fp, "$TOTAL_EXECUTE_TIME = \"%0d\"", total_execute_time);

        $fclose(fp);

        fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");

        $fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            i = 0;
            $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
        end else begin
            for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
                if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                    $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
                end else begin
                    $fdisplay(fp, "transaction%8d:%16d               x", i, latency[i]);
                end
            end
        end

        $fclose(fp);
    end
endtask


////////////////////////////////////////////
// Dependence Check
////////////////////////////////////////////

`ifndef POST_SYN

`endif
///////////////////////////////////////////////////////
// dataflow status monitor
///////////////////////////////////////////////////////
dataflow_monitor U_dataflow_monitor(
    .clock(AESL_clock),
    .reset(rst),
    .finish(all_finish));

`include "fifo_para.vh"

endmodule
