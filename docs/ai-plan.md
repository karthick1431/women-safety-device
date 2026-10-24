# AI Plan

The practical first AI task is motion-activity classification, not direct harassment detection. Sensor signals alone cannot establish intent or danger.

## Proposed pipeline

1. Collect consent-based MPU6050 time series for labeled activities such as standing, walking, running, and carefully controlled simulated falls.
2. Split recordings into fixed windows without mixing adjacent windows from one recording across train and test sets.
3. Establish a small baseline such as a decision tree before considering a neural model.
4. Measure precision, recall, confusion matrix, false alarms, and missed events on unseen recordings.
5. Deploy only a model that fits the ESP32 resource budget and has been validated on the target sensor.

A public activity dataset may help with learning, but it does not provide labels for harassment or personal danger. Any use of a public dataset must be described accurately.

## Current state

No dataset, trained model, sample count, or measured accuracy was supplied. AI training and validation are therefore **planned**, not complete.
