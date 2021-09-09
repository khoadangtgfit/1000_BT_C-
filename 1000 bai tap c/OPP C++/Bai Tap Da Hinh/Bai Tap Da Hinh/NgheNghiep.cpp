#include "NgheNghiep.h"

void NgheNghiep::Nhap()
{
	int LuaChon;
	do
	{
		cout << "============MENU============" << endl;
		cout << "1.Nhap Thong Tin Sinh Vien" << endl;
		cout << "2.Nhap Thong Tin Giang Vien" << endl;
		cout << "3.Thoat" << endl;
		do
		{
			cin >> LuaChon;
			if (LuaChon < 1 || LuaChon>3)
				cout << "\nNhap sai moi nhap lai!" << endl;
		} while (LuaChon < 1 || LuaChon>3);
		if (LuaChon == 1)
		{
			Nguoi *temp = new SinhVien;
			temp->Nhap();
			DSNguoi.push_back(temp);
			temp->SETTER(true);
		}
		else if (LuaChon == 2)
		{
			Nguoi *temp = new GiangVien;
			temp->Nhap();
			DSNguoi.push_back(temp);
			temp->SETTER(false);
		}
	} while (LuaChon!=3);
}
void NgheNghiep::Xuat()
{
	for (int i = 0; i < DSNguoi.size(); i++)
	{
		if (DSNguoi[i]->GETTER() == true){
			cout << "SinhVien:" << endl;
			DSNguoi[i]->Xuat();
			cout << "\n";
		}
		else
		{
			cout << "Giang Vien:" << endl;
			DSNguoi[i]->Xuat();
			cout << "\n";
		}
	}
}
void NgheNghiep::XuatGVSVThuong()
{
	for (int i = 0; i < DSNguoi.size(); i++)
	{
		if (DSNguoi[i]->GETTER() == true && DSNguoi[i]->get1()>7){
			DSNguoi[i]->Xuat();
			cout << endl;
		}
		else if (DSNguoi[i]->GETTER() == false && DSNguoi[i]->get2()>100){
			DSNguoi[i]->Xuat();
			cout << endl;
		}
	}
}
NgheNghiep::NgheNghiep()
{
}


NgheNghiep::~NgheNghiep()
{
}
