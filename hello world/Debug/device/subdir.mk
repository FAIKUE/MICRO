################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../device/system_MK22F51212.c 

OBJS += \
./device/system_MK22F51212.o 

C_DEPS += \
./device/system_MK22F51212.d 


# Each subdirectory must supply rules for building sources it contributes
device/%.o: ../device/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MK22FN512VLL12 -DCPU_MK22FN512VLL12_cm4 -D__REDLIB__ -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\board" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\source" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\drivers" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\device" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\CMSIS" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


