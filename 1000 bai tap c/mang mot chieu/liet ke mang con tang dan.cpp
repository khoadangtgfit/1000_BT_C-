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
int KTMangTangDan(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            return 0;
    }
    return 1;
}
void lietkecontangdan(int a[MAX],int n)
{
	int ChieuDai,b[MAX];
	for (int i=0; i<n; i++)
	{
		for (ChieuDai = i+2; ChieuDai<=n; ChieuDai++) 
		{
			int nb=0;
			for(int j=i; j<ChieuDai; j++)
			{
				b[nb]=a[j];
				nb++;
			}
			if(KTMangTangDan(b,nb)==1){
				XuatMang(b,nb);
				cout<<endl;
			}
		}
	}
} 
int main()
{
	int a[MAX],n;
	NhapSL(n);
	NhapMang(a,n);
	cout<<"\nMang vua nhap :"<<endl;
	XuatMang(a,n);
	cout<<"\nMang con tang dan:"<<endl;
	lietkecontangdan(a,n);
}