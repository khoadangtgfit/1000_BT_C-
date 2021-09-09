#include "NVSanXuat.h"

void NVSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "\nNhap so san pham:";
	cin >> SoSanPham;
}
void NVSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "\nSo San Pham:" << SoSanPham;
}
float NVSanXuat::TinhLuong()
{
	return SoSanPham * 2000 + LuongCoban;
}
NVSanXuat::NVSanXuat()
{
}


NVSanXuat::~NVSanXuat()
{
}
