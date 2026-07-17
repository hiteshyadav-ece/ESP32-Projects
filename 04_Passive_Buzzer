# 04 - Passive Buzzer Control using ESP32

## 📌 Objective

Learn how to generate different sound frequencies using a passive buzzer with the ESP32. This project introduces PWM-based tone generation and demonstrates how different frequencies produce different musical notes.

---

## 🛠 Components Required

- ESP32 Dev Module
- Passive Buzzer Module
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Connections

| Passive Buzzer | ESP32 |
|----------------|-------|
| S              | GPIO 25 |
| +              | 3.3V |
| -              | GND |

---

## ⚙ Working Principle

A passive buzzer does not generate sound on its own. It requires a square wave (PWM signal) from the ESP32.

The ESP32 generates PWM signals at different frequencies using the LEDC peripheral. As the frequency changes, the buzzer produces different tones.

---

## 💻 Source Code

```cpp
const int buzzerPin = 25;

void setup() {
  ledcAttach(buzzerPin, 2000, 8);
}

void loop() {
  ledcWriteTone(buzzerPin, 1000);
  delay(1000);

  ledcWriteTone(buzzerPin, 2000);
  delay(1000);

  ledcWriteTone(buzzerPin, 3000);
  delay(1000);

  ledcWriteTone(buzzerPin, 0);
  delay(1000);
}
```

---

## ▶ Output

- The passive buzzer produces tones at different frequencies.
- Higher frequency results in a higher-pitched sound.
- Lower frequency results in a lower-pitched sound.

---

## 📚 Concepts Learned

- GPIO Output
- PWM (Pulse Width Modulation)
- Frequency
- ESP32 LEDC Peripheral
- Tone Generation
- Passive Buzzer Operation

---

## 🌍 Applications

- Alarm Systems
- Doorbell Systems
- Electronic Toys
- Timer Alerts
- Security Systems
- Notification Devices

---

## ❓ Interview Questions

### 1. What is the difference between an active buzzer and a passive buzzer?

Active buzzer contains an internal oscillator and only needs DC power.

Passive buzzer requires an external PWM signal to generate sound.

---

### 2. Why is PWM used with a passive buzzer?

PWM generates square waves at different frequencies, allowing the passive buzzer to produce different tones.

---

### 3. Which ESP32 function is used to generate tones?

`ledcWriteTone()`

---

### 4. What happens if the frequency increases?

The pitch of the sound increases.

---

### 5. Can a passive buzzer play music?

Yes. By changing the frequency continuously, different musical notes can be generated.

---

## 🚀 Future Improvements

- Play simple melodies.
- Create a digital doorbell.
- Build an alarm system.
- Generate musical tunes.
- Integrate with sensors for alerts.

---

## 👨‍💻 Author

**Hitesh Kumar Yadav**

B.Tech Electronics & Communication Engineering (ECE)

Guru Jambheshwar University of Science and Technology (GJUST), Hisar

GitHub: https://github.com/hiteshyadav-ece

LinkedIn: https://www.linkedin.com/in/hitesh-yadav-tech
