SKETCH = $(shell basename "`pwd`")

FQBN = STMicroelectronics:stm32:GenF4:pnum=GENERIC_F405RGTX,usb=CDCgen

PORT = /dev/ttyACM0

BUILD = $(PWD)/build
DFU = $(BUILD)/$(SKETCH).dfu 
HEX = $(BUILD)/$(SKETCH).ino.hex

# all: $(DFU)
all: $(HEX)

$(HEX): $(SKETCH).ino
	arduino-cli compile --fqbn $(FQBN) --build-path $(BUILD) --warnings "all"
	rm -f *.bin *.elf

clean:
	rm -rf build

edit:
	vim $(SKETCH).ino

listen:
	miniterm $(PORT) 115200

