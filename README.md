# SoftGrowTech_Smart_LED_System 💡

This project is developed as part of the **SoftGrow Tech IoT Internship**. It features a touchless LED alert system that triggers based on the proximity of an object using an ultrasonic sensor.

🚀 Project Overview
The system measures distance in real-time. If an object comes within a 20cm range, the Arduino triggers a visual alert by turning on the LED. This demonstrates sensor-actuator integration and basic logic handling in embedded systems.

🛠️ Hardware Components
* **Microcontroller:** Arduino Uno 🏢
* **Sensor:** HC-SR04 Ultrasonic Sensor 🛰️
* **Actuator:** LED (with 220-ohm Resistor) 💡
* **Breadboard & Jumper Wires** 🔌

🔌 Circuit Connections
| Component                  | Arduino Pin |
| -------------------------- | ----------- |
| Sensor VCC                 | 5V          |
| Sensor GND                 | GND         |
| Sensor Trig                | Pin 9       |
| Sensor Echo                | Pin 10      |
| LED Anode (+ via resistor) | Pin 13      |
| LED Cathode (-)            | GND         |




 📝 How it Works
1. The **Ultrasonic Sensor** calculates the distance of the nearest object.
2. The **Arduino** processes this data.
3. If **Distance < 20cm**, the LED turns **ON**.
4. If **Distance > 20cm**, the LED turns **OFF**.

🎓 Internship Credit
* **Organization:** SoftGrow Tech 🏢
* **Task:** SMART LED SYSTEM 
* **Student:** Hafiza Yumna Mushtaq
