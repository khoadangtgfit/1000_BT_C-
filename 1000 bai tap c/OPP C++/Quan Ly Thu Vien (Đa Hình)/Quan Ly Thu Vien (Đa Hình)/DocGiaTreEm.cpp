#include "DocGiaTreEm.h"
void CDocGiaTreEm::Nhap()
{
	CDocGia::Nhap();
	fflush(stdin);
	cout << "\nNhap ten nguoi dai dien:";
	getline(cin, NguoiDaiDien);
}
void CDocGiaTreEm::Xuat()
{
	CDocGia::Xuat();
	cout << "\nNguoi dai dien:" << NguoiDaiDien;
}
CDocGiaTreEm::CDocGiaTreEm()
{
}


CDocGiaTreEm::~CDocGiaTreEm()
{
}
