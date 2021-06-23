################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/menuw/Documents/research/SHA256/hls/sha256.cpp 

OBJS += \
./source/sha256.o 

CPP_DEPS += \
./source/sha256.d 


# Each subdirectory must supply rules for building sources it contributes
source/sha256.o: C:/Users/menuw/Documents/research/SHA256/hls/sha256.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -IC:/Xilinx/Vitis_HLS/2020.2/include/ap_sysc -IC:/Users/menuw/Documents/research/SHA256/hls -IC:/Xilinx/Vitis_HLS/2020.2/win64/tools/systemc/include -IC:/Xilinx/Vitis_HLS/2020.2/include/etc -IC:/Xilinx/Vitis_HLS/2020.2/include -IC:/Xilinx/Vitis_HLS/2020.2/win64/tools/auto_cc/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


