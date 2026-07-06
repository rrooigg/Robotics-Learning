# Project 02: Ultrasonic Distance Alarm with Servo Motor

## Overview
This project uses an HC-SR04 ultrasonic sensor to detect objects within a specified distance. When an object is detected within 30cm, the system activates a blue LED, sounds a buzzer and rotates a servo motor to 90°. When no object is detected within 30 cm, a yellow LED remains on, the buzzer is off and the servo returns to 0°.

## Components Used
- Arduino Uno
- Blue & Yellow LEDs
- 2 resistors
- Breadboard
- Jumper Wires
- Buzzer
- Power Cable
- SG90 Servo motor

# Features
1. Measures the distance of ultrasonic sound waves.
2. Turns on the blue LED when an object is within 30cm.
3. Activates a buzzer when an object is detected.
4. Rotates the servo motor to simulate opening a gate.
6. Turns on the yellow LED when there's no object and the path is clear.

# How it works
1. The Arduino sends a 10 µs pulse to the HC-SR04 trigger pin.
2. The sensor emits an ultrasonic sound waves.
3. The sound waves hits the nearest object and returns to the sensor.
4. The Arduino measures the time taken for the echo to return.
5. The distance is then calculated using the speed of sound i.e distance = duration * 0.034 / 2
6. If the distance is less than or equal to 30cm then:
   - Blue LED turns ON.
   - Yellow LED turns OFF.
   - Buzzer sounds.
   - Servo motor rotates to 90°.
7. Else:
   - Yellow LED turns ON.
   - Blue LED turns OFF.
   - Buzzer turns OFF.
   - Servo retuns to 0°.

# Concepts Learned
1. How a HC-SR0 ultrasonic works.
2. Learnt how to make a connection between a resistor and LED.
3. Learnt that the line in the breadboard stops a connection to the other side.
4. When troubleshooting, defective components could also be an issue and not always wiring.
5. Learnt about Serial Communication between the Arduino and my Laptop.
6. Learnt about functions like tone(), noTone(), pulseIn().

# Challenges faced
1. Defective LEDs. Replacing it with another LED resolved the problem.
2. Lack of knowledge on some of the concepts. Asked for helped from a colleague & asked AI to explain whenever I had questions.
