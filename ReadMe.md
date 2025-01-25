# 🚨 AGVLEDEffect Library

This library is designed to control multiple LEDs with various effects for your AGV (Autonomous Guided Vehicle) projects. It includes effects like charging, moving to a charging station, and more. It’s optimized for use with Arduino boards and WS2812 or similar LED strips.

## Features

- **Charging Effect**: Simulates charging by fading LEDs in green.
- **Moving to Charge Station Effect**: Simulates movement towards a charging station using orange LEDs.
- **Load and Unload Effects**: Create effects for loading and unloading with blue LEDs.
- **Go and Stop Effects**: Display visual effects for movement states, such as stopping with red LEDs.
- **Right and Left Fill Effects**: Gradually fills LEDs in the right or left direction with specific colors.
- **Compatible with WS2812 LEDs**: Works seamlessly with WS2812 or similar addressable RGB LED strips.

## Installation

To use this library in your Arduino project:

1. Download or clone this repository.
2. In the Arduino IDE, go to **Sketch > Include Library > Add .ZIP Library**.
3. Select the downloaded `.zip` file.

Or, if you prefer to manually install it:

1. Download the library and unzip it.
2. Move the unzipped folder to your Arduino libraries folder (usually located at **Documents/Arduino/libraries**).

## Usage

To use the AGVLEDEffect library in your Arduino sketch, follow these steps:

1. Include `FastLed` Library.
2. Include the library.
2. Create an instance of `AGVLEDEffect` for your LED pins.
3. Call the desired LED effects in the `loop()` function.

## Example

```cpp
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
```

### Library Methods

- **chargingEffect()**: Simulates the charging process by fading LEDs to green.
- **movingToChargeStationEffect()**: Changes LED colors to simulate movement to the charging station.
- **loadEffect()**: Creates a loading effect with blue LEDs.
- **unloadEffect()**: Creates an unloading effect with blue LEDs.
- **goEffect()**: Displays a green "go" effect on the LEDs.
- **stopEffect()**: Displays a red "stop" effect on the LEDs.
- **rightFillEffect()**: Fills LEDs from the right side with an orange color.
- **leftFillEffect()**: Fills LEDs from the left side with an orange color.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details

Created by [Mehmet Furkan KAYA](https://www.linkedin.com/in/mehmet-furkan-kaya/)
