#pragma once
#include"NhanVien.h"
class NVQuanLy:public NhanVien
{
private:
	float HeSo, Thuong;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	NVQuanLy();
	~NVQuanLy();
};

