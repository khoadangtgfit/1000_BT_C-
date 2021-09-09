#include "ThuVien.h"

void ThuVien::Nhap()
{
	int luachon;
	do
	{
		cout << "================MENU================" << endl;
		cout << "1.Nhap thong tin cua doc gia tre em" << endl;
		cout << "2.Nhap thong tin cua doc gia nguoi lon" << endl;
		cout << "3.Thoat" << endl;
		do
		{
			cin >> luachon;
			if (luachon < 1 || luachon>3)
				cout << "\nLua chon sai!moi chon lai!";

		} while (luachon < 1 || luachon>3);
		if (luachon == 1)
		{
			CDocGia *temp = new CDocGiaTreEm;
			temp->Nhap();
			temp->setKT(true);
			DocGia.push_back(temp);
		}
		else if (luachon == 2)
		{
			CDocGia *temp = new CDocGiaNguoiLon;
			temp->Nhap();
			temp->setKT(false);
			DocGia.push_back(temp);
		}
	} while (luachon!=3);
}
void ThuVien::Xuat()
{
	for (int i = 0; i < DocGia.size(); i++)
	{
		if (DocGia[i]->getKT() == true)
		{
			cout << "Doc Gia Tre Em:";
			DocGia[i]->Xuat();
			cout << endl;
		}
		else
		{
			cout << "Doc Gia Nguoi lon:";
			DocGia[i]->Xuat();
			cout << endl;
		}
	}
}
ThuVien::ThuVien()
{
}


ThuVien::~ThuVien()
{
}
