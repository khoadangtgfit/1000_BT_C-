#include "DocGia.h"

void CDocGia::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ho ten:";
	getline(cin, HoTen);
	cout << "\nNhap ngay lam the:";
	cin >> NgayLamThe;
	cout << "\nNhap so thang hieu luc:";
	cin >> SoThangHieuLuc;
}
void CDocGia::Xuat()
{
	cout << "\nHo ten:" << HoTen;
	cout << "\nNgay lam the:" << NgayLamThe;
	cout << "\nSo thang co hieu luc:" << SoThangHieuLuc;
}
CDocGia::CDocGia()
{
}
CDocGia::~CDocGia()
{
}
