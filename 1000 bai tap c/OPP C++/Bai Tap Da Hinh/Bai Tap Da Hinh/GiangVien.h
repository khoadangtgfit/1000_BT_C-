#pragma once
#include "Nguoi.h"
class GiangVien:public Nguoi
{
private:
	int SoGioDay;
public:
	int get2()
	{
		return SoGioDay;
	}
	void Nhap();
	void Xuat();
	GiangVien();
	~GiangVien();
};

