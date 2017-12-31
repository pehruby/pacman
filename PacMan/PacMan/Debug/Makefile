################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../FastLED


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../bitswap.cpp \
../colorpalettes.cpp \
../colorutils.cpp \
../FastLED.cpp \
../hsv2rgb.cpp \
../lib8tion.cpp \
../noise.cpp \
../power_mgt.cpp \
../main.cpp \
../wiring.cpp


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
bitswap.o \
colorpalettes.o \
colorutils.o \
FastLED.o \
hsv2rgb.o \
lib8tion.o \
noise.o \
power_mgt.o \
main.o \
wiring.o

OBJS_AS_ARGS +=  \
bitswap.o \
colorpalettes.o \
colorutils.o \
FastLED.o \
hsv2rgb.o \
lib8tion.o \
noise.o \
power_mgt.o \
main.o \
wiring.o

C_DEPS +=  \
bitswap.d \
colorpalettes.d \
colorutils.d \
FastLED.d \
hsv2rgb.d \
lib8tion.d \
noise.d \
power_mgt.d \
main.d \
wiring.d

C_DEPS_AS_ARGS +=  \
bitswap.d \
colorpalettes.d \
colorutils.d \
FastLED.d \
hsv2rgb.d \
lib8tion.d \
noise.d \
power_mgt.d \
main.d \
wiring.d

OUTPUT_FILE_PATH +=Pacman.elf

OUTPUT_FILE_PATH_AS_ARGS +=Pacman.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+=  \
H:/Atmel\ Studio/7.0/PacMan/PacMan/ArduinoCore/Debug/libArduinoCore.a

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler





















./%.o: .././%.cpp
	@echo Building file: $<
	@echo Invoking: AVR8/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-g++.exe$(QUOTE) -funsigned-char -funsigned-bitfields -DDEBUG -DF_CPU=16000000L -DARDUINO=10805 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x0043 -DUSB_MANUFACTURER="\"Arduino LLC\""  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\include" -I"..\\..\ArduinoCore\include\core" -I"..\\..\ArduinoCore\include\variants\standard" -I"../FastLED"  -Os -fno-threadsafe-statics -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -w -mmcu=atmega328p -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\gcc\dev\atmega328p" -c -std=gnu++11 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR8/GNU Linker : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-g++.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="Pacman.map" -Wl,--start-group -Wl,-lm -Wl,-lArduinoCore  -Wl,--end-group -Wl,-L"H:\Atmel Studio\7.0\PacMan\PacMan\ArduinoCore\Debug"  -Wl,--gc-sections -mmcu=atmega328p -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\gcc\dev\atmega328p" -Os  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "Pacman.elf" "Pacman.hex"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "Pacman.elf" "Pacman.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "Pacman.elf" > "Pacman.lss"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "Pacman.elf" "Pacman.srec"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "Pacman.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "Pacman.elf" "Pacman.a" "Pacman.hex" "Pacman.lss" "Pacman.eep" "Pacman.map" "Pacman.srec" "Pacman.usersignatures"
	