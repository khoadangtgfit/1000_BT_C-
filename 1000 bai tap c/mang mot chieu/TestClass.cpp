#include<iostream>
using namespace std;
class PhanSo
{
private:
	int TuSo,MauSo;
public:
	void RutGon();
	void Nhap();
	void Xuat();
	PhanSo();
	~PhanSo();
};
void PhanSo::Nhap()
{
	cout<<"\nNhap tu so:";
	cin>>this->TuSo;
	cout<<"\nNhap mau so:";
	cin>>this->MauSo;

}