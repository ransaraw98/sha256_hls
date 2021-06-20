set moduleName sha256_final
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {sha256_final}
set C_modelType { void 0 }
set C_modelArgList {
	{ ctx int 64 regular {array 14 { 2 2 } 1 1 }  }
	{ hash int 8 regular {array 32 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ctx", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE"} , 
 	{ "Name" : "hash", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ctx_address0 sc_out sc_lv 4 signal 0 } 
	{ ctx_ce0 sc_out sc_logic 1 signal 0 } 
	{ ctx_we0 sc_out sc_lv 8 signal 0 } 
	{ ctx_d0 sc_out sc_lv 64 signal 0 } 
	{ ctx_q0 sc_in sc_lv 64 signal 0 } 
	{ ctx_address1 sc_out sc_lv 4 signal 0 } 
	{ ctx_ce1 sc_out sc_logic 1 signal 0 } 
	{ ctx_we1 sc_out sc_lv 8 signal 0 } 
	{ ctx_d1 sc_out sc_lv 64 signal 0 } 
	{ ctx_q1 sc_in sc_lv 64 signal 0 } 
	{ hash_address0 sc_out sc_lv 5 signal 1 } 
	{ hash_ce0 sc_out sc_logic 1 signal 1 } 
	{ hash_we0 sc_out sc_logic 1 signal 1 } 
	{ hash_d0 sc_out sc_lv 8 signal 1 } 
	{ hash_address1 sc_out sc_lv 5 signal 1 } 
	{ hash_ce1 sc_out sc_logic 1 signal 1 } 
	{ hash_we1 sc_out sc_logic 1 signal 1 } 
	{ hash_d1 sc_out sc_lv 8 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ctx_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx", "role": "address0" }} , 
 	{ "name": "ctx_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx", "role": "ce0" }} , 
 	{ "name": "ctx_we0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx", "role": "we0" }} , 
 	{ "name": "ctx_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ctx", "role": "d0" }} , 
 	{ "name": "ctx_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ctx", "role": "q0" }} , 
 	{ "name": "ctx_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctx", "role": "address1" }} , 
 	{ "name": "ctx_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctx", "role": "ce1" }} , 
 	{ "name": "ctx_we1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ctx", "role": "we1" }} , 
 	{ "name": "ctx_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ctx", "role": "d1" }} , 
 	{ "name": "ctx_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ctx", "role": "q1" }} , 
 	{ "name": "hash_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "hash", "role": "address0" }} , 
 	{ "name": "hash_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash", "role": "ce0" }} , 
 	{ "name": "hash_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash", "role": "we0" }} , 
 	{ "name": "hash_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "hash", "role": "d0" }} , 
 	{ "name": "hash_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "hash", "role": "address1" }} , 
 	{ "name": "hash_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash", "role": "ce1" }} , 
 	{ "name": "hash_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash", "role": "we1" }} , 
 	{ "name": "hash_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "hash", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "sha256_final",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ctx", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_compress_fu_395", "Port" : "ctx"}]},
			{"Name" : "hash", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_395", "Parent" : "0",
		"CDFG" : "compress",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "42", "EstimateLatencyMax" : "42",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ctx", "Type" : "Memory", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	sha256_final {
		ctx {Type IO LastRead 40 FirstWrite 1}
		hash {Type O LastRead -1 FirstWrite 13}}
	compress {
		ctx {Type IO LastRead 40 FirstWrite 40}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	ctx { ap_memory {  { ctx_address0 mem_address 1 4 }  { ctx_ce0 mem_ce 1 1 }  { ctx_we0 mem_we 1 8 }  { ctx_d0 mem_din 1 64 }  { ctx_q0 mem_dout 0 64 }  { ctx_address1 MemPortADDR2 1 4 }  { ctx_ce1 MemPortCE2 1 1 }  { ctx_we1 MemPortWE2 1 8 }  { ctx_d1 MemPortDIN2 1 64 }  { ctx_q1 MemPortDOUT2 0 64 } } }
	hash { ap_memory {  { hash_address0 mem_address 1 5 }  { hash_ce0 mem_ce 1 1 }  { hash_we0 mem_we 1 1 }  { hash_d0 mem_din 1 8 }  { hash_address1 MemPortADDR2 1 5 }  { hash_ce1 MemPortCE2 1 1 }  { hash_we1 MemPortWE2 1 1 }  { hash_d1 MemPortDIN2 1 8 } } }
}
