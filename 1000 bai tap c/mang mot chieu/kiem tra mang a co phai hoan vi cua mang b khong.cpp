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
int KTTrung(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            return 1;
    }
    return 0;
}
int KTHV(int a[],int n,int b[],int m)
{
    if(n!=m)
        return 0;
    for(int i=0;i<n;i++)
    {
        if(KTTrung(b,m,a[i])==0)
            return 0;
    }
    return 1;
}
int main()
{
	int a[MAX],n,b[MAX],m;
	NhapSL(n);
	NhapMang(a,n);
    NhapSL(m);
	NhapMang(b,m);
    cout<<"\nMang A:"<<endl;
    XuatMang(a,n);
    cout<<"\nMang B:"<<endl;
	XuatMang(b,m);
	// cout<<"\nKQ:"<<KTHV(a,n,b,m);
    int u=KTHV(a,n,b,m);
    if(u==1)
        cout<<"\nMang  a la hoan vi cua mang b!!!";
    else
    {
        cout<<"\nMang a khong phai hoan vi cua mang b!!!";
    }
    
}