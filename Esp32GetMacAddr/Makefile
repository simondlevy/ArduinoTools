# Copyright (C) 2023 Simon D. Levy
#
# MIT License

SKETCH = $(shell basename "`pwd`")

# FQBN = esp32:esp32:XIAO_ESP32C6
FQBN = esp32:esp32:um_tinypico
# FQBN = esp32:esp32:um_omgs3
PORT = /dev/ttyACM0

<<<<<<< HEAD
#FQBN = esp32:esp32:m5stack_atom
#PORT = /dev/ttyUSB0
=======
#FQBN = esp32:esp32:um_tinypico
#FQBN = esp32:esp32:um_omgs3
FQBN = esp32:esp32:um_tinys3
#FQBN = esp32:esp32:m5stack_atom
#FQBN = esp32:esp32:XIAO_ESP32C6
>>>>>>> a88f308eda617fe0fb087621c860b27803f5258b

build:
	arduino-cli compile --fqbn $(FQBN) $(SKETCH).ino

upload:
	arduino-cli upload -p $(PORT) --fqbn $(FQBN) .

flash:
	arduino-cli upload -p $(PORT) --fqbn $(FQBN) .

listen:
	miniterm.py $(PORT) 115200 --exit-char 3 # exit on CTRL-C
