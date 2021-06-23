
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set stateREG_group [add_wave_group stateREG(wire) -into $cinoutgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/stateREG_o_ap_vld -into $stateREG_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/stateREG_o -into $stateREG_group -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/stateREG_i -into $stateREG_group -radix hex
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set hash_group [add_wave_group hash(memory) -into $coutputgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/hash_d1 -into $hash_group -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/hash_we1 -into $hash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/hash_ce1 -into $hash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/hash_address1 -into $hash_group -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/hash_d0 -into $hash_group -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/hash_we0 -into $hash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/hash_ce0 -into $hash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/AESL_inst_sha256/hash_address0 -into $hash_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set data_group [add_wave_group data(wire) -into $cinputgroup]
add_wave /apatb_sha256_top/AESL_inst_sha256/data -into $data_group -radix hex
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
add_wave /apatb_sha256_top/LENGTH_stateREG -into $tb_portdepth_group -radix hex
add_wave /apatb_sha256_top/LENGTH_data -into $tb_portdepth_group -radix hex
add_wave /apatb_sha256_top/LENGTH_hash -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_stateREG_group [add_wave_group stateREG(wire) -into $tbcinoutgroup]
add_wave /apatb_sha256_top/stateREG_o_ap_vld -into $tb_stateREG_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/stateREG_o -into $tb_stateREG_group -radix hex
add_wave /apatb_sha256_top/stateREG_i -into $tb_stateREG_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_hash_group [add_wave_group hash(memory) -into $tbcoutputgroup]
add_wave /apatb_sha256_top/hash_d1 -into $tb_hash_group -radix hex
add_wave /apatb_sha256_top/hash_we1 -into $tb_hash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/hash_ce1 -into $tb_hash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/hash_address1 -into $tb_hash_group -radix hex
add_wave /apatb_sha256_top/hash_d0 -into $tb_hash_group -radix hex
add_wave /apatb_sha256_top/hash_we0 -into $tb_hash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/hash_ce0 -into $tb_hash_group -color #ffff00 -radix hex
add_wave /apatb_sha256_top/hash_address0 -into $tb_hash_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_data_group [add_wave_group data(wire) -into $tbcinputgroup]
add_wave /apatb_sha256_top/data -into $tb_data_group -radix hex
save_wave_config sha256.wcfg
run all
quit

