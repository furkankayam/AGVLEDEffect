#ifndef AGVLEDEffect_h
#define AGVLEDEffect_h

#include <FastLED.h>

#define LED_PIN1 6
#define LED_PIN11 7
#define LED_PIN2 8
#define LED_PIN22 9
#define NUM_LEDS 38

class AGVLEDEffect {
public:
  AGVLEDEffect();
  void goEffect();
  void stopEffect();
  void chargingEffect();
  void movingToChargeStationEffect();
  void loadEffect();
  void unloadEffect();
  void rightFillEffect();
  void leftFillEffect();

private:
  CRGB leds1[NUM_LEDS];
  CRGB leds11[NUM_LEDS];
  CRGB leds2[NUM_LEDS];
  CRGB leds22[NUM_LEDS];
};

#endif
