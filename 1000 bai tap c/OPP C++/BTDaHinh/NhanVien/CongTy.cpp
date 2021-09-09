#include "CongTy.h"

void CongTy::Nhap()
{
	int LuaChon;
	do
	{
		cout << "============Menu==========" << endl;
		cout << "1.Nhap nhan vien quan ly" << endl;
		cout << "2.Nhap nhan vien san xuat" << endl;
		cout << "3.Nhap nhan vien van phong" << endl;
		cout << "4.Thoat" << endl;
		do
		{
			cin >> LuaChon;
			if (LuaChon < 1 || LuaChon>4)
			{
				cout << "\nLua chon sai! moi chon lai!";
			}
		} while (LuaChon < 1 || LuaChon > 4);
		if (LuaChon == 1)
		{
			cout << "\nBan dang nhap nhan vien quan ly:" << endl;
			NhanVien *temp = new NVQuanLy;
			temp->Nhap();
			DSNhanVien.push_back(temp);

		}
		else if (LuaChon == 2)
		{
			cout << "\nBan dang nhap nhan vien san xuat:" << endl;
			NhanVien *temp = new NVSanXuat;
			temp->Nhap();
			DSNhanVien.push_back(temp);
		}
		else if (LuaChon == 3)
		{
			cout << "\nBan dang nhap nhan vien van phong:" << endl;
			NhanVien *temp = new NVVanPhong;
			temp->Nhap();
			DSNhanVien.push_back(temp);
		}
	} while (LuaChon!=4);
}
void CongTy::Xuat()
{
	for (int i = 0; i < DSNhanVien.size(); i++)
	{
		DSNhanVien[i]->Xuat();
	}
}
float CongTy::TongLuong()
{
	float luong = 0;
	for (int i = 0; i < DSNhanVien.size(); i++)
	{
		luong+=DSNhanVien[i]->TinhLuong();
	}
	return luong;
}
void CongTy::TimKiemTen(string name)
{
	bool flag = false;
	for (int i = 0; i < DSNhanVien.size(); i++)
	{
		if (DSNhanVien[i]->getname() == name)
		{
			flag = true;
			DSNhanVien[i]->Xuat();
		}
	}
	if (flag == false)
		cout << "Khong co nhan vien co nao co ten " << name;
}
CongTy::CongTy()
{
}


CongTy::~CongTy()
{
}
