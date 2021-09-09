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
			NVQuanLy ql;
			ql.Nhap();
			NhanVienQuanLy.push_back(ql);
		}
		else if (LuaChon == 2)
		{
			NVSanXuat sx;
			sx.Nhap();
			NhanVienSanXuat.push_back(sx);
		}
		else if (LuaChon == 3)
		{
			NVVanPhong vp;
			vp.Nhap();
			NhanVienVanPhong.push_back(vp);
		}
	} while (LuaChon!=4);
}
void CongTy::Xuat()
{
	cout << "==========Danh sach nhan vien quan ly==========" << endl;
	for (int i = 0; i < NhanVienQuanLy.size(); i++)
	{
		NhanVienQuanLy[i].Xuat();
		cout << endl;
	}
	cout << "==========Danh sach nhan vien san xuat==========" << endl;
	for (int i = 0; i < NhanVienSanXuat.size(); i++)
	{
		NhanVienSanXuat[i].Xuat();
		cout << endl;
	}
	cout << "==========Danh sach nhan vien van phong==========" << endl;
	for (int i = 0; i < NhanVienVanPhong.size(); i++)
	{
		NhanVienVanPhong[i].Xuat();
		cout << endl;
	}
}
float CongTy::TongLuong()
{
	float luong=0;
	for (int i = 0; i < NhanVienQuanLy.size(); i++)
	{
		luong+=NhanVienQuanLy[i].TinhLuong();
	}
	for (int i = 0; i < NhanVienSanXuat.size(); i++)
	{
		luong+=NhanVienSanXuat[i].TinhLuong();
	}
	for (int i = 0; i < NhanVienVanPhong.size(); i++)
	{
		luong+=NhanVienVanPhong[i].TinhLuong();
	}
	return luong;
}
void CongTy::TimKiemTen(string name)
{
	for (int i = 0; i < NhanVienQuanLy.size(); i++)
	{
		if (NhanVienQuanLy[i].getname() == name){
			NhanVienQuanLy[i].Xuat();
			cout << endl;
		}
	}
	for (int i = 0; i < NhanVienSanXuat.size(); i++)
	{
		if (NhanVienSanXuat[i].getname() == name){
			NhanVienSanXuat[i].Xuat();
			cout << endl;
		}
	}
	for (int i = 0; i < NhanVienVanPhong.size(); i++)
	{
		if (NhanVienVanPhong[i].getname() == name){
			NhanVienVanPhong[i].Xuat();
			cout << endl;
		}
	}
}
CongTy::CongTy()
{
}


CongTy::~CongTy()
{
}
