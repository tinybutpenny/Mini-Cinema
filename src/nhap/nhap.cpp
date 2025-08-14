#include "nhap.h"
// nhập số lượng 
int nhapsoluong(){
    std::cout << " Nhập số lượng mà bạn muốn mua" << std::endl;
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
    std::cout << " Vui lòng nhập tên" << std::endl;
    std::string nhapten;
    while (true) {
        std::getline(std::cin,nhapten);
        if(std::cin.fail()) {
            std::cout << " Nhập lỗi" "\n" " Vui lòng nhập lại" << std::endl;
            std::cin.clear();
            donrac();
            continue;
        } else {
            donrac();
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
    std::cout << " Vui lòng nhập mã phim mà bạn muốn xem" << std::endl;
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
            donrac();
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
    std::cout << " Vui lòng chọn giờ chiếu" <<std::endl;
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
                    donrac();
                    return giochieu;
                }
            } else {
                std::cout<< " Không tìm thấy giờ chiếu phù hợp" "\n" " Vui lòng chọn lại" << std::endl;
                donrac();
                continue;
                
            } 
        } else if (maphim == "P2") {
            if (giochieu == "10h" || giochieu == "12h" || giochieu == "14h" ) {
                if (kiemtragiochieu(maphim, giochieu)) {
                    std::cout << " Giờ phim bạn chọn đã hết ghế\n" " Vui lòng chọn giờ xem khác" << std::endl;
                } else {
                    donrac();
                    return giochieu;
                }
            } else {
                std::cout << " Không tìm thấy giờ chiếu phù hợp" "\n" " Vui lòng chọn lại" << std::endl;
                donrac();
                continue;
            }
        } else if (maphim == "P3") {
            if (giochieu == "20h" || giochieu == "23h" || giochieu == "1h" ) {
                if (kiemtragiochieu(maphim, giochieu)) {
                    std::cout << " Giờ phim bạn chọn đã hết ghế\n" " Vui lòng chọn giờ xem khác" << std::endl;
                } else {
                    donrac();
                    return giochieu;
                }
            } else {
                std::cout << " Không tìm thấy giờ chiếu phù hợp" "\n" " Vui lòng chọn lại" << std::endl;
                donrac();
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
    std::string timkiem = " " + ghe + " ";
    if (ghedoi.find(timkiem) != std::string::npos) {
        soluongghedoi ++;
        return false;
    } else if (ghethuong.find(timkiem) != std::string::npos) {
        soluongghethuong ++;
        return false;
    } else if (ghevip.find(timkiem) != std::string::npos) {
        soluongghevip ++;
        return false;
    } else return true;
}
// nhập ghế
void nhapghe() {
    std::string ghe;
    std::cout << " Mời bạn chọn ghế" << std::endl;
    while (true) {
        std::getline(std::cin,ghe);
        if (kiemtranhapghe(ghe) || std::cin.fail()) {
            std::cout << " Không tìm thấy ghế hợp lê\n" " Vui lòng chọn lại" << std::endl; 
            std::cin.clear();
            donrac();
            continue;
        } else if (kiemtraghetrong(ghe)) { // hàm từ file chung
            std::cout << " Ghế của bạn đã được chọn rồi\n" " Vui lòng chọn ghế khác" << std::endl;
            continue;
        } else {
            if (phim == "P1") {
                if (gio == "7h") {
                    ghep1_7h += " " + ghe + " ";
                } else if (gio == "14h") {
                    ghep1_14h += " " + ghe + " ";
                } else {
                    ghep1_22h += " " + ghe + " ";
                }   
            } else if (phim == "P2") {
                if (gio == "10h") {
                    ghep2_10h += " " + ghe + " ";
                } else if (gio == "12h") {
                    ghep2_12h += " " + ghe + " ";
                } else {
                    ghep2_14h += " " + ghe + " ";
                }  
            } else {
                if (gio == "20h") {
                    ghep3_20h += " " + ghe + " ";
                } else if (gio == "23h") {
                    ghep3_23h += " " + ghe + " ";
                } else {
                    ghep3_1h += " " + ghe + " ";
                }
            }
        }
        std::cout << " Bạn có muốn chọn thêm ghế không y/n" << std::endl;
        char tieptuc = chonthoat();
        if (tieptuc == 'y') {
            std::cout << " Mời bạn nhập ghế tiếp theo" << std::endl;
            continue;
        } else return;
    }
}
// nhập số lượng đồ ăn
void nhapsoluongdoan(std::string madoan) {
    if (madoan == "F1") {
        soluongf1 = nhapsoluong();
    } else if (madoan == "F2") {
        soluongf2 = nhapsoluong();
    } else if (madoan == "F3") {
        soluongf3 = nhapsoluong();
    } else {
        soluongf4 = nhapsoluong();
    }
    return;
}
// nhập đồ ăn
void chondoan() {
    indoan();
    std::cout << " Vui lòng nhập mã đồ ăn bạn muốn mua" << std::endl;
    std::string madoan;
    while (true) {
        std::getline(std::cin,madoan);
        madoan = kituhoa(madoan);
        bool chonhople = ( madoan == "F1" || madoan == "F2" || madoan == "F3" || madoan == "F4");
        if (std::cin.fail() || !chonhople) {
            std::cout << " Không tìm thấy mã đồ ăn phù hợp \n" " Vui lòng chọn lại" <<std::endl;
            std::cin.clear();
            donrac();
            continue;
        } 
        else {
            donrac();
            nhapsoluongdoan(madoan);
            return;
        }
    }
}
// nhập só lượng đồ uống
void nhapsoluongdouong(std::string madouong) {
    if (madouong == "D1") {
        soluongd1 = nhapsoluong();
    } else if (madouong == "D2") {
        soluongd2 = nhapsoluong();
    } else if (madouong == "D3") {
        soluongd3 = nhapsoluong();
    } else if (madouong == "D4") {
        soluongd4 = nhapsoluong();
    } else {
        soluongd5 = nhapsoluong();
    }
    return;
}
// nhập đồ uống
void chondouong() {
    indouong();
    std::cout << " Vui lòng nhập mã đồ uống mà bạn muốn mua" << std::endl;
    std::string madouong;
    while (true) {
        std::getline(std::cin,madouong);
        madouong = kituhoa(madouong);
        bool chonhople = ( madouong == "D1" || madouong == "D2" || madouong == "D3" || madouong == "D4" || madouong == "D5");
        if (std::cin.fail() || !chonhople) {
            std::cout << " Không tìm thấy mã đồ uống phù hợp \n" " Vui lòng chọn lại" << std::endl;
            std::cin.clear();
            donrac();
            continue;
        } else {
            donrac();
            nhapsoluongdouong(madouong);
            return;
        }
    }
}
// nhập số lượng combo
void nhapsoluongcombo(std::string macombo) {
    if (macombo == "C1") {
        soluongc1 = nhapsoluong();
    } else if (macombo == "C2") {
        soluongc2 = nhapsoluong();
    } else if (macombo == "C3") {
        soluongc3 = nhapsoluong();
    } else {
        soluongc4 = nhapsoluong();
    }
    return;
}
// nhập combo
void choncombo() {
    incombo();
    std::cout << " Vui lòng chọn mã combo mà bạn muốn mua" << std::endl;
    std::string macombo;
    while (true) {
        std::getline(std::cin,macombo);  
        macombo = kituhoa(macombo);
        bool chonhople = ( macombo == "C1" || macombo == "C2" || macombo == "C3" || macombo == "C4");
        if (std::cin.fail() || !chonhople) {
            std::cout << " Không tìm thấy mã combo phù hợp \n" " Vui lòng chọn lại" << std::endl;
            std::cin.clear();
            donrac();
            continue;
        } else {
            donrac();
            nhapsoluongcombo(macombo);
            return;
        }
    }
}
// nhâp thông tin
void nhap() {
    ten = nhapten();
    phim = nhapphim();
    gio = nhapgiochieu(phim);
    nhapghe();

    // Chọn đồ dùng
    std::cout << " Bạn muốn chọn đồ dùng chứ (y/n)" << std::endl;
    char chon = chonthoat();
    if (chon == 'y') {
        int chucnang;
        while (true) {
            std::cout << " Vui chọn chức năng (1: đồ ăn, 2: đồ uống, 3: combo, 4: thoát)" << std::endl;
            std::cin >> chucnang;
            bool chondung = (chucnang == 1 || chucnang == 2 || chucnang == 3 || chucnang == 4);
            if (std::cin.fail() || !chondung) {
                std::cout << " Chọn lỗi\n" " Vui lòng chọn lại (chỉ chọn 1,2,3,4)" << std::endl;
                std::cin.clear();
                donrac();
                continue;
            } 
            switch (chucnang) {
                case 1: {
                    chondoan();
                    continue;
                }

                case 2: {
                    chondouong();
                    continue;
                }

                case 3: {
                    choncombo();
                    continue;
                }

                case 4: {
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
