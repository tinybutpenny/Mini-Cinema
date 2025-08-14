cmake_minimum_required(VERSION 3.10)
# Đặt tên cho project là "rapphim"
project(rapphim)

# Thiết lập 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Thêm các thư mục chứa file .h 
include_directories(
    src/chung              # Thư mục chứa thư viện chung và hàm dùng chung
    src/nhap              # Thư mục xử lý nhập
    src/xuat              # Thư mục xử lý xuất
)

# Tạo file chạy "rapphim" từ các file mã nguồn 
add_executable(rapphim
    src/main.cpp
    src/chung/chung.cpp
    src/nhap/nhap.cpp
    src/xuat/xuat.cpp
)
