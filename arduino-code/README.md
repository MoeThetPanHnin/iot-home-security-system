# 📂 Arduino Code

This folder contains all the Arduino and ESP8266 code used in our IoT-based Home Security System capstone project.  
Each `.ino` file corresponds to a specific sensor module or communication system (Telegram, ThingSpeak, etc.).

---

## 📁 File Descriptions

| File Name            | Description |
|----------------------|-------------|
| `telegram.ino`       | Sends real-time motion alerts via Telegram using a PIR sensor and ESP8266 |
| `thingspeak.ino`     | Uploads motion sensor data to ThingSpeak for real-time monitoring |
| `capstonesensor.ino` | Reads analog sensors (Flame, Vibration, LDR) and controls LEDs based on threshold |
| `espsensor1.ino`     | Simple ESP8266 script that turns an LED on/off via serial commands |
| `capstoneesp.ino`    | ESP-based LED blinker to indicate system status (e.g. power ON) |

---


