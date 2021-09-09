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
int DemTrung(int a[],int n,int x)
{
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            d++;
    }
    return d;
}
int Dem(int a[],int n)
{
	int d=100;
	for(int i=0;i<n;i++)
	{
		if(DemTrung(a,n,a[i])<d)
			d=DemTrung(a,n,a[i]);
	}
	return d;
}
void XuatPT(int a[],int n)
{
	cout<<"\nCac phan tu co so lan xuat hien it nhat trong mang la:";
	int m=Dem(a,n);
	for(int i=0;i<n;i++)
	{
		if(DemTrung(a,n,a[i])==m)
			cout<<"\t"<<a[i];
	}
}
int main()
{
	int a[MAX],n;
	NhapSL(n);
	NhapMang(a,n);
	XuatMang(a,n);
	XuatPT(a,n);
}