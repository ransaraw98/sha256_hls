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
	{ istateREG_V int 32 regular {fifo 0 volatile }  }
	{ idata_V int 8 regular {fifo 0 volatile }  }
	{ ohash_V int 8 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "istateREG_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "istateREG.V","cData": "int","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "idata_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "idata.V","cData": "char","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ohash_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "ohash.V","cData": "char","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 15
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ istateREG_V_dout sc_in sc_lv 32 signal 0 } 
	{ istateREG_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ istateREG_V_read sc_out sc_logic 1 signal 0 } 
	{ idata_V_dout sc_in sc_lv 8 signal 1 } 
	{ idata_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ idata_V_read sc_out sc_logic 1 signal 1 } 
	{ ohash_V_din sc_out sc_lv 8 signal 2 } 
	{ ohash_V_full_n sc_in sc_logic 1 signal 2 } 
	{ ohash_V_write sc_out sc_logic 1 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "istateREG_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "istateREG_V", "role": "dout" }} , 
 	{ "name": "istateREG_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "istateREG_V", "role": "empty_n" }} , 
 	{ "name": "istateREG_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "istateREG_V", "role": "read" }} , 
 	{ "name": "idata_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "idata_V", "role": "dout" }} , 
 	{ "name": "idata_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "idata_V", "role": "empty_n" }} , 
 	{ "name": "idata_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "idata_V", "role": "read" }} , 
 	{ "name": "ohash_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ohash_V", "role": "din" }} , 
 	{ "name": "ohash_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ohash_V", "role": "full_n" }} , 
 	{ "name": "ohash_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ohash_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "sha256",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "271", "EstimateLatencyMax" : "271",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "istateREG_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "istateREG_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "idata_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "idata_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ohash_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "ohash_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "k", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.stateREG_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.data_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_646_32_1_1_U1", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_646_32_1_1_U2", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_646_32_1_1_U3", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_646_32_1_1_U4", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	sha256 {
		istateREG_V {Type I LastRead 2 FirstWrite -1}
		idata_V {Type I LastRead 4 FirstWrite -1}
		ohash_V {Type O LastRead -1 FirstWrite 23}
		k {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "271", "Max" : "271"}
	, {"Name" : "Interval", "Min" : "272", "Max" : "272"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
]}

set Spec2ImplPortList { 
	istateREG_V { ap_fifo {  { istateREG_V_dout fifo_data 0 32 }  { istateREG_V_empty_n fifo_status 0 1 }  { istateREG_V_read fifo_update 1 1 } } }
	idata_V { ap_fifo {  { idata_V_dout fifo_data 0 8 }  { idata_V_empty_n fifo_status 0 1 }  { idata_V_read fifo_update 1 1 } } }
	ohash_V { ap_fifo {  { ohash_V_din fifo_data 1 8 }  { ohash_V_full_n fifo_status 0 1 }  { ohash_V_write fifo_update 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
	istateREG_V { fifo_read 8 no_conditional }
	idata_V { fifo_read 64 no_conditional }
	ohash_V { fifo_write 32 no_conditional }
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
