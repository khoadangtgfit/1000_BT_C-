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
int KTNT(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int TimMAX(int a[],int n)
{
	int x=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>x)
			x=a[i];
	}
	return x;
}
int TimSoNT(int a[],int n)
{
    int m=TimMAX(a,n);
    int i=m+1;
    do
    {
       if(KTNT(i)==1)
            return i;
        else
        {
            i++;
        }
        
    } while ((KTNT(i)==1));
    
}
int main()
{
	int a[MAX],n,m;
	NhapSL(n);
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<"KQ:"<<TimSoNT(a,n);
}