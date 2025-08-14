#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>
#define Reset "\033[0m"
#define Do "\033[91m"
#define Xanhduong "\033[94m"
#define Tim "\033[95m"
#define Vang "\033[93m"
#define Xanhla "\033[92m"
#define Cyan "\033[96m"
#define xanhla "\033[32m"

extern std::string ten; 
extern std::string phim;
extern std::string ghedangco;
extern std::string ghedachon;
extern std::string ghedoi;
extern std::string ghethuong;
extern std::string ghevip;
extern int soluongghevip;
extern int soluongghedoi;
extern int soluongghethuong;
extern std::string ghep1_7h;
extern std::string ghep1_14h;
extern std::string ghep1_22h;
extern std::string ghep2_10h;
extern std::string ghep2_12h;
extern std::string ghep2_14h;
extern std::string ghep3_20h;
extern std::string ghep3_23h;
extern std::string ghep3_1h;
extern std::string gio;
extern int soluongf1, soluongf2, soluongf3, soluongf4;
extern int soluongd1, soluongd2, soluongd3, soluongd4, soluongd5;
extern int soluongc1, soluongc2, soluongc3, soluongc4;
void donrac();
std::string kituhoa(std::string a);
char chonthoat();
bool kiemtraghetrong(std::string ghe);
int demghe(std::string a);
void inphim();
std::string fomatghedon(std::string ghe);
std::string fomatghedoi(std::string ghe);
void inrap();
void indoan();
void indouong();
void incombo();