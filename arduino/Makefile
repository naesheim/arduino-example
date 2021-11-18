#

ARDUINO_DIR = /Applications/Arduino.app/Contents/Java/
BUILD_DIR = tmp_build/

# various programs
CC = /Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-gcc
CPP = /Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++
AR = /Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-gcc-ar
OBJ_COPY = /Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-objcopy

MAIN_SKETCH = blink.cpp

# compile flags for g++ and gcc

# may need to change these
F_CPU = 16000000
MCU = atmega328p

# compile flags
GENERAL_FLAGS = -c -g -Os -w -ffunction-sections -fdata-sections -MMD -flto -mmcu=$(MCU) -DF_CPU=$(F_CPU)L
CPP_FLAGS = $(GENERAL_FLAGS) -std=gnu++11 -fpermissive -fno-exceptions -fno-threadsafe-statics -Wno-error=narrowing
CC_FLAGS  = $(GENERAL_FLAGS) -std=gnu11

# location of include files
INCLUDE_FILES = "-I$(ARDUINO_DIR)hardware/arduino/avr/cores/arduino" "-I$(ARDUINO_DIR)hardware/arduino/avr/variants/standard"

#Preprocessor
PREPROCESSOR = -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -DARDUINO=10813

# library sources
LIBRARY_DIR = "$(ARDUINO_DIR)hardware/arduino/avr/cores/arduino/"

build:
	mkdir tmp_build
	$(CPP) $(CPP_FLAGS) $(INCLUDE_FILES) $(PREPROCESSOR) $(MAIN_SKETCH) -o $(BUILD_DIR)$(MAIN_SKETCH).o
	
	$(CC) $(CC_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)WInterrupts.c -o $(BUILD_DIR)WInterrupts.c.o
	$(CC) $(CC_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)wiring.c -o $(BUILD_DIR)wiring.c.o
	$(CC) $(CC_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)wiring_analog.c -o $(BUILD_DIR)wiring_analog.c.o
	$(CC) $(CC_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)wiring_digital.c -o $(BUILD_DIR)wiring_digital.c.o
	$(CC) $(CC_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)wiring_shift.c -o $(BUILD_DIR)wiring_shift.c.o
	$(CC) $(CC_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)wiring_pulse.c -o $(BUILD_DIR)wiring_pulse.c.o
	$(CC) $(CC_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)hooks.c -o $(BUILD_DIR)hooks.c.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)CDC.cpp -o $(BUILD_DIR)CDC.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)HardwareSerial.cpp -o $(BUILD_DIR)HardwareSerial.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)HardwareSerial0.cpp -o $(BUILD_DIR)HardwareSerial0.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)HardwareSerial1.cpp -o $(BUILD_DIR)HardwareSerial1.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)HardwareSerial2.cpp -o $(BUILD_DIR)HardwareSerial2.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)HardwareSerial3.cpp -o $(BUILD_DIR)HardwareSerial3.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)IPAddress.cpp -o $(BUILD_DIR)IPAddress.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)main.cpp -o $(BUILD_DIR)main.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)new.cpp -o $(BUILD_DIR)new.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)Print.cpp -o $(BUILD_DIR)Print.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)Stream.cpp -o $(BUILD_DIR)Stream.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)Tone.cpp -o $(BUILD_DIR)Tone.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)USBCore.cpp -o $(BUILD_DIR)USBCore.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)WMath.cpp -o $(BUILD_DIR)WMath.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)WString.cpp -o $(BUILD_DIR)WString.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)PluggableUSB.cpp -o $(BUILD_DIR)PluggableUSB.cpp.o
	$(CPP) $(CPP_FLAGS) $(PREPROCESSOR) $(INCLUDE_FILES) $(LIBRARY_DIR)abi.cpp -o $(BUILD_DIR)abi.cpp.o

	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)WInterrupts.c.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)wiring.c.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)wiring_analog.c.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)wiring_digital.c.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)wiring_pulse.c.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)wiring_shift.c.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)CDC.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)hooks.c.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)HardwareSerial.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)HardwareSerial0.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)HardwareSerial1.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)HardwareSerial2.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)HardwareSerial3.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)IPAddress.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)main.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)new.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)Print.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)Stream.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)Tone.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)USBCore.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)WMath.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)WString.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)PluggableUSB.cpp.o
	$(AR) rcs $(BUILD_DIR)core.a  $(BUILD_DIR)abi.cpp.o

#linking
	$(CPP) -w -Os -g -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=$(MCU) -o $(BUILD_DIR)$(MAIN_SKETCH).elf $(BUILD_DIR)$(MAIN_SKETCH).o $(BUILD_DIR)core.a -lm
	$(OBJ_COPY) -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 $(BUILD_DIR)$(MAIN_SKETCH).elf $(BUILD_DIR)$(MAIN_SKETCH).eep
	$(OBJ_COPY) -O ihex -R .eeprom $(BUILD_DIR)$(MAIN_SKETCH).elf $(MAIN_SKETCH).hex

clean:
	rm -rf $(BUILD_DIR)
	rm -f $(MAIN_SKETCH).hex