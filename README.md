# Sun Based Solar Tracking System

## About the Project

This project was developed as part of our Electronics and Communication Engineering mini-project during the 2024–2025 academic year.

The aim of the project is to build a solar tracking system that adjusts the position of a solar panel according to changes in light intensity. The system uses two Light Dependent Resistors (LDRs) to sense light from different directions. An Arduino Uno processes the sensor readings and controls a servo motor to change the panel's orientation.

The project demonstrates the practical use of sensors, microcontroller programming and motor control in a renewable energy application.

## Hardware Components

- Arduino Uno
- 2 LDR sensors
- 1 servo motor
- Solar panel
- Resistors for sensor circuits
- Jumper wires
- Power supply
- Mechanical support for the panel

## Software and Tools

- Arduino IDE
- Arduino programming language (C/C++)

## Working Principle

1. The two LDR sensors detect light intensity from different directions.
2. The Arduino Uno reads the sensor values through its analog inputs.
3. The program compares the readings to determine the direction of stronger light.
4. Based on the difference between the readings, the Arduino sends a control signal to the servo motor.
5. The servo motor adjusts the panel's orientation.
6. This process repeats as the light conditions change.

When the sensor readings become sufficiently close, the system can reduce or stop movement, depending on the implemented control logic.

## Project Objectives

- Understand the working principle of a solar tracking system.
- Interface LDR sensors with an Arduino Uno.
- Compare light intensity using sensor readings.
- Control a servo motor using a microcontroller.
- Apply embedded systems concepts to a renewable energy project.

## Applications

- Educational solar tracking prototypes
- Embedded systems experiments
- Sensor interfacing and motor control
- Renewable energy demonstrations

## Limitations

- Sensor readings depend on light conditions and sensor placement.
- Tracking accuracy depends on calibration and the control algorithm.
- A single servo provides movement along one mechanical axis.
- Actual energy-generation improvement must be verified through measurements.

## Future Improvements

- Improve sensor calibration and tracking stability.
- Measure solar panel voltage and current.
- Record sensor readings for performance analysis.
- Compare fixed-panel and tracking-panel output under controlled conditions.
- Explore dual-axis tracking using an additional motor.

## Repository Contents

- `README.md` — Project overview and documentation.
- `Arduino/` — Arduino source code.
- `Circuit/` — Circuit diagram and connection details.
- `Images/` — Project photographs and hardware setup.

## Project Information

**Project:** Sun Based Solar Tracking System  
**Domain:** Embedded Systems and Renewable Energy  
**Controller:** Arduino Uno  
**Sensors:** Two LDR sensors  
**Actuator:** One servo motor  
**Academic Year:** 2024–2025

## Acknowledgement

This project was carried out as an academic mini-project in the Department of Electronics and Communication Engineering at Nagarjuna College of Engineering and Technology.


