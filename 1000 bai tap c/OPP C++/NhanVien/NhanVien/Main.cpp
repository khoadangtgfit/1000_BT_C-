#pragma once
#include "CongTy.h"
int main()
{
	CongTy ct;
	ct.Nhap();
	ct.Xuat();
	cout << "Tong Luong=" << (size_t)ct.TongLuong();
	cout << "Dang sach co ten:" << endl;
	ct.TimKiemTen("dang phuoc khoa");
	system("pause");
}