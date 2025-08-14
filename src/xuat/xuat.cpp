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
}
// tính tiền đồ ăn
float tiendoan() {
    float sotien = 0;
    if (kiemtrasoluong(soluongf1)) {
        sotien += soluongf1 * 3.4;
    }
    if (kiemtrasoluong(soluongf2)) {
        sotien += soluongf1 * 2.7;
    }
    if (kiemtrasoluong(soluongf3)) {
        sotien += soluongf1 * 3;
    }
    if (kiemtrasoluong(soluongf4)) {
        sotien += soluongf1 * 4.6;
    }
}
// tính tiền đồ uống
float tiendouong() {

}
// tính tiền combo
float tiencombo() {

}
// tính tổng số tiền 
float tongtienhoadon() {
    float tongtien = 0;
    tongtien += tienghe();
    tongtien += tiendoan();
}
// in menu
void inmenu() {
    std::cout << xanhla "*=======================================CHÀO MỪNG BẠN ĐẾN RẠP PHIM PENNY.CGV===================================*" Reset << std::endl;
    inphim();
    indoan();
    indouong();
    incombo();
}
// in ra hóa đơn tiền
void inhoadon() {

}
