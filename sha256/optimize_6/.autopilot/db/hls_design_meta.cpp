#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("istateREG_V_dout", 32, hls_in, 0, "ap_fifo", "fifo_data", 8),
	Port_Property("istateREG_V_empty_n", 1, hls_in, 0, "ap_fifo", "fifo_status", 8),
	Port_Property("istateREG_V_read", 1, hls_out, 0, "ap_fifo", "fifo_update", 8),
	Port_Property("idata_V_dout", 8, hls_in, 1, "ap_fifo", "fifo_data", 64),
	Port_Property("idata_V_empty_n", 1, hls_in, 1, "ap_fifo", "fifo_status", 64),
	Port_Property("idata_V_read", 1, hls_out, 1, "ap_fifo", "fifo_update", 64),
	Port_Property("ohash_V_din", 8, hls_out, 2, "ap_fifo", "fifo_data", 32),
	Port_Property("ohash_V_full_n", 1, hls_in, 2, "ap_fifo", "fifo_status", 32),
	Port_Property("ohash_V_write", 1, hls_out, 2, "ap_fifo", "fifo_update", 32),
};
const char* HLS_Design_Meta::dut_name = "sha256";
