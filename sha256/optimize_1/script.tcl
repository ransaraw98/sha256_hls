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
open_solution "optimize_1" -flow_target vivado
set_part {xcvu11p-flga2577-1-e}
create_clock -period 10 -name default
source "./sha256/optimize_1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
