// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
// Version: 2020.2
// Copyright (C) Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="sha256_sha256,hls_ip_2020_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu11p-flga2577-1-e,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.643000,HLS_SYN_LAT=153,HLS_SYN_TPT=none,HLS_SYN_MEM=9,HLS_SYN_DSP=0,HLS_SYN_FF=416,HLS_SYN_LUT=1404,HLS_VERSION=2020_2}" *)

module sha256 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        stateREG_i,
        stateREG_o,
        stateREG_o_ap_vld,
        data,
        hash_address0,
        hash_ce0,
        hash_we0,
        hash_d0,
        hash_address1,
        hash_ce1,
        hash_we1,
        hash_d1
);

parameter    ap_ST_fsm_state1 = 12'd1;
parameter    ap_ST_fsm_state2 = 12'd2;
parameter    ap_ST_fsm_state3 = 12'd4;
parameter    ap_ST_fsm_pp1_stage0 = 12'd8;
parameter    ap_ST_fsm_state6 = 12'd16;
parameter    ap_ST_fsm_pp2_stage0 = 12'd32;
parameter    ap_ST_fsm_state9 = 12'd64;
parameter    ap_ST_fsm_state10 = 12'd128;
parameter    ap_ST_fsm_state11 = 12'd256;
parameter    ap_ST_fsm_state12 = 12'd512;
parameter    ap_ST_fsm_state13 = 12'd1024;
parameter    ap_ST_fsm_state14 = 12'd2048;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] stateREG_i;
output  [31:0] stateREG_o;
output   stateREG_o_ap_vld;
input  [7:0] data;
output  [4:0] hash_address0;
output   hash_ce0;
output   hash_we0;
output  [7:0] hash_d0;
output  [4:0] hash_address1;
output   hash_ce1;
output   hash_we1;
output  [7:0] hash_d1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg stateREG_o_ap_vld;
reg[4:0] hash_address0;
reg hash_ce0;
reg hash_we0;
reg[4:0] hash_address1;
reg hash_ce1;
reg hash_we1;
reg[7:0] hash_d1;

(* fsm_encoding = "none" *) reg   [11:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [5:0] k_address0;
reg    k_ce0;
wire   [31:0] k_q0;
reg   [6:0] i_1_reg_397;
reg   [6:0] i_2_reg_409;
reg   [31:0] a_3_reg_420;
wire   [31:0] or_ln22_1_fu_442_p5;
reg   [31:0] or_ln22_1_reg_1147;
wire   [4:0] add_ln20_fu_454_p2;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln23_fu_471_p2;
reg   [0:0] icmp_ln23_reg_1160;
wire    ap_CS_fsm_pp1_stage0;
wire    ap_block_state4_pp1_stage0_iter0;
wire    ap_block_state5_pp1_stage0_iter1;
wire    ap_block_pp1_stage0_11001;
wire   [6:0] add_ln23_fu_477_p2;
reg   [6:0] add_ln23_reg_1164;
reg    ap_enable_reg_pp1_iter0;
reg   [31:0] a_reg_1232;
wire    ap_CS_fsm_state6;
wire   [6:0] add_ln37_fu_695_p2;
wire    ap_CS_fsm_pp2_stage0;
reg    ap_enable_reg_pp2_iter0;
wire    ap_block_state7_pp2_stage0_iter0;
wire    ap_block_state8_pp2_stage0_iter1;
wire    ap_block_pp2_stage0_11001;
wire   [0:0] icmp_ln37_fu_701_p2;
reg   [0:0] icmp_ln37_reg_1243;
wire   [31:0] a_2_fu_1007_p2;
reg    ap_enable_reg_pp2_iter1;
wire   [31:0] add_ln52_fu_1018_p2;
reg   [31:0] add_ln52_reg_1262;
wire    ap_CS_fsm_state9;
wire   [2:0] add_ln66_fu_1023_p2;
reg   [2:0] add_ln66_reg_1267;
wire    ap_CS_fsm_state10;
wire   [7:0] trunc_ln67_1_fu_1062_p1;
reg   [7:0] trunc_ln67_1_reg_1275;
wire   [0:0] icmp_ln66_fu_1029_p2;
wire  signed [2:0] xor_ln68_fu_1066_p2;
reg  signed [2:0] xor_ln68_reg_1280;
wire  signed [3:0] or_ln3_fu_1077_p3;
reg  signed [3:0] or_ln3_reg_1286;
wire    ap_CS_fsm_state3;
wire    ap_block_pp1_stage0_subdone;
reg    ap_condition_pp1_exit_iter0_state4;
reg    ap_enable_reg_pp1_iter1;
wire    ap_block_pp2_stage0_subdone;
reg    ap_condition_pp2_flush_enable;
reg   [5:0] m_address0;
reg    m_ce0;
reg    m_we0;
reg   [31:0] m_d0;
wire   [31:0] m_q0;
wire   [5:0] m_address1;
reg    m_ce1;
wire   [31:0] m_q1;
wire   [5:0] m_address2;
reg    m_ce2;
wire   [31:0] m_q2;
wire   [5:0] m_address3;
reg    m_ce3;
wire   [31:0] m_q3;
wire   [5:0] m_address4;
reg    m_ce4;
wire   [31:0] m_q4;
reg   [4:0] i_reg_386;
wire   [0:0] icmp_ln20_fu_460_p2;
reg   [6:0] ap_phi_mux_i_1_phi_fu_401_p4;
wire    ap_block_pp1_stage0;
reg   [2:0] r_reg_430;
wire    ap_CS_fsm_state13;
wire   [63:0] i_cast_fu_466_p1;
wire   [63:0] zext_ln24_fu_493_p1;
wire   [63:0] zext_ln24_1_fu_504_p1;
wire   [63:0] zext_ln24_2_fu_515_p1;
wire   [63:0] zext_ln24_3_fu_526_p1;
wire   [63:0] i_1_cast15_fu_531_p1;
wire   [63:0] i_2_cast_fu_707_p1;
wire    ap_block_pp2_stage0;
wire   [63:0] zext_ln68_fu_1072_p1;
wire   [63:0] zext_ln69_fu_1085_p1;
wire   [63:0] r_cast16_fu_1090_p1;
wire    ap_CS_fsm_state11;
wire   [63:0] zext_ln70_fu_1098_p1;
wire   [63:0] zext_ln71_fu_1115_p1;
wire    ap_CS_fsm_state12;
wire   [63:0] zext_ln72_fu_1126_p1;
wire   [63:0] zext_ln73_fu_1134_p1;
wire   [63:0] zext_ln74_fu_1142_p1;
reg   [31:0] h_fu_180;
reg   [31:0] h_1_fu_184;
reg   [31:0] g_fu_188;
reg   [31:0] f_fu_192;
wire   [31:0] e_fu_995_p2;
reg   [31:0] d_fu_196;
reg   [31:0] d_1_fu_200;
reg   [31:0] c_fu_204;
wire   [31:0] add_ln24_6_fu_688_p2;
wire   [5:0] empty_13_fu_483_p1;
wire   [5:0] add_ln24_fu_487_p2;
wire   [5:0] add_ln24_1_fu_498_p2;
wire   [5:0] add_ln24_2_fu_509_p2;
wire   [5:0] add_ln24_3_fu_520_p2;
wire   [16:0] trunc_ln24_fu_546_p1;
wire   [14:0] lshr_ln_fu_536_p4;
wire   [18:0] trunc_ln24_1_fu_568_p1;
wire   [12:0] lshr_ln24_1_fu_558_p4;
wire   [21:0] lshr_ln24_2_fu_580_p4;
wire   [31:0] zext_ln24_4_fu_590_p1;
wire   [31:0] or_ln24_1_fu_572_p3;
wire   [31:0] xor_ln24_fu_594_p2;
wire   [31:0] or_ln_fu_550_p3;
wire   [6:0] trunc_ln24_2_fu_616_p1;
wire   [24:0] lshr_ln24_3_fu_606_p4;
wire   [17:0] trunc_ln24_3_fu_638_p1;
wire   [13:0] lshr_ln24_4_fu_628_p4;
wire   [28:0] lshr_ln24_5_fu_650_p4;
wire   [31:0] zext_ln24_5_fu_660_p1;
wire   [31:0] or_ln24_3_fu_642_p3;
wire   [31:0] xor_ln24_2_fu_664_p2;
wire   [31:0] or_ln24_2_fu_620_p3;
wire   [31:0] xor_ln24_1_fu_600_p2;
wire   [31:0] xor_ln24_3_fu_670_p2;
wire   [31:0] add_ln24_5_fu_682_p2;
wire   [31:0] add_ln24_4_fu_676_p2;
wire   [5:0] trunc_ln38_fu_777_p1;
wire   [25:0] lshr_ln1_fu_767_p4;
wire   [10:0] trunc_ln38_1_fu_799_p1;
wire   [20:0] lshr_ln38_1_fu_789_p4;
wire   [24:0] trunc_ln38_2_fu_821_p1;
wire   [6:0] lshr_ln38_2_fu_811_p4;
wire   [31:0] or_ln1_fu_781_p3;
wire   [31:0] or_ln38_1_fu_803_p3;
wire   [31:0] xor_ln38_fu_833_p2;
wire   [31:0] or_ln38_2_fu_825_p3;
wire   [31:0] xor_ln38_2_fu_851_p2;
wire   [31:0] and_ln38_1_fu_857_p2;
wire   [31:0] and_ln38_fu_845_p2;
wire   [31:0] xor_ln38_3_fu_863_p2;
wire   [31:0] xor_ln38_1_fu_839_p2;
wire   [31:0] add_ln38_1_fu_875_p2;
wire   [31:0] add_ln38_2_fu_881_p2;
wire   [31:0] add_ln38_fu_869_p2;
wire   [1:0] trunc_ln39_fu_903_p1;
wire   [29:0] lshr_ln2_fu_893_p4;
wire   [12:0] trunc_ln39_1_fu_925_p1;
wire   [18:0] lshr_ln39_1_fu_915_p4;
wire   [21:0] trunc_ln39_2_fu_947_p1;
wire   [9:0] lshr_ln39_2_fu_937_p4;
wire   [31:0] or_ln2_fu_907_p3;
wire   [31:0] or_ln39_1_fu_929_p3;
wire   [31:0] xor_ln39_fu_959_p2;
wire   [31:0] or_ln39_2_fu_951_p3;
wire   [31:0] xor_ln39_2_fu_971_p2;
wire   [31:0] and_ln39_fu_977_p2;
wire   [31:0] and_ln39_1_fu_983_p2;
wire   [31:0] t1_fu_887_p2;
wire   [31:0] xor_ln39_1_fu_965_p2;
wire   [31:0] add_ln47_fu_1001_p2;
wire   [31:0] xor_ln39_3_fu_989_p2;
wire   [1:0] trunc_ln67_fu_1035_p1;
wire   [4:0] shl_ln_fu_1039_p3;
wire   [4:0] sub_ln67_fu_1047_p2;
wire   [31:0] zext_ln67_fu_1053_p1;
wire   [31:0] lshr_ln67_fu_1057_p2;
wire  signed [3:0] sext_ln70_fu_1095_p1;
wire   [4:0] or_ln4_fu_1107_p3;
wire   [4:0] r_cast14_fu_1103_p1;
wire   [4:0] add_ln72_fu_1120_p2;
wire  signed [4:0] sext_ln73_fu_1131_p1;
wire  signed [4:0] sext_ln74_fu_1139_p1;
wire    ap_CS_fsm_state14;
reg   [11:0] ap_NS_fsm;
reg    ap_idle_pp1;
wire    ap_enable_pp1;
reg    ap_idle_pp2;
wire    ap_enable_pp2;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 12'd1;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp2_iter0 = 1'b0;
#0 ap_enable_reg_pp2_iter1 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
end

sha256_k #(
    .DataWidth( 32 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
k_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(k_address0),
    .ce0(k_ce0),
    .q0(k_q0)
);

sha256_m #(
    .DataWidth( 32 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
m_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(m_address0),
    .ce0(m_ce0),
    .we0(m_we0),
    .d0(m_d0),
    .q0(m_q0),
    .address1(m_address1),
    .ce1(m_ce1),
    .q1(m_q1),
    .address2(m_address2),
    .ce2(m_ce2),
    .q2(m_q2),
    .address3(m_address3),
    .ce3(m_ce3),
    .q3(m_q3),
    .address4(m_address4),
    .ce4(m_ce4),
    .q4(m_q4)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b1 == ap_condition_pp1_exit_iter0_state4))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state3)) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_condition_pp1_exit_iter0_state4))) begin
            ap_enable_reg_pp1_iter1 <= (1'b1 ^ ap_condition_pp1_exit_iter0_state4);
        end else if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
        end else if ((1'b1 == ap_CS_fsm_state3)) begin
            ap_enable_reg_pp1_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter0 <= 1'b0;
    end else begin
        if ((1'b1 == ap_condition_pp2_flush_enable)) begin
            ap_enable_reg_pp2_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_enable_reg_pp2_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp2_stage0_subdone)) begin
            ap_enable_reg_pp2_iter1 <= ap_enable_reg_pp2_iter0;
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_enable_reg_pp2_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        a_3_reg_420 <= stateREG_i;
    end else if (((1'b0 == ap_block_pp2_stage0_11001) & (1'b1 == ap_CS_fsm_pp2_stage0) & (ap_enable_reg_pp2_iter1 == 1'b1) & (icmp_ln37_reg_1243 == 1'd0))) begin
        a_3_reg_420 <= a_2_fu_1007_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_1_reg_397 <= 7'd16;
    end else if (((1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln23_reg_1160 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1))) begin
        i_1_reg_397 <= add_ln23_reg_1164;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_2_reg_409 <= 7'd0;
    end else if (((1'b0 == ap_block_pp2_stage0_11001) & (1'b1 == ap_CS_fsm_pp2_stage0) & (icmp_ln37_fu_701_p2 == 1'd0) & (ap_enable_reg_pp2_iter0 == 1'b1))) begin
        i_2_reg_409 <= add_ln37_fu_695_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_386 <= 5'd0;
    end else if (((icmp_ln20_fu_460_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_386 <= add_ln20_fu_454_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        r_reg_430 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        r_reg_430 <= add_ln66_reg_1267;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        a_reg_1232 <= stateREG_i;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln23_fu_471_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        add_ln23_reg_1164 <= add_ln23_fu_477_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        add_ln52_reg_1262 <= add_ln52_fu_1018_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        add_ln66_reg_1267 <= add_ln66_fu_1023_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp2_stage0_11001) & (1'b1 == ap_CS_fsm_pp2_stage0) & (ap_enable_reg_pp2_iter1 == 1'b1))) begin
        c_fu_204 <= a_3_reg_420;
        d_1_fu_200 <= c_fu_204;
        d_fu_196 <= d_1_fu_200;
        g_fu_188 <= f_fu_192;
        h_1_fu_184 <= g_fu_188;
        h_fu_180 <= h_1_fu_184;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp2_stage0_11001) & (1'b1 == ap_CS_fsm_pp2_stage0) & (ap_enable_reg_pp2_iter1 == 1'b1) & (icmp_ln37_reg_1243 == 1'd0))) begin
        f_fu_192 <= e_fu_995_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp1_stage0_11001) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        icmp_ln23_reg_1160 <= icmp_ln23_fu_471_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp2_stage0_11001) & (1'b1 == ap_CS_fsm_pp2_stage0))) begin
        icmp_ln37_reg_1243 <= icmp_ln37_fu_701_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        or_ln22_1_reg_1147 <= or_ln22_1_fu_442_p5;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state10) & (icmp_ln66_fu_1029_p2 == 1'd0))) begin
        or_ln3_reg_1286[2 : 0] <= or_ln3_fu_1077_p3[2 : 0];
        trunc_ln67_1_reg_1275 <= trunc_ln67_1_fu_1062_p1;
        xor_ln68_reg_1280 <= xor_ln68_fu_1066_p2;
    end
end

always @ (*) begin
    if ((icmp_ln23_fu_471_p2 == 1'd1)) begin
        ap_condition_pp1_exit_iter0_state4 = 1'b1;
    end else begin
        ap_condition_pp1_exit_iter0_state4 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp2_stage0_subdone) & (1'b1 == ap_CS_fsm_pp2_stage0) & (icmp_ln37_fu_701_p2 == 1'd1))) begin
        ap_condition_pp2_flush_enable = 1'b1;
    end else begin
        ap_condition_pp2_flush_enable = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp2_iter1 == 1'b0) & (ap_enable_reg_pp2_iter0 == 1'b0))) begin
        ap_idle_pp2 = 1'b1;
    end else begin
        ap_idle_pp2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (icmp_ln23_reg_1160 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1))) begin
        ap_phi_mux_i_1_phi_fu_401_p4 = add_ln23_reg_1164;
    end else begin
        ap_phi_mux_i_1_phi_fu_401_p4 = i_1_reg_397;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        hash_address0 = zext_ln74_fu_1142_p1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        hash_address0 = zext_ln72_fu_1126_p1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        hash_address0 = zext_ln70_fu_1098_p1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        hash_address0 = zext_ln69_fu_1085_p1;
    end else begin
        hash_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        hash_address1 = zext_ln73_fu_1134_p1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        hash_address1 = zext_ln71_fu_1115_p1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        hash_address1 = r_cast16_fu_1090_p1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        hash_address1 = zext_ln68_fu_1072_p1;
    end else begin
        hash_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state10))) begin
        hash_ce0 = 1'b1;
    end else begin
        hash_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state10))) begin
        hash_ce1 = 1'b1;
    end else begin
        hash_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        hash_d1 = trunc_ln67_1_reg_1275;
    end else if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state10))) begin
        hash_d1 = 8'd0;
    end else begin
        hash_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state13) | ((1'b1 == ap_CS_fsm_state10) & (icmp_ln66_fu_1029_p2 == 1'd0)))) begin
        hash_we0 = 1'b1;
    end else begin
        hash_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state13) | ((1'b1 == ap_CS_fsm_state10) & (icmp_ln66_fu_1029_p2 == 1'd0)))) begin
        hash_we1 = 1'b1;
    end else begin
        hash_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp2_stage0_11001) & (1'b1 == ap_CS_fsm_pp2_stage0) & (ap_enable_reg_pp2_iter0 == 1'b1))) begin
        k_ce0 = 1'b1;
    end else begin
        k_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp2_stage0) & (1'b1 == ap_CS_fsm_pp2_stage0) & (ap_enable_reg_pp2_iter0 == 1'b1))) begin
        m_address0 = i_2_cast_fu_707_p1;
    end else if (((1'b0 == ap_block_pp1_stage0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1))) begin
        m_address0 = i_1_cast15_fu_531_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        m_address0 = i_cast_fu_466_p1;
    end else begin
        m_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp1_stage0_11001) & (1'b1 == ap_CS_fsm_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1)) | ((1'b0 == ap_block_pp2_stage0_11001) & (1'b1 == ap_CS_fsm_pp2_stage0) & (ap_enable_reg_pp2_iter0 == 1'b1)))) begin
        m_ce0 = 1'b1;
    end else begin
        m_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        m_ce1 = 1'b1;
    end else begin
        m_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        m_ce2 = 1'b1;
    end else begin
        m_ce2 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        m_ce3 = 1'b1;
    end else begin
        m_ce3 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        m_ce4 = 1'b1;
    end else begin
        m_ce4 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1))) begin
        m_d0 = add_ln24_6_fu_688_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        m_d0 = or_ln22_1_reg_1147;
    end else begin
        m_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln23_reg_1160 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1)) | ((icmp_ln20_fu_460_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        m_we0 = 1'b1;
    end else begin
        m_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        stateREG_o_ap_vld = 1'b1;
    end else begin
        stateREG_o_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln20_fu_460_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
        end
        ap_ST_fsm_pp1_stage0 : begin
            if (~((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln23_fu_471_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln23_fu_471_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_pp2_stage0;
        end
        ap_ST_fsm_pp2_stage0 : begin
            if (~((1'b0 == ap_block_pp2_stage0_subdone) & (1'b1 == ap_CS_fsm_pp2_stage0) & (ap_enable_reg_pp2_iter1 == 1'b1) & (ap_enable_reg_pp2_iter0 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            end else if (((1'b0 == ap_block_pp2_stage0_subdone) & (1'b1 == ap_CS_fsm_pp2_stage0) & (ap_enable_reg_pp2_iter1 == 1'b1) & (ap_enable_reg_pp2_iter0 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            if (((1'b1 == ap_CS_fsm_state10) & (icmp_ln66_fu_1029_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_2_fu_1007_p2 = (add_ln47_fu_1001_p2 + xor_ln39_3_fu_989_p2);

assign add_ln20_fu_454_p2 = (i_reg_386 + 5'd1);

assign add_ln23_fu_477_p2 = (ap_phi_mux_i_1_phi_fu_401_p4 + 7'd1);

assign add_ln24_1_fu_498_p2 = ($signed(empty_13_fu_483_p1) + $signed(6'd57));

assign add_ln24_2_fu_509_p2 = ($signed(empty_13_fu_483_p1) + $signed(6'd49));

assign add_ln24_3_fu_520_p2 = ($signed(empty_13_fu_483_p1) + $signed(6'd48));

assign add_ln24_4_fu_676_p2 = (m_q3 + m_q1);

assign add_ln24_5_fu_682_p2 = (xor_ln24_1_fu_600_p2 + xor_ln24_3_fu_670_p2);

assign add_ln24_6_fu_688_p2 = (add_ln24_5_fu_682_p2 + add_ln24_4_fu_676_p2);

assign add_ln24_fu_487_p2 = ($signed(empty_13_fu_483_p1) + $signed(6'd62));

assign add_ln37_fu_695_p2 = (i_2_reg_409 + 7'd1);

assign add_ln38_1_fu_875_p2 = (xor_ln38_3_fu_863_p2 + xor_ln38_1_fu_839_p2);

assign add_ln38_2_fu_881_p2 = (add_ln38_1_fu_875_p2 + h_fu_180);

assign add_ln38_fu_869_p2 = (k_q0 + m_q0);

assign add_ln47_fu_1001_p2 = (xor_ln39_1_fu_965_p2 + t1_fu_887_p2);

assign add_ln52_fu_1018_p2 = (a_reg_1232 + a_3_reg_420);

assign add_ln66_fu_1023_p2 = (r_reg_430 + 3'd1);

assign add_ln72_fu_1120_p2 = ($signed(r_cast14_fu_1103_p1) + $signed(5'd20));

assign and_ln38_1_fu_857_p2 = (xor_ln38_2_fu_851_p2 & h_1_fu_184);

assign and_ln38_fu_845_p2 = (g_fu_188 & f_fu_192);

assign and_ln39_1_fu_983_p2 = (d_1_fu_200 & c_fu_204);

assign and_ln39_fu_977_p2 = (xor_ln39_2_fu_971_p2 & a_3_reg_420);

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_pp2_stage0 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd6];

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp2_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp2_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp2_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state4_pp1_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp1_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp2_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp2_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign ap_enable_pp2 = (ap_idle_pp2 ^ 1'b1);

assign e_fu_995_p2 = (t1_fu_887_p2 + d_fu_196);

assign empty_13_fu_483_p1 = ap_phi_mux_i_1_phi_fu_401_p4[5:0];

assign hash_d0 = 8'd0;

assign i_1_cast15_fu_531_p1 = i_1_reg_397;

assign i_2_cast_fu_707_p1 = i_2_reg_409;

assign i_cast_fu_466_p1 = i_reg_386;

assign icmp_ln20_fu_460_p2 = ((i_reg_386 == 5'd16) ? 1'b1 : 1'b0);

assign icmp_ln23_fu_471_p2 = ((ap_phi_mux_i_1_phi_fu_401_p4 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln37_fu_701_p2 = ((i_2_reg_409 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln66_fu_1029_p2 = ((r_reg_430 == 3'd4) ? 1'b1 : 1'b0);

assign k_address0 = i_2_cast_fu_707_p1;

assign lshr_ln1_fu_767_p4 = {{f_fu_192[31:6]}};

assign lshr_ln24_1_fu_558_p4 = {{m_q4[31:19]}};

assign lshr_ln24_2_fu_580_p4 = {{m_q4[31:10]}};

assign lshr_ln24_3_fu_606_p4 = {{m_q2[31:7]}};

assign lshr_ln24_4_fu_628_p4 = {{m_q2[31:18]}};

assign lshr_ln24_5_fu_650_p4 = {{m_q2[31:3]}};

assign lshr_ln2_fu_893_p4 = {{a_3_reg_420[31:2]}};

assign lshr_ln38_1_fu_789_p4 = {{f_fu_192[31:11]}};

assign lshr_ln38_2_fu_811_p4 = {{f_fu_192[31:25]}};

assign lshr_ln39_1_fu_915_p4 = {{a_3_reg_420[31:13]}};

assign lshr_ln39_2_fu_937_p4 = {{a_3_reg_420[31:22]}};

assign lshr_ln67_fu_1057_p2 = add_ln52_reg_1262 >> zext_ln67_fu_1053_p1;

assign lshr_ln_fu_536_p4 = {{m_q4[31:17]}};

assign m_address1 = zext_ln24_3_fu_526_p1;

assign m_address2 = zext_ln24_2_fu_515_p1;

assign m_address3 = zext_ln24_1_fu_504_p1;

assign m_address4 = zext_ln24_fu_493_p1;

assign or_ln1_fu_781_p3 = {{trunc_ln38_fu_777_p1}, {lshr_ln1_fu_767_p4}};

assign or_ln22_1_fu_442_p5 = {{{{data}, {data}}, {data}}, {data}};

assign or_ln24_1_fu_572_p3 = {{trunc_ln24_1_fu_568_p1}, {lshr_ln24_1_fu_558_p4}};

assign or_ln24_2_fu_620_p3 = {{trunc_ln24_2_fu_616_p1}, {lshr_ln24_3_fu_606_p4}};

assign or_ln24_3_fu_642_p3 = {{trunc_ln24_3_fu_638_p1}, {lshr_ln24_4_fu_628_p4}};

assign or_ln2_fu_907_p3 = {{trunc_ln39_fu_903_p1}, {lshr_ln2_fu_893_p4}};

assign or_ln38_1_fu_803_p3 = {{trunc_ln38_1_fu_799_p1}, {lshr_ln38_1_fu_789_p4}};

assign or_ln38_2_fu_825_p3 = {{trunc_ln38_2_fu_821_p1}, {lshr_ln38_2_fu_811_p4}};

assign or_ln39_1_fu_929_p3 = {{trunc_ln39_1_fu_925_p1}, {lshr_ln39_1_fu_915_p4}};

assign or_ln39_2_fu_951_p3 = {{trunc_ln39_2_fu_947_p1}, {lshr_ln39_2_fu_937_p4}};

assign or_ln3_fu_1077_p3 = {{1'd1}, {r_reg_430}};

assign or_ln4_fu_1107_p3 = {{2'd2}, {r_reg_430}};

assign or_ln_fu_550_p3 = {{trunc_ln24_fu_546_p1}, {lshr_ln_fu_536_p4}};

assign r_cast14_fu_1103_p1 = r_reg_430;

assign r_cast16_fu_1090_p1 = r_reg_430;

assign sext_ln70_fu_1095_p1 = xor_ln68_reg_1280;

assign sext_ln73_fu_1131_p1 = or_ln3_reg_1286;

assign sext_ln74_fu_1139_p1 = xor_ln68_reg_1280;

assign shl_ln_fu_1039_p3 = {{trunc_ln67_fu_1035_p1}, {3'd0}};

assign stateREG_o = 32'd0;

assign sub_ln67_fu_1047_p2 = ($signed(5'd24) - $signed(shl_ln_fu_1039_p3));

assign t1_fu_887_p2 = (add_ln38_2_fu_881_p2 + add_ln38_fu_869_p2);

assign trunc_ln24_1_fu_568_p1 = m_q4[18:0];

assign trunc_ln24_2_fu_616_p1 = m_q2[6:0];

assign trunc_ln24_3_fu_638_p1 = m_q2[17:0];

assign trunc_ln24_fu_546_p1 = m_q4[16:0];

assign trunc_ln38_1_fu_799_p1 = f_fu_192[10:0];

assign trunc_ln38_2_fu_821_p1 = f_fu_192[24:0];

assign trunc_ln38_fu_777_p1 = f_fu_192[5:0];

assign trunc_ln39_1_fu_925_p1 = a_3_reg_420[12:0];

assign trunc_ln39_2_fu_947_p1 = a_3_reg_420[21:0];

assign trunc_ln39_fu_903_p1 = a_3_reg_420[1:0];

assign trunc_ln67_1_fu_1062_p1 = lshr_ln67_fu_1057_p2[7:0];

assign trunc_ln67_fu_1035_p1 = r_reg_430[1:0];

assign xor_ln24_1_fu_600_p2 = (xor_ln24_fu_594_p2 ^ or_ln_fu_550_p3);

assign xor_ln24_2_fu_664_p2 = (zext_ln24_5_fu_660_p1 ^ or_ln24_3_fu_642_p3);

assign xor_ln24_3_fu_670_p2 = (xor_ln24_2_fu_664_p2 ^ or_ln24_2_fu_620_p3);

assign xor_ln24_fu_594_p2 = (zext_ln24_4_fu_590_p1 ^ or_ln24_1_fu_572_p3);

assign xor_ln38_1_fu_839_p2 = (xor_ln38_fu_833_p2 ^ or_ln38_2_fu_825_p3);

assign xor_ln38_2_fu_851_p2 = (f_fu_192 ^ 32'd4294967295);

assign xor_ln38_3_fu_863_p2 = (and_ln38_fu_845_p2 ^ and_ln38_1_fu_857_p2);

assign xor_ln38_fu_833_p2 = (or_ln38_1_fu_803_p3 ^ or_ln1_fu_781_p3);

assign xor_ln39_1_fu_965_p2 = (xor_ln39_fu_959_p2 ^ or_ln39_2_fu_951_p3);

assign xor_ln39_2_fu_971_p2 = (d_1_fu_200 ^ c_fu_204);

assign xor_ln39_3_fu_989_p2 = (and_ln39_fu_977_p2 ^ and_ln39_1_fu_983_p2);

assign xor_ln39_fu_959_p2 = (or_ln39_1_fu_929_p3 ^ or_ln2_fu_907_p3);

assign xor_ln68_fu_1066_p2 = (r_reg_430 ^ 3'd4);

assign zext_ln24_1_fu_504_p1 = add_ln24_1_fu_498_p2;

assign zext_ln24_2_fu_515_p1 = add_ln24_2_fu_509_p2;

assign zext_ln24_3_fu_526_p1 = add_ln24_3_fu_520_p2;

assign zext_ln24_4_fu_590_p1 = lshr_ln24_2_fu_580_p4;

assign zext_ln24_5_fu_660_p1 = lshr_ln24_5_fu_650_p4;

assign zext_ln24_fu_493_p1 = add_ln24_fu_487_p2;

assign zext_ln67_fu_1053_p1 = sub_ln67_fu_1047_p2;

assign zext_ln68_fu_1072_p1 = $unsigned(xor_ln68_fu_1066_p2);

assign zext_ln69_fu_1085_p1 = $unsigned(or_ln3_fu_1077_p3);

assign zext_ln70_fu_1098_p1 = $unsigned(sext_ln70_fu_1095_p1);

assign zext_ln71_fu_1115_p1 = or_ln4_fu_1107_p3;

assign zext_ln72_fu_1126_p1 = add_ln72_fu_1120_p2;

assign zext_ln73_fu_1134_p1 = $unsigned(sext_ln73_fu_1131_p1);

assign zext_ln74_fu_1142_p1 = $unsigned(sext_ln74_fu_1139_p1);

always @ (posedge ap_clk) begin
    or_ln3_reg_1286[3] <= 1'b1;
end

endmodule //sha256
