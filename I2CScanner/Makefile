SKETCH = I2CScanner

FQBN = STMicroelectronics:stm32:GenF4:pnum=GENERIC_F405RGTX,usb=CDCgen

PORT = /dev/ttyACM0

OBJ = $(PWD)/obj
DFU = $(OBJ)/$(SKETCH).dfu 
HEX = $(OBJ)/$(SKETCH).ino.hex

# all: $(DFU)
all: $(HEX)

$(HEX): $(SKETCH).ino
	arduino-cli compile --fqbn $(FQBN) --build-path $(OBJ) --warnings "all"
	rm -f *.bin *.elf

clean:
	rm -rf obj

edit:
	vim $(SKETCH).ino

listen:
	miniterm $(PORT) 115200

