#include <Arduino.h>

// Example pins from the project brief. Verify the actual board and modules.
constexpr uint8_t SOS_PIN = 18;
constexpr uint8_t VIBRATION_PIN = 19;
constexpr uint32_t DEBOUNCE_MS = 60;
constexpr uint32_t ALERT_COOLDOWN_MS = 30000;

bool lastButtonState = HIGH;
uint32_t lastDebounceAt = 0;
uint32_t lastAlertAt = 0;

void triggerManualSos() {
  Serial.println("SOS requested: acquire a valid GPS fix, then send through the configured cellular module.");
  // Keep this path independent of any AI classifier.
}

void setup() {
  Serial.begin(115200);
  pinMode(SOS_PIN, INPUT_PULLUP);
  pinMode(VIBRATION_PIN, INPUT);
  Serial.println("Women safety device scaffold started.");
}

void loop() {
  const bool buttonState = digitalRead(SOS_PIN);
  const uint32_t now = millis();

  if (buttonState != lastButtonState) {
    lastDebounceAt = now;
    lastButtonState = buttonState;
  }

  const bool pressed = buttonState == LOW;
  const bool debounceComplete = now - lastDebounceAt >= DEBOUNCE_MS;
  const bool cooldownComplete = now - lastAlertAt >= ALERT_COOLDOWN_MS;

  if (pressed && debounceComplete && cooldownComplete) {
    lastAlertAt = now;
    triggerManualSos();
  }

  delay(10);
}
