set moduleName sha256
set isTopModule 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {sha256}
set C_modelType { void 0 }
set C_modelArgList {
	{ stateREG int 32 regular {pointer 2}  }
	{ data int 8 regular {pointer 0}  }
	{ hash int 8 regular {array 32 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "stateREG", "interface" : "wire", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "stateREG","cData": "int","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "data", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "data","cData": "char","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "hash", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "hash","cData": "char","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ stateREG_i sc_in sc_lv 32 signal 0 } 
	{ stateREG_o sc_out sc_lv 32 signal 0 } 
	{ stateREG_o_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ data sc_in sc_lv 8 signal 1 } 
	{ hash_address0 sc_out sc_lv 5 signal 2 } 
	{ hash_ce0 sc_out sc_logic 1 signal 2 } 
	{ hash_we0 sc_out sc_logic 1 signal 2 } 
	{ hash_d0 sc_out sc_lv 8 signal 2 } 
	{ hash_address1 sc_out sc_lv 5 signal 2 } 
	{ hash_ce1 sc_out sc_logic 1 signal 2 } 
	{ hash_we1 sc_out sc_logic 1 signal 2 } 
	{ hash_d1 sc_out sc_lv 8 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "stateREG_i", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "stateREG", "role": "i" }} , 
 	{ "name": "stateREG_o", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "stateREG", "role": "o" }} , 
 	{ "name": "stateREG_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "stateREG", "role": "o_ap_vld" }} , 
 	{ "name": "data", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data", "role": "default" }} , 
 	{ "name": "hash_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "hash", "role": "address0" }} , 
 	{ "name": "hash_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash", "role": "ce0" }} , 
 	{ "name": "hash_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash", "role": "we0" }} , 
 	{ "name": "hash_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "hash", "role": "d0" }} , 
 	{ "name": "hash_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "hash", "role": "address1" }} , 
 	{ "name": "hash_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash", "role": "ce1" }} , 
 	{ "name": "hash_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash", "role": "we1" }} , 
 	{ "name": "hash_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "hash", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5"],
		"CDFG" : "sha256",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "153", "EstimateLatencyMax" : "153",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "stateREG", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "data", "Type" : "None", "Direction" : "I"},
			{"Name" : "hash", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "k", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_646_32_1_1_U1", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_646_32_1_1_U2", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_646_32_1_1_U3", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_646_32_1_1_U4", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	sha256 {
		stateREG {Type IO LastRead 4 FirstWrite 7}
		data {Type I LastRead 0 FirstWrite -1}
		hash {Type O LastRead -1 FirstWrite 8}
		k {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "153", "Max" : "153"}
	, {"Name" : "Interval", "Min" : "154", "Max" : "154"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
]}

set Spec2ImplPortList { 
	stateREG { ap_ovld {  { stateREG_i in_data 0 32 }  { stateREG_o out_data 1 32 }  { stateREG_o_ap_vld out_vld 1 1 } } }
	data { ap_none {  { data in_data 0 8 } } }
	hash { ap_memory {  { hash_address0 mem_address 1 5 }  { hash_ce0 mem_ce 1 1 }  { hash_we0 mem_we 1 1 }  { hash_d0 mem_din 1 8 }  { hash_address1 MemPortADDR2 1 5 }  { hash_ce1 MemPortCE2 1 1 }  { hash_we1 MemPortWE2 1 1 }  { hash_d1 MemPortDIN2 1 8 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
