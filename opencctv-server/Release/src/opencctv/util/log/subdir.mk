################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/opencctv/util/log/Loggers.cpp \
../src/opencctv/util/log/TempLogger.cpp 

OBJS += \
./src/opencctv/util/log/Loggers.o \
./src/opencctv/util/log/TempLogger.o 

CPP_DEPS += \
./src/opencctv/util/log/Loggers.d \
./src/opencctv/util/log/TempLogger.d 


# Each subdirectory must supply rules for building sources it contributes
src/opencctv/util/log/%.o: ../src/opencctv/util/log/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


