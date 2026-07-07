## Automatic Night Light

# Overview
This project uses an LDR(light Dependent Light) to turn the red LED ON or OFF. Its resistance decreases as the intensity of light increases so when there's darkness the red LED turns on and if there's brightness it turns OFF.

# Components Used
- Arduino Uno
- Breadboard
- Red LED
- Photoresistor(LDR)
- Jumper Wires
- Power Cable
- 330Ω resistor for the red LED
- 4.62kΩ for the photoresistor

# Circuit Description
<img width="600" height="500" alt="simulation" src="https://github.com/user-attachments/assets/a1a13a95-87d9-46e3-b650-fde0107207ee" />

# Features
- Automatically detects the light level using the photoresistor
- Turns the lED ON if the environment is bright.
- Turns the LED OFF if the environment is dark.
- Continuously monitors the brightness levels.

# How it Works
The photoresistor detects the light from the surrounding. The LDR and the resistor form a voltage divider producing voltage that changes with the light intensity. This voltage is measured by the Arduino specifially the analog pin(A0) to know about the light intensity and decides whether to turn the LED ON or OFF. The Arduino continuously reads the light level using analogRead() and converts it from analog voltage to digital value. This value will be compared to a predefined threshold() and if the value is below the threshold(dark environment) then the LED turns ON, else(bright environment) it turns OFF. 

# Leasons Learnt
- The Arduino 
- The A0 measures voltage and converts it from analog voltage to a digital value.
