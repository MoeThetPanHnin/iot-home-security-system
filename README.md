# 🔐 IoT-Based Home Security System (Capstone Project)

> 👨‍🎓 Final-year capstone project at **Seoul National University of Science and Technology (서울과학기술대학교)**  
> Department of Electronic Engineering | Graduation: August 2025  
> Developed by: MOE THET PAN HNIN & SUU MYAT NOE  
> Technologies: Arduino, ESP8266, Telegram Bot, ThingSpeak, React (frontend in progress)

---

## 📌 Project Overview

This project aims to create a **smart, IoT-based home security system** that can detect:
- 🔥 Fire
- 🕵️ Motion or unauthorized entry
- 💥 Vibration or shock
- 🌗 Ambient light level

The system sends **real-time alerts** via a **Telegram bot** and logs data to **ThingSpeak** for remote monitoring. A future enhancement includes a **React-based dashboard** to visualize sensor data and simulate bot-like alerts on the web.

---

## ⚙️ Key Features

- 🚨 Real-time alerts via Telegram when motion is detected
- 🌐 Uploads sensor data to [ThingSpeak](https://thingspeak.com/)
- 📉 Cloud-based logging and analysis of motion, light, and vibration
- 🔦 Automatic lighting based on ambient light (LDR)
- 📡 Low-cost, scalable, and energy-efficient architecture

---

## 🧠 Technologies Used

| Category        | Tools / Components                           |
|----------------|-----------------------------------------------|
| Microcontroller | Arduino Uno, ESP8266 Wi-Fi Modules           |
| Sensors         | PIR (Motion), Flame Sensor, Vibration, LDR   |
| Communication   | Telegram Bot API, ThingSpeak API             |
| Languages       | C/C++ (Arduino), JavaScript (React soon)     |
| Frontend (WIP)  | React, Bootstrap, HTML/CSS, Chart.js         |

---

## 📂 Project Structure


iot-home-security-system/
├── arduino-code/                  # All Arduino and ESP8266 source files
│   ├── telegram.ino               # Sends Telegram alerts on motion detection
│   ├── thingspeak.ino             # Uploads PIR sensor data to ThingSpeak
│   ├── capstonesensor.ino         # Reads analog sensors (fire, light, vibration) and triggers LEDs
│   ├── espsensor1.ino             # Controls LED via serial command (on/off)
│   └── capstoneesp.ino            # Basic blinking status light using ESP
│
├── frontend-dashboard/            # (Coming soon) React web dashboard to visualize sensor data
│   └── README.md                  # Placeholder or notes for dashboard progress
│
├── docs/                          # Project documentation and visual materials
│   ├── final-report-summary.md
│   └── images/                    # Photos, diagrams, screenshots
│
├── README.md                      # Project overview and instructions (this file)
└── .gitignore                     # Files to exclude from version control
