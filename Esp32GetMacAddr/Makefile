# Copyright (C) 2023 Simon D. Levy
#
# MIT License

SKETCH = Esp32GetMacAddr

build:
	arduino-cli compile --fqbn esp32:esp32:tinypico $(SKETCH).ino

upload:
	arduino-cli upload -p /dev/ttyUSB0 --fqbn esp32:esp32:tinypico .
