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
    virtual void Nhap();
    virtual void Xuat();
	virtual float TinhLuong() = 0;
    NhanVien();
    ~NhanVien();
};
