# Firmware

`esp32_safety_device/esp32_safety_device.ino` is a bring-up scaffold, not production firmware. It demonstrates a debounced manual SOS input and leaves GPS parsing, cellular commands, retry policy, and status feedback to the verified hardware implementation.

Before using it on a real device, confirm the board pinout, module voltage levels, power supply, contact configuration, and test procedure.
