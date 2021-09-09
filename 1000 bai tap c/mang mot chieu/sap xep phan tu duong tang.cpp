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
void swap(int &a,int &b)
{
    int t=a;a=b;b=t;
}
void SapXepDuongTang(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>0&&a[j]>0&a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
}
int main()
{
	int a[MAX],n;
	NhapSL(n);
	NhapMang(a,n);
	XuatMang(a,n);
	SapXepDuongTang(a,n);
    cout<<"\nMang sau khi sap xep cac phan tu duong tang dan:"<<endl;
    XuatMang(a,n);
}