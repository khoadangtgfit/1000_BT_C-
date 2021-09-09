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
int KTDoiXung(int a[],int n)
{
    int flag=1;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
            flag=0;
    }
    return flag;
}
int main()
{
	int a[MAX],n;
	NhapSL(n);
	NhapMang(a,n);
	XuatMang(a,n);
	int m=KTDoiXung(a,n);
    if(m==1)
        cout<<"\nMang doi xung!!!";
    else
    {
        cout<<"\nMang khong doi xung!!!";
    }
    
}