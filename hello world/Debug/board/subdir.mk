################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../board/board.c \
../board/clock_config.c \
../board/peripherals.c \
../board/pin_mux.c 

OBJS += \
./board/board.o \
./board/clock_config.o \
./board/peripherals.o \
./board/pin_mux.o 

C_DEPS += \
./board/board.d \
./board/clock_config.d \
./board/peripherals.d \
./board/pin_mux.d 


# Each subdirectory must supply rules for building sources it contributes
board/%.o: ../board/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MK22FN512VLL12 -DCPU_MK22FN512VLL12_cm4 -D__REDLIB__ -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\board" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\source" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\drivers" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\device" -I"C:\Users\fabia\SynologyDrive\Dokumente\HSLU\Semester\6\MICRO\mcux\workspace\hello world\CMSIS" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


