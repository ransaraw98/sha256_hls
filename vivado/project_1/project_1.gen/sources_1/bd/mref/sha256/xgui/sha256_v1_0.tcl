# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "ap_ST_fsm_pp0_stage0" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_pp1_stage0" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_pp2_stage0" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_pp4_stage0" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_pp6_stage0" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state1" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state10" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state11" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state12" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state13" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state14" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state15" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state16" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state19" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state20" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state21" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state22" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state23" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state24" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state25" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state26" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state27" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state30" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state4" -parent ${Page_0}
  ipgui::add_param $IPINST -name "ap_ST_fsm_state7" -parent ${Page_0}


}

proc update_PARAM_VALUE.ap_ST_fsm_pp0_stage0 { PARAM_VALUE.ap_ST_fsm_pp0_stage0 } {
	# Procedure called to update ap_ST_fsm_pp0_stage0 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_pp0_stage0 { PARAM_VALUE.ap_ST_fsm_pp0_stage0 } {
	# Procedure called to validate ap_ST_fsm_pp0_stage0
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_pp1_stage0 { PARAM_VALUE.ap_ST_fsm_pp1_stage0 } {
	# Procedure called to update ap_ST_fsm_pp1_stage0 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_pp1_stage0 { PARAM_VALUE.ap_ST_fsm_pp1_stage0 } {
	# Procedure called to validate ap_ST_fsm_pp1_stage0
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_pp2_stage0 { PARAM_VALUE.ap_ST_fsm_pp2_stage0 } {
	# Procedure called to update ap_ST_fsm_pp2_stage0 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_pp2_stage0 { PARAM_VALUE.ap_ST_fsm_pp2_stage0 } {
	# Procedure called to validate ap_ST_fsm_pp2_stage0
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_pp4_stage0 { PARAM_VALUE.ap_ST_fsm_pp4_stage0 } {
	# Procedure called to update ap_ST_fsm_pp4_stage0 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_pp4_stage0 { PARAM_VALUE.ap_ST_fsm_pp4_stage0 } {
	# Procedure called to validate ap_ST_fsm_pp4_stage0
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_pp6_stage0 { PARAM_VALUE.ap_ST_fsm_pp6_stage0 } {
	# Procedure called to update ap_ST_fsm_pp6_stage0 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_pp6_stage0 { PARAM_VALUE.ap_ST_fsm_pp6_stage0 } {
	# Procedure called to validate ap_ST_fsm_pp6_stage0
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state1 { PARAM_VALUE.ap_ST_fsm_state1 } {
	# Procedure called to update ap_ST_fsm_state1 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state1 { PARAM_VALUE.ap_ST_fsm_state1 } {
	# Procedure called to validate ap_ST_fsm_state1
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state10 { PARAM_VALUE.ap_ST_fsm_state10 } {
	# Procedure called to update ap_ST_fsm_state10 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state10 { PARAM_VALUE.ap_ST_fsm_state10 } {
	# Procedure called to validate ap_ST_fsm_state10
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state11 { PARAM_VALUE.ap_ST_fsm_state11 } {
	# Procedure called to update ap_ST_fsm_state11 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state11 { PARAM_VALUE.ap_ST_fsm_state11 } {
	# Procedure called to validate ap_ST_fsm_state11
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state12 { PARAM_VALUE.ap_ST_fsm_state12 } {
	# Procedure called to update ap_ST_fsm_state12 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state12 { PARAM_VALUE.ap_ST_fsm_state12 } {
	# Procedure called to validate ap_ST_fsm_state12
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state13 { PARAM_VALUE.ap_ST_fsm_state13 } {
	# Procedure called to update ap_ST_fsm_state13 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state13 { PARAM_VALUE.ap_ST_fsm_state13 } {
	# Procedure called to validate ap_ST_fsm_state13
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state14 { PARAM_VALUE.ap_ST_fsm_state14 } {
	# Procedure called to update ap_ST_fsm_state14 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state14 { PARAM_VALUE.ap_ST_fsm_state14 } {
	# Procedure called to validate ap_ST_fsm_state14
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state15 { PARAM_VALUE.ap_ST_fsm_state15 } {
	# Procedure called to update ap_ST_fsm_state15 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state15 { PARAM_VALUE.ap_ST_fsm_state15 } {
	# Procedure called to validate ap_ST_fsm_state15
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state16 { PARAM_VALUE.ap_ST_fsm_state16 } {
	# Procedure called to update ap_ST_fsm_state16 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state16 { PARAM_VALUE.ap_ST_fsm_state16 } {
	# Procedure called to validate ap_ST_fsm_state16
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state19 { PARAM_VALUE.ap_ST_fsm_state19 } {
	# Procedure called to update ap_ST_fsm_state19 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state19 { PARAM_VALUE.ap_ST_fsm_state19 } {
	# Procedure called to validate ap_ST_fsm_state19
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state20 { PARAM_VALUE.ap_ST_fsm_state20 } {
	# Procedure called to update ap_ST_fsm_state20 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state20 { PARAM_VALUE.ap_ST_fsm_state20 } {
	# Procedure called to validate ap_ST_fsm_state20
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state21 { PARAM_VALUE.ap_ST_fsm_state21 } {
	# Procedure called to update ap_ST_fsm_state21 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state21 { PARAM_VALUE.ap_ST_fsm_state21 } {
	# Procedure called to validate ap_ST_fsm_state21
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state22 { PARAM_VALUE.ap_ST_fsm_state22 } {
	# Procedure called to update ap_ST_fsm_state22 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state22 { PARAM_VALUE.ap_ST_fsm_state22 } {
	# Procedure called to validate ap_ST_fsm_state22
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state23 { PARAM_VALUE.ap_ST_fsm_state23 } {
	# Procedure called to update ap_ST_fsm_state23 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state23 { PARAM_VALUE.ap_ST_fsm_state23 } {
	# Procedure called to validate ap_ST_fsm_state23
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state24 { PARAM_VALUE.ap_ST_fsm_state24 } {
	# Procedure called to update ap_ST_fsm_state24 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state24 { PARAM_VALUE.ap_ST_fsm_state24 } {
	# Procedure called to validate ap_ST_fsm_state24
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state25 { PARAM_VALUE.ap_ST_fsm_state25 } {
	# Procedure called to update ap_ST_fsm_state25 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state25 { PARAM_VALUE.ap_ST_fsm_state25 } {
	# Procedure called to validate ap_ST_fsm_state25
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state26 { PARAM_VALUE.ap_ST_fsm_state26 } {
	# Procedure called to update ap_ST_fsm_state26 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state26 { PARAM_VALUE.ap_ST_fsm_state26 } {
	# Procedure called to validate ap_ST_fsm_state26
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state27 { PARAM_VALUE.ap_ST_fsm_state27 } {
	# Procedure called to update ap_ST_fsm_state27 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state27 { PARAM_VALUE.ap_ST_fsm_state27 } {
	# Procedure called to validate ap_ST_fsm_state27
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state30 { PARAM_VALUE.ap_ST_fsm_state30 } {
	# Procedure called to update ap_ST_fsm_state30 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state30 { PARAM_VALUE.ap_ST_fsm_state30 } {
	# Procedure called to validate ap_ST_fsm_state30
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state4 { PARAM_VALUE.ap_ST_fsm_state4 } {
	# Procedure called to update ap_ST_fsm_state4 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state4 { PARAM_VALUE.ap_ST_fsm_state4 } {
	# Procedure called to validate ap_ST_fsm_state4
	return true
}

proc update_PARAM_VALUE.ap_ST_fsm_state7 { PARAM_VALUE.ap_ST_fsm_state7 } {
	# Procedure called to update ap_ST_fsm_state7 when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.ap_ST_fsm_state7 { PARAM_VALUE.ap_ST_fsm_state7 } {
	# Procedure called to validate ap_ST_fsm_state7
	return true
}


proc update_MODELPARAM_VALUE.ap_ST_fsm_state1 { MODELPARAM_VALUE.ap_ST_fsm_state1 PARAM_VALUE.ap_ST_fsm_state1 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state1}] ${MODELPARAM_VALUE.ap_ST_fsm_state1}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_pp0_stage0 { MODELPARAM_VALUE.ap_ST_fsm_pp0_stage0 PARAM_VALUE.ap_ST_fsm_pp0_stage0 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_pp0_stage0}] ${MODELPARAM_VALUE.ap_ST_fsm_pp0_stage0}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state4 { MODELPARAM_VALUE.ap_ST_fsm_state4 PARAM_VALUE.ap_ST_fsm_state4 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state4}] ${MODELPARAM_VALUE.ap_ST_fsm_state4}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_pp1_stage0 { MODELPARAM_VALUE.ap_ST_fsm_pp1_stage0 PARAM_VALUE.ap_ST_fsm_pp1_stage0 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_pp1_stage0}] ${MODELPARAM_VALUE.ap_ST_fsm_pp1_stage0}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state7 { MODELPARAM_VALUE.ap_ST_fsm_state7 PARAM_VALUE.ap_ST_fsm_state7 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state7}] ${MODELPARAM_VALUE.ap_ST_fsm_state7}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_pp2_stage0 { MODELPARAM_VALUE.ap_ST_fsm_pp2_stage0 PARAM_VALUE.ap_ST_fsm_pp2_stage0 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_pp2_stage0}] ${MODELPARAM_VALUE.ap_ST_fsm_pp2_stage0}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state10 { MODELPARAM_VALUE.ap_ST_fsm_state10 PARAM_VALUE.ap_ST_fsm_state10 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state10}] ${MODELPARAM_VALUE.ap_ST_fsm_state10}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state11 { MODELPARAM_VALUE.ap_ST_fsm_state11 PARAM_VALUE.ap_ST_fsm_state11 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state11}] ${MODELPARAM_VALUE.ap_ST_fsm_state11}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state12 { MODELPARAM_VALUE.ap_ST_fsm_state12 PARAM_VALUE.ap_ST_fsm_state12 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state12}] ${MODELPARAM_VALUE.ap_ST_fsm_state12}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state13 { MODELPARAM_VALUE.ap_ST_fsm_state13 PARAM_VALUE.ap_ST_fsm_state13 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state13}] ${MODELPARAM_VALUE.ap_ST_fsm_state13}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state14 { MODELPARAM_VALUE.ap_ST_fsm_state14 PARAM_VALUE.ap_ST_fsm_state14 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state14}] ${MODELPARAM_VALUE.ap_ST_fsm_state14}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state15 { MODELPARAM_VALUE.ap_ST_fsm_state15 PARAM_VALUE.ap_ST_fsm_state15 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state15}] ${MODELPARAM_VALUE.ap_ST_fsm_state15}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state16 { MODELPARAM_VALUE.ap_ST_fsm_state16 PARAM_VALUE.ap_ST_fsm_state16 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state16}] ${MODELPARAM_VALUE.ap_ST_fsm_state16}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_pp4_stage0 { MODELPARAM_VALUE.ap_ST_fsm_pp4_stage0 PARAM_VALUE.ap_ST_fsm_pp4_stage0 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_pp4_stage0}] ${MODELPARAM_VALUE.ap_ST_fsm_pp4_stage0}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state19 { MODELPARAM_VALUE.ap_ST_fsm_state19 PARAM_VALUE.ap_ST_fsm_state19 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state19}] ${MODELPARAM_VALUE.ap_ST_fsm_state19}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state20 { MODELPARAM_VALUE.ap_ST_fsm_state20 PARAM_VALUE.ap_ST_fsm_state20 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state20}] ${MODELPARAM_VALUE.ap_ST_fsm_state20}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state21 { MODELPARAM_VALUE.ap_ST_fsm_state21 PARAM_VALUE.ap_ST_fsm_state21 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state21}] ${MODELPARAM_VALUE.ap_ST_fsm_state21}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state22 { MODELPARAM_VALUE.ap_ST_fsm_state22 PARAM_VALUE.ap_ST_fsm_state22 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state22}] ${MODELPARAM_VALUE.ap_ST_fsm_state22}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state23 { MODELPARAM_VALUE.ap_ST_fsm_state23 PARAM_VALUE.ap_ST_fsm_state23 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state23}] ${MODELPARAM_VALUE.ap_ST_fsm_state23}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state24 { MODELPARAM_VALUE.ap_ST_fsm_state24 PARAM_VALUE.ap_ST_fsm_state24 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state24}] ${MODELPARAM_VALUE.ap_ST_fsm_state24}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state25 { MODELPARAM_VALUE.ap_ST_fsm_state25 PARAM_VALUE.ap_ST_fsm_state25 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state25}] ${MODELPARAM_VALUE.ap_ST_fsm_state25}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state26 { MODELPARAM_VALUE.ap_ST_fsm_state26 PARAM_VALUE.ap_ST_fsm_state26 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state26}] ${MODELPARAM_VALUE.ap_ST_fsm_state26}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state27 { MODELPARAM_VALUE.ap_ST_fsm_state27 PARAM_VALUE.ap_ST_fsm_state27 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state27}] ${MODELPARAM_VALUE.ap_ST_fsm_state27}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_pp6_stage0 { MODELPARAM_VALUE.ap_ST_fsm_pp6_stage0 PARAM_VALUE.ap_ST_fsm_pp6_stage0 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_pp6_stage0}] ${MODELPARAM_VALUE.ap_ST_fsm_pp6_stage0}
}

proc update_MODELPARAM_VALUE.ap_ST_fsm_state30 { MODELPARAM_VALUE.ap_ST_fsm_state30 PARAM_VALUE.ap_ST_fsm_state30 } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.ap_ST_fsm_state30}] ${MODELPARAM_VALUE.ap_ST_fsm_state30}
}

