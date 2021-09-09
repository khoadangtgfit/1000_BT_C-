#pragma once
#include<string>
#include<iostream>
#include "DocGia.h"
using namespace std;
class CDocGiaNguoiLon:public CDocGia
{
private:
	string CMND;
public:
	void Nhap();
	void Xuat();
	int TinhTienLamThe();
	CDocGiaNguoiLon();
	~CDocGiaNguoiLon();
};

