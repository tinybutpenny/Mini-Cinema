#include "chung.h"

std::string ten;
std::string phim;
std::string ghedachonthuong;
std::string ghedachonvip;
std::string ghedachodoi;
std::string ghedangco = " AA AB AC AD AE AF AG AH AI AJ BA BB BC BD BE BF BG BH BI BJ CA CB CC CD CE CF CG CH CI CJ DA DB DC DD DE DF DG DH DI DJ EA EB EC ED EE EF EG EH EI EJ FA FB FC FD FE FF FG FH FI FJ GA GB GC GD GE GF GG GH GI GJ HA HB HC HD HE HF HG HH HI HJ IA IB IC ID IE IF IG IH II IJ JA JB JC JD JE";
std::string ghedoi = " JA JB JC JD JE JF JG JH JI JJ ";
std::string ghevip = " CC CD CE CF CG CH DC DD DE DF DG DH EC ED EE EF EG EH FC FD FE FF FG FH GC GD GE GF GG GH HC HD HE HF HG HH ";
std::string ghethuong = " AA AB AC AD AE AF AG AH AI AJ BA BB BC BD BE BF BG BH BI BJ CA CB CI CJ DA DB DI DJ EA EB EI EJ FA FB FI FJ GA GB GI GJ HA HB HI HJ IA IB IC ID IE IF IG IH II IJ ";
int soluongghevip = 0;
int soluongghedoi = 0;
int soluongghethuong = 0;
std::string ghep1_7h;
std::string ghep1_14h;
std::string ghep1_22h;
std::string ghep2_10h;
std::string ghep2_12h;
std::string ghep2_14h;
std::string ghep3_20h;
std::string ghep3_23h;
std::string ghep3_1h;
std::string gio;
int soluongf1 = 0, soluongf2 = 0, soluongf3 = 0, soluongf4 = 0;
int soluongd1 = 0, soluongd2 = 0, soluongd3 = 0, soluongd4 = 0, soluongd5 = 0;
int soluongc1 = 0, soluongc2 = 0, soluongc3 = 0, soluongc4 = 0;
// dọn kí tự thừa
void donrac() { 
    if (std::cin.peek() != '\n' && std::cin.peek() != EOF) { // kiểm tra nếu buffet không bằng \n thì dọn và tránh eof khi bufet rỗng
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
// chuyển kí tự thường sang hoa
std::string kituhoa(std::string a) { 
    for (char &b :a)
        b = toupper(b);
        return a;
}
// nhập y/n để thoát
char chonthoat() { 
    char chon;
    while (true) {
        std::cin >> chon;
        if (std::cin.fail()) {
            std::cout << " Chọn lỗi vui lòng chọn lại"  << std::endl;
            std::cin.clear();
            donrac();
            continue;
        } else {
            chon = tolower(chon); // kí tự hoa sang thường
            donrac();
            return chon;
        }
    }
}
// kiểm tra ghế 
bool kiemtraghetrong(std::string ghe) {  
    std::string timkiem = " " + ghe + " ";
    if (phim == "P1") {
        if (gio == "7h") {
            return ghep1_7h.find(timkiem) == std::string::npos;
        } else if (gio == "14h") {
            return ghep1_14h.find(timkiem) == std::string::npos;
        } else {
            return ghep1_22h.find(timkiem) == std::string::npos;
        }
    } else if (phim == "P2") {
        if (gio == "10h") {
            return ghep2_10h.find(timkiem) == std::string::npos;
        } else if (gio == "12h") {
            return ghep2_12h.find(timkiem) == std::string::npos;
        } else {
            return ghep2_14h.find(timkiem) == std::string::npos;
        }
    } else {
        if (gio == "20h") {
            return ghep3_20h.find(timkiem) == std::string::npos;
        } else if (gio == "23h") {
            return ghep3_23h.find(timkiem) == std::string::npos;
        } else {
            return ghep3_1h.find(timkiem) == std::string::npos;
        }
    }
}
// đếm ghế đã chọn
int demghe(std::string a) {
    int c = 0;
    for (char s : a) {
        if (s == ' ') {
            continue;
        } else { c ++;}
    }
    return c / 2;
}
// in phim đang chiếu
void inphim() { 
    std::cout << Cyan
              << "*========================================="
              << " LỊCH CHIẾU HÔM NAY:"
              << "===============================================*\n"
              << Reset;

    std::cout << std::left
              << std::setw(15) << "Tên phim:"
              << std::setw(20) << "Taylor Swift Era"
              << std::setw(20) << "Avengers"
              << std::setw(20) << "Spiderman" << "\n";

    std::cout << std::left
              << std::setw(15) << "Mã phim:"
              << std::setw(20) << "P1"
              << std::setw(20) << "P2"
              << std::setw(20) << "P3" << "\n";

    std::cout << std::left
              << std::setw(15) << "Giờ chiếu:"
              << std::setw(20) << "7h|14h|22h"
              << std::setw(20) << "10h|12h|14h"
              << std::setw(20) << "20h|23h|1h" << "\n";

    std::cout << std::left
              << std::setw(15) << "Số ghế:"
              << std::setw(20) << (std::to_string(demghe(ghep1_7h)) + "/95 "
                                  + std::to_string(demghe(ghep1_14h)) + "/95 "
                                  + std::to_string(demghe(ghep1_22h)) + "/95")
              << std::setw(20) << (std::to_string(demghe(ghep2_10h)) + "/95 "
                                  + std::to_string(demghe(ghep2_12h)) + "/95 "
                                  + std::to_string(demghe(ghep2_14h)) + "/95")
              << std::setw(20) << (std::to_string(demghe(ghep3_20h)) + "/95 "
                                  + std::to_string(demghe(ghep3_23h)) + "/95 "
                                  + std::to_string(demghe(ghep3_1h)) + "/95")
              << "\n";

    // Giá theo từng giờ (T/Đ/V)
    std::cout << std::left
              << std::setw(15) << "Giá (T/Đ/V):"
              << std::setw(22) << "7h: 20/30.5/50.9"
              << std::setw(22) << "14h: 18/48.7/30"
              << std::setw(22) << "22h: 45.5/21/18" << "\n";

    std::cout << std::setw(15) << ""
              << std::setw(22) << "19h: 21/31.5/52"
              << std::setw(22) << "12h: 19/49.7/31"
              << std::setw(22) << "14h: 46.5/22/19" << "\n";

    std::cout << std::setw(15) << ""
              << std::setw(22) << "20h: 22/32.5/53"
              << std::setw(22) << "23h: 20/50.7/32"
              << std::setw(22) << "1h:  47.5/23/20" << "\n";
}
// fomat ghế đơn
std::string fomatghedon(std::string ghe) {  
    return " " + ghe + " ";
}
// fomat ghế đôi
std::string fomatghedoi(std::string ghe) { 
    return "   " + ghe + "   ";
}
// in rạp
void inrap() {  
    std::cout << " Trắng: Ghế thường \n"
    << Xanhduong << " Xanh dương: Ghế vip \n"
    << Tim << " Tím: Ghế đôi\n"
    << Do << " Đỏ: Ghế đã được chọn\n"
    << xanhla "===============================================================" << std::endl;
    for (char hang = 'A'; hang <= 'J'; hang++) {
        if (hang == 'J') { //ghế đôi
            for (char cot = 'A'; cot <= 'J'; cot ++) {
                std::string ghe = std::string(1,hang) + std::string(1,cot);
                if (kiemtraghetrong(ghe)) {
                    std::cout << Do << fomatghedoi(ghe) << Reset;
                } else {std::cout << Tim << fomatghedoi(ghe) << Reset;}
            }
            std::cout << std::endl;
        }
        if (hang == 'A' && hang <= 'I') {
            for (char cot = 'A'; cot <= 'J'; cot ++) {
                std::string ghe = std::string(1,hang) + std::string(1,cot);
                if (hang >= 'C' && hang <= 'H' && cot >= 'C' && cot <= 'H') { // ghế vip
                    if (kiemtraghetrong(ghe)) {
                        std::cout << Do << fomatghedon(ghe) << Reset;
                    } else {std::cout << Xanhduong << fomatghedon(ghe) << Reset;}
                } else { // ghế thường
                    if (kiemtraghetrong(ghe)) {
                        std::cout << Do << fomatghedon(ghe) << Reset;
                    } else {std::cout << fomatghedon(ghe) << "";}
                }
            }
            std::cout << std::endl;
        }
    }
}
// in đồ ăn
void indoan() { 
    std::cout << Vang "*==========================================" " Đồ ăn hiện có là:" "=============================================*\n" Reset
    << std::endl;
    std::cout
    << " Tên:"      << "\t" "\t" "\t" << " Bắp mặn" << "\t" "\t" << " Bắp ngọt"   << "\t" "\t" << " Bắp phô mai" << "\t" "\t" << " Bắp mix vị" << "\n"
    << " Mã đò ăn:" <<    "\t" "\t"   << " F1" "\t" << "\t" "\t" << " F2"     "\t"<< "\t" "\t" << " F3" "\t"     << "\t" "\t" << " F4"          << "\n"
    << " Giá:"      << "\t" "\t" "\t" << " 3.4$   " << "\t" "\t" << " 2.7$" "\t"  << "\t" "\t" << " 3$" "\t"     << "\t" "\t" << " 4.6$"       << "\n"
    << std::endl;
}
// in đồ uống
void indouong() { 
    std::cout << Vang "*==========================================" " Đồ uống hiện có là:" "============================================*\n" Reset
    << std::endl;
    std::cout
    << " Tên:"       << "\t" "\t" "\t" << " Coca"   << "\t" "\t" "\t" << " Pepsi" "\t" << "\t" "\t" << " Cafe"   << "\t" "\t" "\t" << " Voka"   << "\t" "\t" "\t" << " Trà sữa" << "\n"
    << " Mã đồ uống:"<<    "\t" "\t"   << " D1" "\t"<< "\t" "\t"      << " D2"     "\t"<< "\t" "\t" << " D3" "\t"<< "\t" "\t"      << " D4"     << "\t" "\t" "\t" << " D5"        << "\n"
    << " Giá:"       << "\t" "\t" "\t" << " 4.4$"   << "\t" "\t" "\t" << " 3.6$"  "\t" << "\t" "\t" << " 5$"     << "\t" "\t" "\t" << " 2.6$"   << "\t" "\t" "\t" << " 9$"      << "\n"
    << std::endl;

}
// in combo
void incombo() { 
    std::cout << Xanhla "*==========================================" " Các combo hiện có là:" "===========================================*\n" Reset                                             
    << std::endl;

    std::cout 
    << " Tên combo:"  << "\t" "\t"  << " Combo 1"        << "\t" "\t" << " Combo 2"             << "\t" "\t" << " Combo Couple"     << "\t" "\t" << " Combo VIP"                    << "\n"
    << " Mã combo:"   << "\t" "\t"  << " C1" "\t"        << "\t" "\t" << " C2" "\t"             << "\t" "\t" << " C3" "\t"          << "\t" "\t" << " C4"                            << "\n"
    << " Gồm:" "\t"   << "\t" "\t"  << " Bắp mặn + Coca" << "\t" "\t" << " Bắp ngọt + Pepsi"    << "\t"      << " Bắp mix + 2 Coca" << "\t"      << " Bắp phô mai + Trà sữa + Voka" << "\n"
    << " Giá combo:"  << "\t" "\t"  << " 4.9$" "\t"      << "\t" "\t" << " 9.6$"      "\t"      << "\t" "\t" << " 10.5$"  "\t"      << "\t" "\t" << " 14.8$"                        << "\n"
    << std::endl;
}