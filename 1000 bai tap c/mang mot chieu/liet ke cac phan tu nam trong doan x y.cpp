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
void NhapXY(int &x,int &y)
{
    do{
    cout<<"\nNhap x:";
    cin>>x;
    cout<<"\nNhap y:";
    cin>>y;
    if(y<=x)
        cout<<"\nNhap x y khong hop le yeu cau nhap lai!!!";
    }
    while(y<=x);
}
void XuLyDuLieu(int a[],int n,int x,int y)
{
    cout<<"\nCac PT cua mang nam trong doan["<<x<<","<<y<<"] la:";
    for(int i=0;i<n;i++)
    {
        if(a[i]>= x &&a[i]<=y)
        {
            cout<<"\t"<<a[i];
        }
    }
}
int main()
{
	int a[MAX],n,y,x;
	NhapSL(n);
	NhapMang(a,n);
	XuatMang(a,n);
    NhapXY(x,y);
	XuLyDuLieu(a,n,x,y);
}