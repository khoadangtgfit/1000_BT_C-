#pragma once
#include "GiangVien.h"
#include "SinhVien.h"
#include<vector>
class NgheNghiep
{
private:
	vector<Nguoi*>DSNguoi;
public:
	void Nhap();
	void Xuat();
	void XuatGVSVThuong();
	NgheNghiep();
	~NgheNghiep();
};

