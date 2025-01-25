/*
    Author: Mehmet Furkan KAYA
    Date: 26/01/2025
*/

#include <AGVLEDEffect.h> // Include the AGVLEDEffect library

// AGVLEDEffect object
AGVLEDEffect ledEffect;

void setup() {
}

void loop() {
  // Charge effect
  ledEffect.chargingEffect();
  delay(5000);

  // Moving to charge station effect
  ledEffect.movingToChargeStationEffect();
  delay(5000);

  // Loading effect
  ledEffect.loadEffect();
  delay(5000);

  // Unloading effect
  ledEffect.unloadEffect();
  delay(5000);

  // Right fill effect
  ledEffect.rightFillEffect();
  delay(5000);

  // Left fill effect
  ledEffect.leftFillEffect();
  delay(5000);

  // Go effect
  ledEffect.goEffect();
  delay(5000);

  // Stop effect
  ledEffect.stopEffect();
  delay(5000);
}
