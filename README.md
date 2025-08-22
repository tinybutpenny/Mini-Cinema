# 🎬 Mini-Cinema (C++ Console App)

**Console-based cinema booking system written in pure C++.**

---

## 🧠 Project Overview

This project simulates a simple cinema booking system on the console. It is coded with **basic C++** and a modular structure.

**Main features:**

* Choose from 3 movies (Taylor Swift Era, Avengers, Spiderman)
* Select showtime
* Book seats (Regular, VIP, Couple)
* Order food, drinks, and combos
* Automatic price calculation with promotions
* Print invoice with details

---

## 🎬 Movies & Showtimes

| Code | Title            | Showtimes     |
| ---- | ---------------- | ------------- |
| P1   | Taylor Swift Era | 7h, 14h, 22h  |
| P2   | Avengers         | 10h, 12h, 14h |
| P3   | Spiderman        | 20h, 23h, 1h  |

---

## 🪑 Seat Types

* Regular (T)
* Couple (D)
* VIP (V)

---

## 🚀 How to Run

```bash
g++ -std=c++17 -O2 main.cpp chung.cpp nhap.cpp xuat.cpp -o cinema
./cinema
```

Or using CMake:

```bash
mkdir build && cd build
cmake ..
cmake --build . --config Release
./cinema   # Linux/macOS
cinema.exe # Windows
```

---

## 💻 Code Structure

| File       | Purpose                      |
| ---------- | ---------------------------- |
| `main.cpp` | Main program loop            |
| `chung.*`  | Shared variables & utilities |
| `nhap.*`   | Input handling               |
| `xuat.*`   | Output and calculations      |

---

## 📄 Example Session

```plaintext
> Enter your name:
thang


> Enter movie code:
P1
Taylor Swift Era


> Enter showtime:
7h


> Choose seat:
AA
Selected seat: AA


> Choose food code:
F1
> Enter quantity:
2


> Choose drink code:
D5
> Enter quantity:
1


> Choose combo code:
C2
> Enter quantity:
1


--- INVOICE ---
Customer: thang
Movie: Taylor Swift Era
Showtime: 7h
Seat: AA (Regular)
Ticket: $20.0


Snacks:
- F1 x2 = $6.8


Drinks:
- D5 x1 = $9.0


Combos:
- C2 x1 = $9.6


Subtotal: $45.4
Promotion Applied: Golden Seat (AA) ✅ -10%
Total: $40.86
```

---

## ✨ Author

**DUONG VAN THANG** aka **Penny**

[![GitHub](https://img.shields.io/badge/GitHub-tinybutpenny-black?style=for-the-badge\&logo=github)](https://github.com/tinybutpenny)

📧 Email: [duongthang090803@gmail.com](mailto:duongthang090803@gmail.com)

---

**⭐ If you find this project helpful, consider giving it a star!**
