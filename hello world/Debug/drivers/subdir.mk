################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_gpio.c 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_gpio.o 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MK22FN512VLL12 -DCPU_MK22FN512VLL12_cm4 -D__REDLIB__ -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\board" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\source" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\drivers" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\device" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\CMSIS" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


