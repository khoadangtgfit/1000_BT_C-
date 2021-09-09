#include "GiangVien.h"

void GiangVien::Nhap()
{
	Nguoi::Nhap();
	cout << "\nNhap so gio day:";
	cin >> SoGioDay;
}
void GiangVien::Xuat()
{
	Nguoi::Xuat();
	cout << "\nSo gio day = " << SoGioDay;
}
GiangVien::GiangVien()
{
}


GiangVien::~GiangVien()
{
}
