#include "AGVLEDEffect.h"

AGVLEDEffect::AGVLEDEffect() {
  FastLED.addLeds<WS2812, LED_PIN1, GRB>(leds1, NUM_LEDS);
  FastLED.addLeds<WS2812, LED_PIN11, GRB>(leds11, NUM_LEDS);
  FastLED.addLeds<WS2812, LED_PIN2, GRB>(leds2, NUM_LEDS);
  FastLED.addLeds<WS2812, LED_PIN22, GRB>(leds22, NUM_LEDS);
}

void AGVLEDEffect::chargingEffect() {
  int delayMs = 10;
  for (int i = 0; i < 100; i++) {
    CRGB color = CRGB(0, 100 - i, 0);
    fill_solid(leds1, NUM_LEDS, color);
    fill_solid(leds11, NUM_LEDS, color);
    fill_solid(leds2, NUM_LEDS, color);
    fill_solid(leds22, NUM_LEDS, color);
    FastLED.show();
    delay(delayMs);
  }
  for (int i = 100; i >= 0; i--) {
    CRGB color = CRGB(0, 100 - i, 0);
    fill_solid(leds1, NUM_LEDS, color);
    fill_solid(leds11, NUM_LEDS, color);
    fill_solid(leds2, NUM_LEDS, color);
    fill_solid(leds22, NUM_LEDS, color);
    FastLED.show();
    delay(delayMs);
  }
}

void AGVLEDEffect::movingToChargeStationEffect() {
  int delayMs = 10;
  for (int i = 0; i < 50; i++) {
    CRGB color = CRGB(255, i, 0);
    fill_solid(leds1, NUM_LEDS, color);
    fill_solid(leds11, NUM_LEDS, color);
    fill_solid(leds2, NUM_LEDS, color);
    fill_solid(leds22, NUM_LEDS, color);
    FastLED.show();
    delay(delayMs);
  }
  for (int i = 50; i >= 0; i--) {
    CRGB color = CRGB(255, i, 0);
    fill_solid(leds1, NUM_LEDS, color);
    fill_solid(leds11, NUM_LEDS, color);
    fill_solid(leds2, NUM_LEDS, color);
    fill_solid(leds22, NUM_LEDS, color);
    FastLED.show();
    delay(delayMs);
  }
}

void AGVLEDEffect::loadEffect() {
  CRGB color = CRGB(0, 0, 255);
  int delayMs = 35;
  int mid = NUM_LEDS / 2;
  for (int i = 0; i < mid; i++) {
    if (i < mid) {
      leds1[i] = color;
      leds11[i] = color;
      leds2[i] = color;
      leds22[i] = color;
    }
    if (NUM_LEDS - 1 - i >= mid) {
      leds1[NUM_LEDS - 1 - i] = color;
      leds11[NUM_LEDS - 1 - i] = color;
      leds2[NUM_LEDS - 1 - i] = color;
      leds22[NUM_LEDS - 1 - i] = color;
    }
    FastLED.show();
    delay(delayMs);
  }
  fill_solid(leds1, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds11, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds2, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds22, NUM_LEDS, CRGB(0, 0, 0));
  FastLED.show();
}

void AGVLEDEffect::unloadEffect() {
  CRGB color = CRGB(0, 0, 255);
  int delayMs = 35;
  int mid = NUM_LEDS / 2;
  for (int i = mid - 1; i >= 0; i--) {
    leds1[i] = color;
    leds11[i] = color;
    leds2[i] = color;
    leds22[i] = color;
    leds1[NUM_LEDS - 1 - i] = color;
    leds11[NUM_LEDS - 1 - i] = color;
    leds2[NUM_LEDS - 1 - i] = color;
    leds22[NUM_LEDS - 1 - i] = color;
    FastLED.show();
    delay(delayMs);
  }
  fill_solid(leds1, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds11, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds2, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds22, NUM_LEDS, CRGB(0, 0, 0));
  FastLED.show();
}

void AGVLEDEffect::rightFillEffect() {
  CRGB color = CRGB(255, 165, 0);
  int delayMs = 15; 
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    fill_solid(leds2, NUM_LEDS, CRGB(255, 255, 100));
    fill_solid(leds22, NUM_LEDS, CRGB(255, 255, 100));
    leds1[i] = color;
    leds11[i] = color;
    FastLED.show();
    delay(delayMs);
  }
  fill_solid(leds1, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds11, NUM_LEDS, CRGB(0, 0, 0));
  FastLED.show();
  delay(delayMs);
}

void AGVLEDEffect::leftFillEffect() {
  CRGB color = CRGB(255, 165, 0);
  int delayMs = 15; 
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    fill_solid(leds1, NUM_LEDS, CRGB(255, 255, 100));
    fill_solid(leds11, NUM_LEDS, CRGB(255, 255, 100));
    leds2[i] = color;
    leds22[i] = color;
    FastLED.show();
    delay(delayMs);
  }
  fill_solid(leds2, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds22, NUM_LEDS, CRGB(0, 0, 0));
  FastLED.show();
  delay(delayMs);
}

void AGVLEDEffect::goEffect() {
  CRGB color = CRGB(255, 255, 100);
  fill_solid(leds1, NUM_LEDS, color);
  fill_solid(leds11, NUM_LEDS, color);
  fill_solid(leds2, NUM_LEDS, color);
  fill_solid(leds22, NUM_LEDS, color);
  FastLED.show();
}

void AGVLEDEffect::stopEffect() {
  CRGB color = CRGB(255, 0, 0);
  int delayMs = 250;
  fill_solid(leds1, NUM_LEDS, color);
  fill_solid(leds11, NUM_LEDS, color);
  fill_solid(leds2, NUM_LEDS, color);
  fill_solid(leds22, NUM_LEDS, color);
  FastLED.show();
  delay(delayMs);
  fill_solid(leds1, NUM_LEDS, CRGB(0, 0, 0));
  fill_solid(leds11, NUM_LEDS, CRGB(0, 0, 0));
}
