# Automatic Door System Using Arduino

## Overview
This project demonstrates an automatic door system using Arduino Uno, an HC-SR04 Ultrasonic Sensor, and a Servo Motor. When a person comes within a specified distance, the servo rotates to open the door. After a short delay, the door closes automatically.

## Objective
To understand distance measurement using an ultrasonic sensor and servo motor control with Arduino.

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor (SG90)
- Breadboard
- Jumper Wires

## Circuit Connections

| Arduino Pin | Component |
|-------------|-----------|
| D3 | Ultrasonic TRIG |
| D2 | Ultrasonic ECHO |
| D7 | Servo Signal |
| 5V | Ultrasonic VCC & Servo VCC |
| GND | Ultrasonic GND & Servo GND |

## Working

1. Ultrasonic sensor measures the distance.
2. If the object is within 15 cm, the servo rotates to 90°.
3. The door remains open for 3 seconds.
4. The servo returns to 0° to close the door.

## Future Improvements

- Password-based Door Lock
- RFID Access System
- Face Recognition
- Mobile App Control
- Automatic Light with Door

## Author

**Mohana Priya Talari**
