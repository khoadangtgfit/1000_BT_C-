#pragma once
#include"DocGiaNguoiLon.h"
#include"DocGiaTreEm.h"
#include<vector>
class ThuVien
{
private:
	vector<CDocGia*>DocGia;
public:
	void Nhap();
	void Xuat();
	ThuVien();
	~ThuVien();
};

