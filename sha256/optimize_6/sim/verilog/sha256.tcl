
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set ohash_group [add_wave_group ohash(fifo) -into $coutputgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/ohash_V_write -into $ohash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/ohash_V_full_n -into $ohash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/ohash_V_din -into $ohash_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set idata_group [add_wave_group idata(fifo) -into $cinputgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/idata_V_read -into $idata_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/idata_V_empty_n -into $idata_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/idata_V_dout -into $idata_group -radix hex
set istateREG_group [add_wave_group istateREG(fifo) -into $cinputgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/istateREG_V_read -into $istateREG_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/istateREG_V_empty_n -into $istateREG_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/istateREG_V_dout -into $istateREG_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/ap_start -into $blocksiggroup
add_wave /apatb_sha256_top/AESL_inst_sha256/ap_done -into $blocksiggroup
add_wave /apatb_sha256_top/AESL_inst_sha256/ap_idle -into $blocksiggroup
add_wave /apatb_sha256_top/AESL_inst_sha256/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_sha256_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_sha256_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_sha256_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_sha256_top/LENGTH_istateREG_V -into $tb_portdepth_group -radix hex
add_wave /apatb_sha256_top/LENGTH_idata_V -into $tb_portdepth_group -radix hex
add_wave /apatb_sha256_top/LENGTH_ohash_V -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_ohash_group [add_wave_group ohash(fifo) -into $tbcoutputgroup]
add_wave /apatb_sha256_top/ohash_V_write -into $tb_ohash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/ohash_V_full_n -into $tb_ohash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/ohash_V_din -into $tb_ohash_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_idata_group [add_wave_group idata(fifo) -into $tbcinputgroup]
add_wave /apatb_sha256_top/idata_V_read -into $tb_idata_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/idata_V_empty_n -into $tb_idata_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/idata_V_dout -into $tb_idata_group -radix hex
set tb_istateREG_group [add_wave_group istateREG(fifo) -into $tbcinputgroup]
add_wave /apatb_sha256_top/istateREG_V_read -into $tb_istateREG_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/istateREG_V_empty_n -into $tb_istateREG_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/istateREG_V_dout -into $tb_istateREG_group -radix hex
save_wave_config sha256.wcfg
run all
quit

