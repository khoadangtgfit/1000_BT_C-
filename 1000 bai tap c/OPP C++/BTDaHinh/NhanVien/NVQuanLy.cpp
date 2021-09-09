#include "NVQuanLy.h"

void NVQuanLy::Nhap()
{
	NhanVien::Nhap();
	cout << "\nNhap he so:";
	cin >> HeSo;
	cout << "\nNhap tien thuong:";
	cin >> Thuong;
}
void NVQuanLy::Xuat()
{
	NhanVien::Xuat();
	cout << "\nHe So:" << HeSo;
	cout << "\nTien Thuong: " << Thuong;
}
float NVQuanLy::TinhLuong()
{
	return LuongCoban*HeSo + Thuong;
}
NVQuanLy::NVQuanLy()
{
}


NVQuanLy::~NVQuanLy()
{
}
