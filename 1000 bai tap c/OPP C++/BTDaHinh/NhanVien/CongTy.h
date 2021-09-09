#pragma once
#include "NhanVien.h"
#include "NVVanPhong.h"
#include "NVSanXuat.h"
#include "NVQuanLy.h"
#include<vector>
class CongTy
{
private:
	vector<NhanVien*>DSNhanVien;
public:
	void Nhap();
	void Xuat();
	float TongLuong();
	void TimKiemTen(string);
	CongTy();
	~CongTy();
};

