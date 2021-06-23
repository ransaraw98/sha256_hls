# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "AddressRange" -parent ${Page_0}
  ipgui::add_param $IPINST -name "AddressWidth" -parent ${Page_0}
  ipgui::add_param $IPINST -name "DataWidth" -parent ${Page_0}


}

proc update_PARAM_VALUE.AddressRange { PARAM_VALUE.AddressRange } {
	# Procedure called to update AddressRange when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.AddressRange { PARAM_VALUE.AddressRange } {
	# Procedure called to validate AddressRange
	return true
}

proc update_PARAM_VALUE.AddressWidth { PARAM_VALUE.AddressWidth } {
	# Procedure called to update AddressWidth when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.AddressWidth { PARAM_VALUE.AddressWidth } {
	# Procedure called to validate AddressWidth
	return true
}

proc update_PARAM_VALUE.DataWidth { PARAM_VALUE.DataWidth } {
	# Procedure called to update DataWidth when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.DataWidth { PARAM_VALUE.DataWidth } {
	# Procedure called to validate DataWidth
	return true
}


proc update_MODELPARAM_VALUE.DataWidth { MODELPARAM_VALUE.DataWidth PARAM_VALUE.DataWidth } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.DataWidth}] ${MODELPARAM_VALUE.DataWidth}
}

proc update_MODELPARAM_VALUE.AddressRange { MODELPARAM_VALUE.AddressRange PARAM_VALUE.AddressRange } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.AddressRange}] ${MODELPARAM_VALUE.AddressRange}
}

proc update_MODELPARAM_VALUE.AddressWidth { MODELPARAM_VALUE.AddressWidth PARAM_VALUE.AddressWidth } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.AddressWidth}] ${MODELPARAM_VALUE.AddressWidth}
}

