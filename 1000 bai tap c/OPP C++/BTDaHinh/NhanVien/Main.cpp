#pragma once
#include "CongTy.h"
int main()
{
	CongTy ct;
	ct.Nhap();
	ct.Xuat();
	cout << "\nTong Luong=" <<( size_t)ct.TongLuong();
	cout << "\nDanh sach nhan vien co ten:\n";
	ct.TimKiemTen("khoa");
	system("pause");
}