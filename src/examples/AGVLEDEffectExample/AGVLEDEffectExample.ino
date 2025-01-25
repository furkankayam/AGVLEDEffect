/*
    Author: Mehmet Furkan KAYA
    Date: 26/01/2025
*/

#include <AGVLEDEffect.h>

// LED effect object is already created in the library
AGVLEDEffect ledEffect;

void setup() {
}

void loop() {
  // Charge effect
  ledEffect.chargingEffect();
  delay(2000);

  // Moving to charge station effect
  ledEffect.movingToChargeStationEffect();
  delay(2000);

  // Loading effect
  ledEffect.loadEffect();
  delay(2000);

  // Unloading effect
  ledEffect.unloadEffect();
  delay(2000);

  // Right fill effect
  ledEffect.rightFillEffect();
  delay(2000);

  // Left fill effect
  ledEffect.leftFillEffect();
  delay(2000);

  // Stop effect
  ledEffect.stopEffect();
  delay(2000);
}
