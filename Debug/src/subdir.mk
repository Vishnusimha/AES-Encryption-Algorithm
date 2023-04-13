################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AssignmentAES.cpp \
../src/Encryption.cpp 

CPP_DEPS += \
./src/AssignmentAES.d \
./src/Encryption.d 

OBJS += \
./src/AssignmentAES.o \
./src/Encryption.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/AssignmentAES.d ./src/AssignmentAES.o ./src/Encryption.d ./src/Encryption.o

.PHONY: clean-src

