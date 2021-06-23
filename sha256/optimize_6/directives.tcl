############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline "sha256/convert_to_words"
set_directive_pipeline "sha256/create_schedule"
set_directive_pipeline "sha256/compression"
set_directive_pipeline -II 4 "sha256/convert_endianess"
set_directive_top -name sha256 "sha256"
set_directive_array_partition -type complete -factor 8 -dim 1 "sha256" m
