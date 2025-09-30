#include "nhap.h"
// nhập số lượng 
int nhapsoluong(){
    std::cout << "> Nhập số lượng mà bạn muốn mua." << std::endl;
    int soluong;
    while (true) {
        std::cin >> soluong;
        if (std::cin.fail()) {
            std::cout << " Nhập lỗi\n" " Vui lòng nhập lại" << std::endl;
            std::cin.clear();
            donrac();
            continue;
        } else {
            donrac();
            return soluong;
        }
    }
}
// nhập tên
std::string nhapten() {
    std::cout << "> Vui lòng nhập tên" << std::endl;
    std::string nhapten;
    while (true) {
        std::getline(std::cin,nhapten);
        if(std::cin.fail()) {
            std::cout << " Nhập lỗi" "\n" " Vui lòng nhập lại" << std::endl;
            std::cin.clear();
            donrac();
            continue;
        } else {
            return nhapten;
        }
    }
}
// kiểm tra phim còn ghế không
bool kiemtraphim(std::string maphim) {
    if (maphim == "P1") {
        return ghep1_7h == ghedangco && ghep1_14h == ghedangco && ghep1_22h == ghedangco;
    } else if(maphim == "P2") {
        return ghep2_10h == ghedangco && ghep2_12h == ghedangco && ghep2_14h == ghedangco;
    } else if (maphim == "P3") {
        return ghep3_20h == ghedangco && ghep3_23h == ghedangco && ghep3_1h == ghedangco;
    }
    return false;
}
// nhập phim 
std::string nhapphim() {
    std::cout << "> Vui lòng nhập mã phim mà bạn muốn xem" << std::endl;
    std::string maphim;
    while (true) {
        std::getline(std::cin,maphim);
        maphim = kituhoa(maphim); // đồng bộ kí tự hoa
        bool kiemtra = (maphim == "P1" || maphim == "P2" || maphim == "P3");
        if (std::cin.fail() || !kiemtra) {
            std::cout << " Không tìm thấy mã phim phù hợp" "\n" " Vui lòng chọn lại" << std::endl;
            std::cin.clear();
            donrac();
            continue;
        } else if (kiemtraphim(maphim)) {
            std::cout << " Phim bạn chọn đã hết ghế\n" " Vui lòng chọn phim khác" << std::endl;
            continue;
        } else { 
            return maphim;
        }
    }
}
// kiểm tra giờ chiếu từng phim xem còn ghế không
bool kiemtragiochieu(std::string maphim, std::string giochieu) {

    if (maphim == "P1") {
        if (giochieu == "7h") {
            return ghep1_7h == ghedangco;
        } else if (giochieu == "14h") {
            return ghep1_14h == ghedangco;
        } else if (giochieu == "22h") {
            return ghep1_22h == ghedangco;
        }
    } else if(maphim == "P2") {
        if (giochieu == "10h") {
            return ghep2_10h == ghedangco;
        } else if (giochieu == "12h") {
            return ghep2_12h == ghedangco;
        } else if (giochieu == "14h") {
            return ghep2_14h == ghedangco;
        }
    } else if (maphim == "P3") {
        if (giochieu == "20h") {
            return ghep3_20h == ghedangco;
        } else if (giochieu == "23h") {
            return ghep3_23h == ghedangco;
        } else if (giochieu == "1h") {
            return ghep3_1h == ghedangco;
        }
    }
    return false;
}
// nhập giờ chiếu
std::string nhapgiochieu(std::string maphim) {
    std::cout << "> Vui lòng chọn giờ chiếu" <<std::endl;
    std::string giochieu;
    while (true){
        std::getline(std::cin,giochieu);
        if (std::cin.fail()) {
            std::cout << " Nhập lỗi" "\n" " Vui lòng nhập lại" << std::endl;
            std::cin.clear();
            donrac();
            continue;
        }
        if (maphim == "P1") {
            if (giochieu == "7h" || giochieu == "14h" || giochieu == "22h") {
                if (kiemtragiochieu(maphim, giochieu)) {
                    std::cout << " Giờ phim bạn chọn đã hết ghế\n" " Vui lòng chọn giờ xem khác" << std::endl;
                } else {
                    return giochieu;
                }
            } else {
                std::cout<< " Không tìm thấy giờ chiếu phù hợp" "\n" " Vui lòng chọn lại" << std::endl;
                continue;
                
            } 
        } else if (maphim == "P2") {
            if (giochieu == "10h" || giochieu == "12h" || giochieu == "14h" ) {
                if (kiemtragiochieu(maphim, giochieu)) {
                    std::cout << " Giờ phim bạn chọn đã hết ghế\n" " Vui lòng chọn giờ xem khác" << std::endl;
                } else {
                    return giochieu;
                }
            } else {
                std::cout << " Không tìm thấy giờ chiếu phù hợp" "\n" " Vui lòng chọn lại" << std::endl;
                continue;
            }
        } else if (maphim == "P3") {
            if (giochieu == "20h" || giochieu == "23h" || giochieu == "1h" ) {
                if (kiemtragiochieu(maphim, giochieu)) {
                    std::cout << " Giờ phim bạn chọn đã hết ghế\n" " Vui lòng chọn giờ xem khác" << std::endl;
                } else {
                    return giochieu;
                }
            } else {
                std::cout << " Không tìm thấy giờ chiếu phù hợp" "\n" " Vui lòng chọn lại" << std::endl;
                continue;
            }
        }
    }
}
// kiểm tra nhập ghế đúng
bool kiemtranhapghe(std::string ghe) {
    for (char &kitu : ghe) {
        if (kitu == ' ') {   
            return true; 
        }
    } 
    std::string fomat = " " + ghe + " ";
    return ghedangco.find(fomat) == std::string::npos;
}
// số lượng ghế đã nhập 
void soluongghe(std::string ghe) {
    std::string timkiem = " " + ghe + " ";
    if (ghedoi.find(timkiem) != std::string::npos) {
        soluongghedoi ++;
    } else if (ghethuong.find(timkiem) != std::string::npos) {
        soluongghethuong ++;
    } else if (ghevip.find(timkiem) != std::string::npos) {
        soluongghevip ++;
    } 
}

// nhập ghế
void nhapghe() {
    std::string ghenhap;
    std::cout << "> Mời bạn chọn ghế" << std::endl;
    while (true) {
        std::getline(std::cin,ghenhap);
        std::string ghe = kituhoa(ghenhap);
        if (std::cin.fail()) {
            std::cout << " Không tìm thấy ghế hợp lệ \n" " Vui lòng chọn lại" << std::endl; 
            std::cin.clear();
            donrac();
            continue;
        } else if (kiemtranhapghe(ghe)) {
            std::cout << " Không tìm thấy ghế trống\n" " Vui lòng chọn lại" << std::endl;
        } else if (!kiemtraghetrong(ghe)) { // hàm từ file chung
            std::cout << " Ghế của bạn đã được chọn rồi\n" " Vui lòng chọn ghế khác" << std::endl;
            continue;
        } else {
            soluongghe(ghe);
            std::string fomat = " "  + ghe + " ";
            if (phim == "P1") {
                if (gio == "7h") {
                    ghep1_7h += fomat;
                } else if (gio == "14h") {
                    ghep1_14h += fomat;
                } else {
                    ghep1_22h += fomat;
                }   
            } else if (phim == "P2") {
                if (gio == "10h") {
                    ghep2_10h += fomat;
                } else if (gio == "12h") {
                    ghep2_12h += fomat;
                } else {
                    ghep2_14h += fomat;
                }  
            } else {
                if (gio == "20h") {
                    ghep3_20h += fomat;
                } else if (gio == "23h") {
                    ghep3_23h += fomat;
                } else {
                    ghep3_1h += fomat;
                }
            }
            if (ghethuong.find(fomat) != std::string::npos) {
                ghedachonthuong += fomat;
            }
            if (ghevip.find(fomat) != std::string::npos) {
                ghedachonvip += fomat;
            }
            if (ghedoi.find(fomat) != std::string::npos) {
                ghedachondoi += fomat;
            }
        } 
        std::cout << " Đã chọn ghế: " << ghe << '\n';
        std::cout << "> Bạn có muốn chọn thêm ghế không y/n" << std::endl;
        char tieptuc = chonthoat();
        if (tieptuc == 'y') {
            std::cout << "> Mời bạn nhập ghế tiếp theo" << std::endl;
            continue;
        } else return;
    }
}
// nhập số lượng đồ ăn
void nhapsoluongdoan(std::string madoan) {
    if (madoan == "F1") {
        if (soluongf1 > 0) {
            soluongf1 += nhapsoluong();
        } else {soluongf1 = nhapsoluong();}
    } else if (madoan == "F2") {
        if (soluongf2 > 0) {
            soluongf2 += nhapsoluong();
        } else {soluongf2 = nhapsoluong();}
    } else if (madoan == "F3") {
        if (soluongf3 > 0) {
            soluongf3 += nhapsoluong();
        } else {soluongf3 = nhapsoluong();}
    } else {
        if (soluongf4 > 0) {
            soluongf4 += nhapsoluong();
        } else {soluongf4 = nhapsoluong();}
    }
    return;
}
// nhập đồ ăn
void chondoan() {
    bool kiemtra = (soluongf1 > 0 || soluongf2 > 0 || soluongf3 > 0 || soluongf4 > 0);
    if (kiemtra) {
        std::cout << "> Bạn đã chọn đồ ăn rồi\n" " Bạn muốn chọn tiếp chứ y/n\n";
        char thoat = chonthoat();
        if (thoat == 'y') {
            std::cout << " Đã chọn tiếp\n";
        } else {
            std::cout << " Đã thoát chọn đồ ăn\n";
            return; }
    }
    indoan();
    std::cout << "> Vui lòng nhập mã đồ ăn bạn muốn mua" << std::endl;
    std::string madoan;
    while (true) {
        std::getline(std::cin,madoan);
        madoan = kituhoa(madoan);
        bool chonhople = ( madoan == "F1" || madoan == "F2" || madoan == "F3" || madoan == "F4");
        if (std::cin.fail() || !chonhople) {
            std::cout << " Không tìm thấy mã đồ ăn phù hợp \n" " Vui lòng chọn lại" <<std::endl;
            std::cin.clear();
            //donrac();
            continue;
        } 
        else {
            //donrac();
            nhapsoluongdoan(madoan);
            std::cout << " Đã chọn đồ ăn: \n";
            if (madoan == "F1") {std::cout << " Bắp mặn\n" " Số lượng: " << soluongf1 << '\n';}
            if (madoan == "F2") {std::cout << " Bắp ngọt\n" " Số lượng: " << soluongf2 << '\n';}
            if (madoan == "F3") {std::cout << " Bắp phô mai\n" " Số lượng: " << soluongf3 << '\n';}
            if (madoan == "F4") {std::cout << " Bắp mix vị\n" " Số lượng: " << soluongf4 << '\n';}
            return;
        }
    }
}
// nhập só lượng đồ uống
void nhapsoluongdouong(std::string madouong) {
    if (madouong == "D1") {
        if (soluongd1 > 0) {
            soluongd1 += nhapsoluong();
        } else {soluongd1 = nhapsoluong();}
    } else if (madouong == "D2") {
        if (soluongd2 > 0) {
            soluongd2 += nhapsoluong();
        } else {soluongd2 = nhapsoluong();}
    } else if (madouong == "D3") {
        if (soluongd3 > 0) {
            soluongd3 += nhapsoluong();
        } else {soluongd3 = nhapsoluong();}
    } else if (madouong == "D4") {
        if (soluongd4 > 0) {
            soluongd4 += nhapsoluong();
        } else {soluongd4 = nhapsoluong();}
    } else {
        if (soluongd5 > 0) {
            soluongd5 += nhapsoluong();
        } else {soluongd5 = nhapsoluong();}
    }
    return;
}
// nhập đồ uống
void chondouong() {
    bool kiemtra = (soluongd1 > 0 || soluongd2 > 0 || soluongd3 > 0 || soluongd4 > 0 || soluongd5 > 0);
    if (kiemtra) {
        std::cout << " Bạn đã chọn đồ uống rồi. \n" "> Bạn muốn chọn tiếp chứ y/n\n";
        char thoat = chonthoat();
        if (thoat == 'y') {
            std::cout << " Đã chọn tiếp\n";
        } else {
            std::cout << " Đã thoát chọn đồ uống \n"; 
            return;
        }
    } 
    indouong();
    std::cout << "> Vui lòng nhập mã đồ uống mà bạn muốn mua" << std::endl;
    std::string madouong;
    while (true) {
        std::getline(std::cin,madouong);
        madouong = kituhoa(madouong);
        bool chonhople = ( madouong == "D1" || madouong == "D2" || madouong == "D3" || madouong == "D4" || madouong == "D5");
        if (std::cin.fail() || !chonhople) {
            std::cout << " Không tìm thấy mã đồ uống phù hợp \n" " Vui lòng chọn lại" << std::endl;
            std::cin.clear();
            //donrac();
            continue;
        } else {
            //donrac();
            nhapsoluongdouong(madouong);
            std::cout << " Đã chọn đồ uống: \n";
            if (madouong == "D1") {std::cout << " Coca\n" " Số lượng: " << soluongd1 << '\n';}
            if (madouong == "D2") {std::cout << " Pepsi\n" " Số lượng: " << soluongd2 << '\n';}
            if (madouong == "D3") {std::cout << " Cafe\n" " Số lượng: " << soluongd3 << '\n';} 
            if (madouong == "D4") {std::cout << " Voka\n" " Số lượng: " << soluongd4 << '\n';}
            if (madouong == "D5") {std::cout << " Trà sữa\n" " Số lượng: " << soluongd5 << '\n';}
            return;
        }
    }
}
// nhập số lượng combo
void nhapsoluongcombo(std::string macombo) {
    if (macombo == "C1") {
        if (soluongc1 > 0) {
            soluongc1 += nhapsoluong();
        } else {soluongc1 = nhapsoluong();}
    } else if (macombo == "C2") {
        if (soluongc2 > 0) {
            soluongc2 += nhapsoluong();
        } else {soluongc2 = nhapsoluong();}
    } else if (macombo == "C3") {
        if (soluongc3 > 0) {
            soluongc3 += nhapsoluong();
        } else {soluongc3 = nhapsoluong();}
    } else {
        if (soluongc4 > 0) {
            soluongc4 += nhapsoluong();
        } else {soluongc4 = nhapsoluong();}
    }
    return;
}
// nhập combo
void choncombo() {
    bool kiemtra = (soluongc1 > 0 || soluongc2 > 0 || soluongc3 > 0 || soluongc4 > 0);
    if (kiemtra) {
        std::cout << "> Bạn đã chọn combo rồi\n" " Bạn muốn chọn tiếp chứ y/n\n";
        char thoat = chonthoat();
        if (thoat == 'y') {
            std::cout << " Đã tiếp tục chọn\n";
        } else {
            std::cout << " Đã thoát\n";
            return;
        }
    }
    incombo();
    std::cout << "> Vui lòng chọn mã combo mà bạn muốn mua" << std::endl;
    std::string macombo;
    while (true) {
        std::getline(std::cin,macombo);  
        macombo = kituhoa(macombo);
        bool chonhople = ( macombo == "C1" || macombo == "C2" || macombo == "C3" || macombo == "C4");
        if (std::cin.fail() || !chonhople) {
            std::cout << " Không tìm thấy mã combo phù hợp \n" " Vui lòng chọn lại" << std::endl;
            std::cin.clear();
            //donrac();
            continue;
        } else {
            nhapsoluongcombo(macombo);
            std::cout << " Combo bạn đã chọn là: \n";
            if (macombo == "C1") {std::cout << " Combo 1\n" " Số lượng: " << soluongc1 << '\n';}
            if (macombo == "C2") {std::cout << " Combo 2\n" " Số lượng: " << soluongc2 << '\n';}
            if (macombo == "C3") {std::cout << " Combo 3\n" " Số lượng: " << soluongc3 << '\n';}
            if (macombo == "C4") {std::cout << " Combo 4\n" " Số lượng: " << soluongc4 << '\n';}
            return;
        }
    }
}
// nhâp thông tin
void nhap() {
    ten = nhapten();
    std::cout << " Đã nhập tên: " << ten << '\n';
    phim = nhapphim();
    std::cout << " Đã nhập mã phim: \n";
    if (phim == "P1") {std::cout << " Taylor Swift Era\n";}
    else if (phim == "P2") {std::cout << " Avengers\n";}
    else if (phim == "P3") {std::cout << " Spiderman\n";}
    gio = nhapgiochieu(phim);
    std::cout << " Đã nhập giờ chiếu: " << gio << '\n';
    nhapghe();
    // Chọn đồ dùng
    std::cout << "> Bạn muốn chọn đồ dùng chứ (y/n)" << std::endl;
    char chon = chonthoat();
    if (chon == 'y') {
        int chucnang;
        while (true) {
            std::cout << "> Vui chọn chức năng (1: đồ ăn, 2: đồ uống, 3: combo, 4: thoát)" << std::endl;
            std::cin >> chucnang;
            bool chondung = (chucnang == 1 || chucnang == 2 || chucnang == 3 || chucnang == 4);
            if (std::cin.fail() || !chondung) {
                std::cout << " Chọn lỗi\n" " Vui lòng chọn lại (chỉ chọn 1,2,3,4)" << std::endl;
                std::cin.clear();
                //donrac();
                continue;
            } 
            switch (chucnang) {
                case 1: {
                    donrac();
                    chondoan();
                    continue;
                }

                case 2: {
                    donrac();
                    chondouong();
                    continue;
                }

                case 3: {
                    donrac();
                    choncombo();
                    continue;
                }

                case 4: {
                    std::cout << "> Bạn muốn thoát chứ (y/n)\n";
                    char thoat = chonthoat();
                    if (thoat == 'y') {
                        std::cout << " Đã thoát" << std::endl;
                        return;
                    } else {
                        continue;
                    } 
                }
                
                default: {
                    std::cout << " Lỗi nhập phím" << std::endl;
                    continue;
                }
            }
        }
    } else {
        std::cout << " Đã thoát" << std::endl;
        return;
    }
}
