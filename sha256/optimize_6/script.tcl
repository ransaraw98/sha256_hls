############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project sha256
set_top sha256
add_files sha256.h
add_files sha256.cpp
add_files -tb shatest.cpp -cflags "-DHW_COSIM -Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "optimize_6" -flow_target vivado
set_part {xcvu11p-flga2577-1-e}
create_clock -period 10 -name default
config_export -format ip_catalog -output C:/Users/menuw/Documents/research/SHA256/hls/exported_RTL/Verilog/sha256.zip -rtl verilog
source "./sha256/optimize_6/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -rtl verilog -format ip_catalog -output C:/Users/menuw/Documents/research/SHA256/hls/exported_RTL/Verilog/sha256.zip
