# Circuit Connections

## Overview

This document describes a proposed circuit configuration for a single-axis solar tracking system using an Arduino Uno, two LDR sensors, and one servo motor.

The two LDR sensors are positioned at the top and bottom of the tracking assembly. The Arduino compares their light readings and adjusts the servo position according to the difference.


## Components

- Arduino Uno
- 2 × Light Dependent Resistors (LDRs)
- 2 × 10 kΩ resistors for the LDR voltage dividers
- 1 × positional servo motor
- Breadboard and jumper wires
- Suitable power supply for the servo
- Solar panel and mounting structure

## 1. Top LDR Sensor

Build a voltage-divider circuit:

- Connect one end of the LDR to 5V.
- Connect the other end of the LDR to a junction.
- Connect the junction to Arduino analog pin A0.
- Connect a 10 kΩ resistor from that junction to GND.

## 2. Bottom LDR Sensor

Build the second voltage-divider circuit:

- Connect one end of the LDR to 5V.
- Connect the other end of the LDR to a junction.
- Connect the junction to Arduino analog pin A1.
- Connect a 10 kΩ resistor from that junction to GND.

With this arrangement, the analog reading normally increases as the light intensity increases.

## 3. Servo Motor

For a compatible positional servo:

| Servo connection | Proposed connection |
|---|---|
| Signal wire | Arduino digital pin 9 |
| Positive supply | Suitable servo power supply |
| Ground | Common ground with Arduino |

Servo wire colors vary by manufacturer. Verify the pinout and operating voltage before connecting the motor.

A separate regulated supply may be needed if the servo draws more current than the Arduino can safely provide. Connect the external supply ground to Arduino GND.

## 4. Connection Summary

| Component | Arduino connection |
|---|---|
| Top LDR output junction | A0 |
| Bottom LDR output junction | A1 |
| LDR voltage-divider supply | 5V |
| LDR voltage-divider ground | GND |
| Servo signal | D9 |
| Servo ground | Common GND |

## 5. Working Principle

1. The top and bottom LDR sensors respond to light intensity.
2. The Arduino reads both analog sensor values.
3. The program compares the readings.
4. If the difference exceeds the configured threshold, the Arduino adjusts the servo position.
5. The process repeats while the system is running.

The correct movement direction depends on the sensor placement and servo mounting. It must be checked before claiming that the prototype tracks light correctly.
 the sensor wiring and physical tracking direction tested.

 ## Testing and Verification

The Sun Based Solar Tracking System hardware and wiring were tested during the original academic mini-project.

The prototype uses an Arduino Uno, two LDR sensors, and a servo motor to demonstrate automatic solar panel positioning based on differences in light intensity.

### Verification Status

- **Hardware prototype:** Tested during the original academic project.
- **Hardware wiring:** Tested during the original project.
- **Arduino code in this repository:** Compiled successfully in Arduino IDE.
- **Reconstructed implementation:** Not retested on the original hardware.
- **Circuit diagram in this repository:** Represents the proposed connections for the reconstructed implementation and should be checked against the original circuit.
