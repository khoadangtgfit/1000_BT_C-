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
void GopMang(int a[],int n,int b[],int m,int c[],int &p)
{
    p=m+n;
    for(int i=0;i<p;i++)
    {
        if(i<n)
            c[i]=a[i];
        else
            c[i]=b[i-n];
    }
}
void XuatPT(int a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        int d=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
                d++;
        }
        if(d==1)
            cout<<"\t"<<a[i];
    }
}
int main()
{
	int n=4,m=4,c[MAX+MAX],p=n+m;
	// NhapSL(n);
	// NhapMang(a,n);
    int a[]={1,2,3,4};
    int b[]={2,3,4,5};
    cout<<"\nMang A:"<<endl;
	XuatMang(a,n);
    cout<<"\nMang B:"<<endl;
	XuatMang(b,m);
    GopMang(a,n,b,m,c,p);
    cout<<"\nCac phan tu khong trung cua mang a khong trung vs mang b va nguoc lai la:";
	XuatPT(c,p);
    // XuatMang(c,p);

}