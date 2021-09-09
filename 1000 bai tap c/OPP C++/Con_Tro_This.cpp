#include<iostream>
using namespace std;
class PhanSo
{
private:
	int TuSo,MauSo;
public:
	PhanSo RutGon();
	void Nhap();
	void Xuat();
	// PhanSo();
	// ~PhanSo();
};
void PhanSo::Nhap()
{
	cout<<"\nNhap tu so:";
	cin>>this->TuSo;
	cout<<"\nNhap mau so:";
	cin>>this->MauSo;
}
void PhanSo::Xuat()
{
    cout<<this->TuSo<<"/"<<this->MauSo;
}
PhanSo PhanSo::RutGon()
{
    int a,b;
    a=abs(this->TuSo);
    b=abs(this->MauSo);
    while(a!=b)
    {
        if(a>b) a-=b;
        else b-=a;
    }
    this->TuSo/=a;
    this->MauSo/=b;
    return *this;
} 
int main()
{
    PhanSo ps;
    ps.Nhap();
    cout<<"\nPhan so ban vua nhap la:";
    ps.Xuat();
    ps.RutGon();
    cout<<"\nPhan so ban vua rut gon la:";
    ps.Xuat();
}