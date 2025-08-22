# 🎬 Cinema Booking System - PENNY.CGV

**Simple logic. Real cinema experience.**

*Hi, I'm Penny — I build cinema booking systems step by step, just like arranging cinema seats with C++.*

*Welcome to this humble cinema app — where `cin`, `cout`, and real movie booking logic meet.*

---

## 🧠 Project Overview

### 🇺🇸 
This project is a **console-based cinema booking system**, coded in **pure C++** with modular design.

**What you can do:**
- 🎭 Choose from 3 movies with multiple showtimes
- 🪑 Select seats (Regular/Couple/VIP) with visual seat map
- 🍿 Order food, drinks, and combos
- 💰 Automatic price calculation with smart promotions
- 🎫 Get detailed booking invoice
- 📊 Real-time seat availability tracking

🔰 **Built with clean C++ architecture using:**
- Modular file structure (header/implementation separation)
- Input validation and error handling
- Dynamic pricing based on movie/time/seat type
- Smart promotion system
- Colorful console interface

### 🇻🇳 
Dự án **hệ thống đặt vé xem phim** trên giao diện console, viết bằng **C++ thuần túy** với thiết kế module rõ ràng.

**Tính năng:**
- 🎭 Chọn từ 3 bộ phim với nhiều suất chiếu
- 🪑 Chọn ghế (Thường/Đôi/VIP) với sơ đồ ghế trực quan
- 🍿 Đặt đồ ăn, thức uống, combo
- 💰 Tính tiền tự động với hệ thống khuyến mãi thông minh
- 🎫 In hóa đơn chi tiết
- 📊 Theo dõi tình trạng ghế theo thời gian thực

✅ **Phù hợp để học lập trình C++ từ cơ bản đến nâng cao.**

---

## 🎬 Movies & Showtimes

| Movie Code | Title | Showtimes | Seat Capacity |
|------------|--------|-----------|---------------|
| **P1** | 🎤 Taylor Swift Era | 7h, 14h, 22h | 95 seats each |
| **P2** | 🦸 Avengers | 10h, 12h, 14h | 95 seats each |
| **P3** | 🕷️ Spiderman | 20h, 23h, 1h | 95 seats each |

---

## 🪑 Seat Types & Pricing

### 💺 Seat Categories
- **🟦 VIP (V):** Premium seats (CC-HH, rows C-H, columns C-H)
- **💜 Couple (D):** Double seats (Row J, JA-JJ)  
- **⚪ Regular (T):** Standard seats (All other positions)

### 💵 Dynamic Pricing Examples
| Movie | Time | Regular | Couple | VIP |
|-------|------|---------|--------|-----|
| P1 | 7h | $20.0 | $30.5 | $50.9 |
| P1 | 14h | $18.0 | $48.7 | $30.0 |
| P2 | 10h | $21.0 | $31.5 | $52.0 |
| P3 | 20h | $22.0 | $32.5 | $53.0 |

> 📈 **Smart Pricing:** Prices vary by movie, showtime, and seat type

---

## 🍿 Food & Beverage Menu

### 🥨 Snacks
| Code | Item | Price |
|------|------|-------|
| F1 | 🧂 Bánh bắp mặn | $3.4 |
| F2 | 🍯 Bánh bắp ngọt | $2.7 |
| F3 | 🧀 Bánh bắp phô mai | $3.0 |
| F4 | 🌿 Bánh bắp mix vị | $4.6 |

### 🥤 Beverages  
| Code | Item | Price |
|------|------|-------|
| D1 | 🥤 Coca Cola | $4.4 |
| D2 | 🥤 Pepsi | $3.6 |
| D3 | ☕ Coffee | $5.0 |
| D4 | 🍸 Vodka | $2.6 |
| D5 | 🧋 Trà sữa | $9.0 |

### 🎁 Combo Deals
| Code | Description | Price |
|------|-------------|-------|
| C1 | 🧂 Bánh bắp mặn + Coca | $4.9 |
| C2 | 🍯 Bánh bắp ngọt + Pepsi | $9.6 |
| C3 | 🌿 Bánh bắp mix + 2 Coca | $10.5 |
| C4 | 🧀 Bánh bắp phô mai + Trà sữa + Vodka | $14.8 |

---

## 🎉 Smart Promotion System

| Promotion | Condition | Reward |
|-----------|-----------|---------|
| 🏆 **Golden Seat** | Choose seat "AA" | 10% discount on tickets |
| 💑 **Couple Bonus** | Book couple seats | Free Combo1 for each couple seat |
| 💎 **Big Spender** | Total bill > $100 | +2 Free sweet popcorn |
| 🎤 **Swiftie Fan** | Watch Taylor Swift Era | 10% discount on total bill |

---

## 🚀 How to Run

```bash
# Clone the repository
git clone https://github.com/yourusername/cinema-booking-system.git
cd cinema-booking-system

# Compile the project
g++ -o cinema main.cpp nhap.cpp xuat.cpp chung.cpp

# Run the application
./cinema
```

📍 **Requirements:** C++ compiler (g++, clang++, or MSVC)

---

## 💻 Code Architecture

| File | Purpose |
|------|---------|
| `main.cpp` | Main program loop and user flow |
| `nhap.h/cpp` | Input handling and validation |
| `xuat.h/cpp` | Output formatting and invoice generation |
| `chung.h/cpp` | Shared utilities and data structures |

### 🏗️ Key Features
- **Modular Design:** Clean separation of concerns
- **Input Validation:** Robust error handling for all user inputs
- **Dynamic Memory:** Efficient seat tracking per movie/showtime
- **Visual Interface:** Colorful console with seat map visualization
- **Smart Calculations:** Complex pricing with multiple promotion rules

---

## 📱 User Experience Flow

```plaintext
1. 🎬 Welcome Screen & Movie Selection
   ├── Choose movie (P1/P2/P3)
   ├── Select showtime
   └── Check seat availability

2. 🪑 Interactive Seat Selection
   ├── Visual seat map display
   ├── Real-time availability check
   └── Multiple seat booking

3. 🍿 Food & Beverage Ordering
   ├── Browse menu by category
   ├── Add items to cart
   └── Smart combo suggestions

4. 🧾 Invoice & Payment
   ├── Detailed breakdown
   ├── Applied promotions
   └── Final total calculation

5. 🔄 Continue or Exit
```

---

## 🎨 Visual Features

### 🌈 Color-Coded Interface
- 🟢 **Green:** Available regular seats
- 🔵 **Blue:** Available VIP seats  
- 💜 **Purple:** Available couple seats
- 🔴 **Red:** Occupied seats
- 🎨 **Colorful menus and headers**

### 📊 Real-Time Information
- Live seat availability counter
- Dynamic pricing display
- Instant promotion notifications
- Clear booking confirmations

---

## 🛠️ Technical Highlights

### 🔧 Advanced C++ Concepts Used
```cpp
// String manipulation for seat tracking
std::string seat_format = " " + seat + " ";
if (available_seats.find(seat_format) != std::string::npos)

// Function overloading for different input types
int nhapsoluong();
std::string nhapten();
std::string nhapphim();

// Dynamic pricing calculation
double calculatePrice(string movie, string time, char seatType);

// Smart promotion system
bool applyPromotions(double &total, string movie, int coupleSeats);
```

### 📈 Performance Features
- **O(1) seat lookup** using string search
- **Minimal memory usage** with efficient string storage
- **Fast validation** with lookup tables
- **Instant calculations** with optimized algorithms

---

## 🎯 Why This Project?

*Real-world complexity meets educational clarity.*

**Perfect for learning:**
- ✅ **Modular Programming:** Clean file organization
- ✅ **Input Validation:** Bulletproof user input handling  
- ✅ **Business Logic:** Complex pricing and promotion rules
- ✅ **String Manipulation:** Advanced text processing
- ✅ **Console UI:** Creating engaging text-based interfaces

**Real-world applications:**
- 🎬 Cinema booking systems
- 🎫 Event ticketing platforms
- 🍕 Restaurant ordering systems
- 🛒 E-commerce cart management

> 📌 **Philosophy:** Complex business logic implemented with crystal-clear code structure.

---

## 🔮 Future Enhancements

- [ ] 💾 **Database Integration:** Persistent seat reservations
- [ ] 🌐 **Web Interface:** Convert to web application
- [ ] 💳 **Payment Gateway:** Real payment processing
- [ ] 📧 **Email Confirmation:** Automated booking confirmations
- [ ] 📱 **Mobile App:** React Native or Flutter version
- [ ] 🎮 **3D Seat Map:** Interactive 3D cinema visualization

---

## ✨ Author

### 👑 **YOUR NAME** aka **Penny**

🛠️ **Software Developer** | **C++ Enthusiast** | **Cinema Tech Builder**

⚡ *"Building real-world applications with clean, maintainable code."*

---

### 🔗 Contact

[![GitHub](https://img.shields.io/badge/GitHub-yourusername-black?style=for-the-badge&logo=github)](https://github.com/yourusername)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-yourprofile-blue?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/yourprofile)

📧 **Email:** your.email@gmail.com

---

## 📊 Project Stats

![Language](https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=cplusplus)
![Platform](https://img.shields.io/badge/Platform-Cross--Platform-green?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

```
Lines of Code: ~800+
Files: 8 (4 headers + 4 implementations)
Functions: 25+ modular functions  
Features: Movies, Seats, Food, Promotions
Complexity: Intermediate to Advanced
```

---

*Code with passion. Build with purpose.*

**Thanks for checking out my cinema booking system!** 🎬🍿

---

**⭐ If you find this project helpful, consider giving it a star!**

*Built with ❤️ and clean C++ architecture*