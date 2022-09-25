################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO.c \
../EXTINT0.c \
../GIE.c \
../LED.c \
../LED_cfg.c \
../main.c 

OBJS += \
./DIO.o \
./EXTINT0.o \
./GIE.o \
./LED.o \
./LED_cfg.o \
./main.o 

C_DEPS += \
./DIO.d \
./EXTINT0.d \
./GIE.d \
./LED.d \
./LED_cfg.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


