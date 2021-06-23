################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/menuw/Documents/research/SHA256/hls/shatest.cpp 

OBJS += \
./testbench/shatest.o 

CPP_DEPS += \
./testbench/shatest.d 


# Each subdirectory must supply rules for building sources it contributes
testbench/shatest.o: C:/Users/menuw/Documents/research/SHA256/hls/shatest.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DHW_COSIM -IC:/Xilinx/Vitis_HLS/2020.2/include/ap_sysc -IC:/Users/menuw/Documents/research/SHA256/hls -IC:/Xilinx/Vitis_HLS/2020.2/win64/tools/systemc/include -IC:/Xilinx/Vitis_HLS/2020.2/include/etc -IC:/Xilinx/Vitis_HLS/2020.2/include -IC:/Xilinx/Vitis_HLS/2020.2/win64/tools/auto_cc/include -O0 -g3 -Wall -Wno-unknown-pragmas -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"testbench/shatest.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


