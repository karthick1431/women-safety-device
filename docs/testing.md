# Verification Plan

Run these checks in a controlled environment with a test SIM and test contact. Do not stage real emergencies.

## Bring-up

- [ ] ESP32 boots repeatedly from the intended power source.
- [ ] I2C scan finds the motion sensor at the configured address.
- [ ] GPS serial data is readable and a fix is accepted only when valid.
- [ ] Cellular module registers on a supported network.
- [ ] Supply voltage remains within the module specification during transmission bursts.

## Input behavior

- [ ] SOS button responds to repeated presses.
- [ ] Button debounce prevents duplicate alerts.
- [ ] Optional vibration input is treated as a signal, not proof of danger.
- [ ] Sensor disconnects fail visibly and do not generate false confidence.

## Alert behavior

- [ ] Alert contains a clear emergency message.
- [ ] A map link is included only with a current valid coordinate.
- [ ] No-fix behavior is explicit and safe.
- [ ] Cellular failure is reported and retry behavior is bounded.
- [ ] Duplicate alerts are controlled.

## AI validation, if implemented

- [ ] Data was collected with consent and without personal location details.
- [ ] Train and test recordings are separated by recording session.
- [ ] Precision, recall, confusion matrix, and false-alarm behavior are reported.
- [ ] AI never disables the manual SOS path.
