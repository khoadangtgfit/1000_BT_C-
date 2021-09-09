#include<iostream>
#include<string>
using namespace std;
#pragma once
class NhanVien
{
protected:
    string HoTen,NgaySinh;
    float LuongCoban,Luong;
public:
	string getname()
	{
		return HoTen;
	}
    void Nhap();
    void Xuat();
    NhanVien();
    ~NhanVien();
};
