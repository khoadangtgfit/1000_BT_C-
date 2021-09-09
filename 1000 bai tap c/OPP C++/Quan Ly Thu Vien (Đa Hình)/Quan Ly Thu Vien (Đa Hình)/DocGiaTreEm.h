#include "DocGia.h"
#pragma once
#include<iostream>
#include<string>
using namespace std;
class CDocGiaTreEm:public CDocGia
{
private:
	string NguoiDaiDien;
public:
	void Nhap();
	void Xuat();
	int TinhTienLamThe();
	CDocGiaTreEm();
	~CDocGiaTreEm();
};

