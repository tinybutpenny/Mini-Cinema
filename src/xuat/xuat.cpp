#include "xuat.h"

int tongtien = 0;
// kiểm tra số lượng
bool kiemtrasoluong(int soluong) {
    if (soluong != 0) {
        return true;
    } else { return false;}
}
// tính tiền ghế
float tienghe() {
    float sotien = 0;
    if (phim == "P1") {
        if (gio == "7h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 20;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 30.5;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 50.9;
            }
        } else if (gio == "14h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 18;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 48.7;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 30;
            }
        } else if (gio == "22h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 45.5;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 21;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 18;
            }
        }
    } else if (phim == "P2") {
        if (gio == "10h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 21;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 31.5;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 52;
            }

        } else if (gio == "12h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 19;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 49.7;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 31;
            }

        } else if (gio == "14h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 46.5;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 22;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 19;
            }

        }
    } else if (phim == "P3") {
        if (gio == "20h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 22;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 32.5;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 53;
            }

        } else if (gio == "23h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 20;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 50.7;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 32;
            }

        } else if (gio == "1h") {
            if (kiemtrasoluong(soluongghethuong)) {
                sotien += soluongghethuong * 47.5;
            }
            if (kiemtrasoluong(soluongghedoi)) {
                sotien += soluongghedoi * 23;
            }
            if (kiemtrasoluong(soluongghevip)) {
                sotien += soluongghevip * 20;
            }

        }
    }
    return sotien;
}
// tính tiền đồ ăn
float tiendoan() {
    float sotien = 0;
    if (kiemtrasoluong(soluongf1)) {
        sotien += soluongf1 * 3.4;
    }
    if (kiemtrasoluong(soluongf2)) {
        sotien += soluongf2 * 2.7;
    }
    if (kiemtrasoluong(soluongf3)) {
        sotien += soluongf3 * 3;
    }
    if (kiemtrasoluong(soluongf4)) {
        sotien += soluongf4 * 4.6;
    }
    return sotien;
}
// tính tiền đồ uống
float tiendouong() {
    float sotien = 0;
    if (kiemtrasoluong(soluongd1)) {
        sotien += soluongd1 * 4.4;
    }
    if (kiemtrasoluong(soluongd2)) {
        sotien += soluongd2 * 3.6;
    }
    if (kiemtrasoluong(soluongd3)) {
        sotien += soluongd3 * 5;
    }
    if (kiemtrasoluong(soluongd4)) {
        sotien += soluongd4 * 2.6;
    }
    if (kiemtrasoluong(soluongd5)) {
        sotien += soluongd5 * 9;
    }
    return sotien;

}
// tính tiền combo
float tiencombo() {
    float sotien = 0;
    if (kiemtrasoluong(soluongc1)) {
        sotien += soluongc1 * 4.9;
    }
    if (kiemtrasoluong(soluongc2)) {
        sotien += soluongc2 * 9.6;
    }
    if (kiemtrasoluong(soluongc3)) {
        sotien += soluongc3 * 10.5;
    }
    if (kiemtrasoluong(soluongc4)) {
        sotien += soluongc4 * 14.8;
    }
    return sotien;
}
// tính tổng số tiền 
float tongtienhoadon() {
    float tongtien = 0;
    tongtien += tienghe();
    tongtien += tiendoan();
    tongtien += tiencombo();
    return tongtien;
}
// in menu
void inmenu() {
    std::cout << xanhla "*=======================================CHÀO MỪNG BẠN ĐẾN RẠP PHIM PENNY.CGV===================================*" Reset << std::endl;
    inphim();
    indoan();
    indouong();
    incombo();
}
// hàm in giá tiền ghế 
float ingiaghe(char a) {
    if (phim == "P1") {
        if (gio == "7h") {
            if (a == 'T') {
                return 20;
            }
            if (a == 'Đ') {
                return 30.5;
            }
            if (a == 'V') {
                return 50.9f;
            }   
        }
        if (gio == "14h") {
            if (a == 'T') {
                return 18;
            }
            if (a == 'Đ') {
                return 48.7;
            }
            if (a == 'V') {
                return 30;
            }
        }
        if (gio == "22h") {
            if (a == 'T') {
                return 45.5;
            }
            if (a == 'Đ') {
                return 21;
            } 
            if (a == 'V') {
                return 18;
            }
        }
    }
    if (phim == "P2") {
        if (gio == "10h") {
            if (a == 'T') {
                return 21;
            }
        }
        if (gio == "12h") {
            if (a == 'Đ') {
                return 31.5;
            }
            if (a == 'V') {
                return 52;
            }
        } 
        if (gio == "14h") {
            if (a == 'T') {
                return 19;
            }
            if (a == 'Đ') {
                return 49.7;
            }
            if (a == 'V') {
                return 31;
            }
        }
        if (gio == "14h") {
            if (a == 'T') {
                return 46.5;
            }
            if (a == 'Đ') {
                return 22;
            }
            if (a == 'V') {
                return 19;
            }
        }
    } 
    if (phim == "P3") {
        if (gio == "20h") {
            if (a == 'T') {
                return 22;
            }
            if (a == 'Đ') {
                return 32.5;
            }
            if (a == 'V') {
                return 53;
            }
        }
        if (gio == "23h") {
            if (a == 'T') {
                return 20;
            }
            if (a == 'Đ') {
                return 50.7;
            }
            if (a == 'V') {
                return 32;
            }
        } 
        if (gio == "1h") {
            if (a == 'T') {
                return 47.5;
            } 
            if (a == 'Đ') {
                return 23;
            }
            if (a == 'V') {
                return 20;
            }
        }
    }
}
// in phim 
void p() {
    std::cout << " Các ghế là:" << std::endl;
    if (soluongghethuong !=0) {
        std::cout << "Ghế thường:\n"
        << "Số ghế là: " << soluongghethuong << '\n'
        << "Các ghế là: " << ghedachonthuong << '\n'
        << " Giá: " << ingiaghe('T') << "$\n";
    }
    if (soluongghevip != 0) {
        std::cout << "Ghế Vip:\n"
        << "Số ghế là: " << soluongghevip << '\n'
        << "Các ghế là: " << ghedachonvip << '\n'
        << " Giá: " << ingiaghe('V') << "$\n";
    }
    if (soluongghedoi != 0) {
        std::cout << "Ghế Đôi:\n"
        << "Số ghế là: " << soluongghedoi << '\n'
        << "Các ghế là: " << ghedachondoi << '\n'
        << " Giá: " << ingiaghe('Đ') << "$ \n";
    }

}
// in ra hóa đơn tiền
void inhoadon() {
    std::cout << "Phim bạn đã chọn là:\n";

    if (phim == "p1") {
        std::cout << "Taylor Swift Era\n";
        std::cout << "Giờ chiếu là: " << gio << std::endl;
        p();
    } else if (phim == "p2") {
        std::cout << "Avengers\n";
        std::cout << "Giờ chiếu là: " << gio << std::endl;
        p();
    } else if (phim == "p3") {
        std::cout << "Spiderman\n";
        std::cout << "Giờ chiếu là: " << gio << std::endl;
        p();
    }
    // in hóa đơn đồ ăn 
    bool kiemtradoan = (soluongf1 > 0 || soluongf2 > 0 || soluongf3 > 0 || soluongf4 > 0);
    if (kiemtradoan) {
        std::cout << " Đồ ăn bạn đã chọn là: \n";
        if (kiemtrasoluong(soluongf1)) {
            std::cout << " Bắp mặn\n"  
            << " Đơn giá: 3.4$ \n"
            << " Số lượng: " << soluongf1 << '\n';
        }
        if (kiemtrasoluong(soluongf2)) {
            std::cout << " Bắp ngọt \n"
            << " Đơn giá: 2.7$ \n"
            << " Số lượng: " << soluongf2 << '\n';
        }
        if (kiemtrasoluong(soluongf3)) {
            std::cout << " Bắp phô mai\n" 
            << " Đơn giá: 3$\n"
            << " Số lượng: " << soluongf3 << '\n';
        }
        if (kiemtrasoluong(soluongf4)) {
            std::cout << " Bắp mix vị\n"
            << " Đơn giá: 4.6$\n"  
            << " Số lượng: " << soluongf4 << '\n';
        }
    }
    // in hóa đơn đồ uống
    bool kiemtradouong = (soluongd1 > 0 || soluongd2 > 0 || soluongd3 > 0 || soluongd4 > 0 || soluongd5 > 0);
    if (kiemtradouong) {
        std::cout << " Đồ uống bạn đã chọn là: \n";
        if (kiemtrasoluong(soluongd1)) {
            std::cout << " Coca\n"
            << " Đơn giá: 4.4$\n"
            << " Số lượng: " << soluongd1 << '\n';
        }
        if (kiemtrasoluong(soluongd2)) {
            std::cout << " Pepsi\n" 
            << " Đơn giá: 3.6$\n"
            << " Số lượng: " << soluongd2 << '\n';
        } 
        if (kiemtrasoluong(soluongd3)) {
            std::cout << " Cafe\n"  
            << " Đơn giá: 5$\n"
            << " Số lượng: " << soluongd3 << '\n';
        }
        if (kiemtrasoluong(soluongd4)) {
            std::cout << " Voka\n" 
            << " Đơn giá: 2.6$\n"
            << " Số lượng: " << soluongd4 << '\n';
        }
        if (kiemtrasoluong(soluongd5)) {
            std::cout << " Trà sữa\n"
            << " Đơn giá: 9$\n"
            << " Số lượng: " << soluongd5 << '\n';
        }
    }
    // in hóa đơn combo
    bool kiemtracombo = (soluongc1 > 0 || soluongc2 > 0 || soluongc3 > 0 || soluongc4 > 0);
    if (kiemtracombo) {
        std::cout << " Combo bạn đã chọn là: \n";
        if (kiemtrasoluong(soluongc1)) {
            std::cout << " Combo1: Bắp mắn + Coca"
            << " Đơn giá: 4.9$\n" 
            << " Số lượng: " << soluongc1 << '\n';
        }
        if (kiemtrasoluong(soluongc2)) {
            std::cout << " Combo2: Bấp ngọt + Pepsi"
            << " Đơn giá: 9.6$\n"
            << " Số lượng: " << soluongc2 << '\n';
        }
        if (kiemtrasoluong(soluongc3)) {
            std::cout << " Combo Couple: Bắp mix + 2 Coca\n"
            << " Đơn giá: 10.5$\n"
            << " Số lượng: " << soluongc3 << '\n';
        } 
        if (kiemtrasoluong(soluongc4)) {
            std::cout << " Combo VIP: Bắp phô mai + Trà sữa + Voka"
            << " Đơn giá: 14.8\n"
            << " Số lượng: " << soluongc4 << '\n';
        }
    }
    std::cout << " Số tiền bạn phải trả là: " << tongtienhoadon() << "$" << std::endl;
}
void reset() {
    soluongghevip = 0, soluongghethuong = 0, soluongghedoi = 0;
    soluongf1 = 0, soluongf2 = 0, soluongf3 = 0, soluongf4 = 0;
    soluongd1 = 0, soluongd2 = 0, soluongd3 = 0, soluongd4 = 0, soluongd5 = 0;
    soluongc1 = 0, soluongc2 = 0, soluongc3 = 0, soluongc4 = 0;
}

