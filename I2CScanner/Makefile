SKETCH = I2CScanner

BOARD = teensy:avr:teensy40

PORT = /dev/ttyACM0

build: $(SKETCH).ino
	arduino-cli compile --fqbn $(BOARD) $(SKETCH).ino

flash:
	arduino-cli upload -p $(PORT) --fqbn $(BOARD) .

clean:
	rm -rf obj

edit:
	vim $(SKETCH).ino

listen:
	miniterm.py $(PORT) 115200

