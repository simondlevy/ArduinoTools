# Copyright (C) 2023 Simon D. Levy
#
# MIT License

SKETCH = EspNowReceiver

PORT = /dev/ttyUSB1

build:
	arduino-cli compile --fqbn esp32:esp32:tinypico $(SKETCH).ino

upload:
	arduino-cli upload -p $(PORT) --fqbn esp32:esp32:tinypico .

listen:
	miniterm $(PORT) 115200

edit:
	vim $(SKETCH).ino

