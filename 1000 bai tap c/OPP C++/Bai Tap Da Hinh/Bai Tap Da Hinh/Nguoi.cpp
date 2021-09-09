#include "Nguoi.h"

void Nguoi::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ho ten:";
	getline(cin, Hoten);
	fflush(stdin);
	cout << "\nNhap nam sinh:";
	getline(cin, NamSinh);
}
void Nguoi::Xuat()
{
	cout << "Ho Ten = " << Hoten << endl;
	cout << "Nam sinh = " << NamSinh << endl;
}
Nguoi::Nguoi()
{
}

Nguoi::~Nguoi()
{
}
