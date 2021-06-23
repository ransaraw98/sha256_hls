# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "AWIDTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "DWIDTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "MEM_SIZE" -parent ${Page_0}


}

proc update_PARAM_VALUE.AWIDTH { PARAM_VALUE.AWIDTH } {
	# Procedure called to update AWIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.AWIDTH { PARAM_VALUE.AWIDTH } {
	# Procedure called to validate AWIDTH
	return true
}

proc update_PARAM_VALUE.DWIDTH { PARAM_VALUE.DWIDTH } {
	# Procedure called to update DWIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.DWIDTH { PARAM_VALUE.DWIDTH } {
	# Procedure called to validate DWIDTH
	return true
}

proc update_PARAM_VALUE.MEM_SIZE { PARAM_VALUE.MEM_SIZE } {
	# Procedure called to update MEM_SIZE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.MEM_SIZE { PARAM_VALUE.MEM_SIZE } {
	# Procedure called to validate MEM_SIZE
	return true
}


proc update_MODELPARAM_VALUE.DWIDTH { MODELPARAM_VALUE.DWIDTH PARAM_VALUE.DWIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.DWIDTH}] ${MODELPARAM_VALUE.DWIDTH}
}

proc update_MODELPARAM_VALUE.AWIDTH { MODELPARAM_VALUE.AWIDTH PARAM_VALUE.AWIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.AWIDTH}] ${MODELPARAM_VALUE.AWIDTH}
}

proc update_MODELPARAM_VALUE.MEM_SIZE { MODELPARAM_VALUE.MEM_SIZE PARAM_VALUE.MEM_SIZE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.MEM_SIZE}] ${MODELPARAM_VALUE.MEM_SIZE}
}

