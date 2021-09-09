#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
typedef struct NgaySinh
{
	int ngay;
	int thang;
	int nam;
}DATE;
typedef struct SINHVIEN
{
	char mssv[11];
	char hoten[30];
	char lop[10];
	char sdt[11];
	NgaySinh khoa;
}SV;
void NhapNgaySinh(DATE &khoa)
{
	cout<<"\nNhap ngay sinh:"<<endl;
	cout<<"-Nhap ngay:"<<endl;
	cin>>khoa.ngay;
	cout<<"-Nhap thang:"<<endl;
	cin>>khoa.thang;
	cout<<"-Nhap nam:"<<endl;
	cin>>khoa.nam;
}
void XuatNgaySinh(DATE khoa,ofstream &f)
{
	f<<"Ngay sinh:"<<khoa.ngay<<"/"<<khoa.thang<<"/"<<khoa.nam<<endl;
}
void Nhap(SV &teo)
{
	cout<<"Nhap ma so sinh vien vao:"<<endl;
	cin>>teo.mssv;
	fflush(stdin);
	NhapNgaySinh(teo.khoa);
	fflush(stdin);
	cout<<"Nhap ho ten sinh vien vao:"<<endl;
	gets(teo.hoten);
	fflush(stdin);
	cout<<"Nhap lop vao:"<<endl;
	cin>>(teo.lop);
	fflush(stdin);
	cout<<"Nhap so dien thoai sinh vien vao:"<<endl;
	cin>>(teo.sdt);
}
void NhapDS(SV ds[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin sinh vien thu:"<<i+1<<endl;
		Nhap(ds[i]);
	}
}
void Xuat(SV teo,ofstream &f)
{
	f<<"MSSV:"<<teo.mssv<<endl;
	XuatNgaySinh(teo.khoa,f);
	f<<"Ho ten:"<<teo.hoten<<endl;
	f<<"Lop:"<<teo.lop<<endl;
	f<<"SDT:"<<teo.sdt<<endl;
}
void XuatDS(SV ds[],int n,ofstream &f)
{
	for(int i=0;i<n;i++)
	{
		f<<"Thong tin sinh vien thu:"<<i+1<<endl;
		Xuat(ds[i],f);
	}
}
int main()
{
	SV ds[100];
	int n;
	cout<<"\nNhap so luong sinh vien:"<<endl;
	cin>>n;
	ofstream f;
	f.open("input.txt",ios::out);
	NhapDS(ds,n);
	XuatDS(ds,n,f);
	f.close();
}

