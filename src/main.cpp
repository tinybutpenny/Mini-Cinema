#include "nhap.h"
#include "chung.h"
#include "xuat.h"

int main() {
    char tieptuc;
    do {
        inmenu();
        nhap();
        inhoadon();
        std::cout << " Bạn có muốn đặt tiếp không (y/n)" << std::endl;
        reset();
        tieptuc = chonthoat();
    } while (tieptuc == 'y');
    std::cout << " Tạm biệt" "\n" 
    " Hẹn gặp lại" << std::endl;
    return 0;
}