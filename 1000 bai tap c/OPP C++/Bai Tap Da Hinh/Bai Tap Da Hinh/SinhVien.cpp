#include "SinhVien.h"

void SinhVien::Nhap()
{
	Nguoi::Nhap();
	cout << "\nNhap diem trung binh:";
	cin >> DiemTB;
}
void SinhVien::Xuat()
{
	Nguoi::Xuat();
	cout << "Diem Trung Binh = " << DiemTB;
}
SinhVien::SinhVien()
{
}


SinhVien::~SinhVien()
{
}
