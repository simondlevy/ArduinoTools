# Copyright (C) 2023 Simon D. Levy
#
# MIT License

SKETCH = Esp32GetMacAddr

PORT = /dev/ttyACM0

FQBN = esp32:esp32:tinypico

build:
	arduino-cli compile --fqbn $(FQBN) $(SKETCH).ino

upload:
	arduino-cli upload -p $(PORT) --fqbn esp32:esp32:tinypico .

listen:
	miniterm $(PORT) 115200
