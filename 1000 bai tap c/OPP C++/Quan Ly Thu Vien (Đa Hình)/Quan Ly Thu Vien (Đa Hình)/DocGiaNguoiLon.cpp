#include "DocGiaNguoiLon.h"

void CDocGiaNguoiLon::Nhap()
{
	CDocGia::Nhap();
	cout << "\nNhap vao chung minh nhan dan:";
	cin >> CMND;
}
void CDocGiaNguoiLon::Xuat()
{
	CDocGia::Xuat();
	cout << "\nCMND:" << CMND;
}
CDocGiaNguoiLon::CDocGiaNguoiLon()
{
}


CDocGiaNguoiLon::~CDocGiaNguoiLon()
{
}
