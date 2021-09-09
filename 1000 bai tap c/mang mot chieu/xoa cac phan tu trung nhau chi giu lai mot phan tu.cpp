#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;
void NhapSL(int &n)
{
	do{
		cout<<"\nNhap so luong mang(0<n<100):";
		cin>>n;
		if(n<1||n>MAX)
			cout<<"\nNhap so luong mang khong hop le!!!yeu cau nhap lai!!!";
	}while(n<1||n>MAX);
}
void NhapMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap a["<<i<<"]:";
		cin>>a[i];
	}
}
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int TimX(int a[],int n)
{
	int x=0;
	for(int i=0;i<n;i++)
	{
		if(abs(a[i])>x)
			x=abs(a[i]);
	}
	return x;
}
int main()
{
	int a[MAX],n,m;
	NhapSL(n);
	NhapMang(a,n);
	XuatMang(a,n);
	m=TimX(a,n);
	cout<<"\ncac phan tu trong mang deu nam trong doan ["<<-m<<","<<m<<"]";
}