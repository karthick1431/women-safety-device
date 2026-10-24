# Project Status and Evidence

This repository is based on the supplied project brief and infographic. It is intentionally written as a concept and implementation plan until the physical build is verified.

## Confirmed from supplied material

- ESP32 is the proposed controller.
- GPS is intended to provide the device position.
- A cellular module is intended to send emergency messages or calls.
- Manual SOS must remain available independently of AI.
- Motion sensing and an optional vibration sensor are part of the proposed input layer.

## Not supplied or not verified

- Exact ESP32 board revision and module part numbers.
- Final schematic, PCB, enclosure, power design, and assembled hardware.
- Firmware that has been uploaded and tested.
- GPS fix behavior, network registration, SMS delivery, and retry results.
- Dataset, trained model, test split, accuracy, false-alarm rate, or missed-event rate.

## Publication rule

Replace a proposed statement with a measured result only when the test setup, date, input conditions, and result are recorded. Never publish invented performance figures for a safety-related system.
