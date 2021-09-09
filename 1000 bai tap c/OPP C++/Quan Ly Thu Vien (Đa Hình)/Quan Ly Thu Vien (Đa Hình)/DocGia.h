#pragma once
#include<string>
#include<iostream>
using namespace std;
class CDocGia
{
protected:
	string HoTen;
	string NgayLamThe;
	int SoThangHieuLuc;
	bool KT;
public:
	bool getKT()
	{
		return KT;
	}
	void setKT(bool kt)
	{
		KT = kt;
	}
	virtual void Nhap();
	virtual void Xuat();
	CDocGia();
	~CDocGia();
};

