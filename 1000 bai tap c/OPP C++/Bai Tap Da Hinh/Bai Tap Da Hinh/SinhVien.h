#pragma once
#include "Nguoi.h"
class SinhVien:public Nguoi
{
private:
	float DiemTB;
public:
	float get1()
	{
		return DiemTB;
	}
	void Nhap();
	void Xuat();
	SinhVien();
	~SinhVien();
};

