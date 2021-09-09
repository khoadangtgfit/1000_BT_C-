#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 200
using namespace std;
void NhapKT(int &n,int &m)
{
	cout<<"\nNhap so dong vao:"<<endl;
	cin>>n;
	cout<<"\nNhap so cot vao:"<<endl;
	cin>>m;
}
void NhapMang(int a[][MAX],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"\nNhap a"<<"["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
			
	}
}
void PhatSinhMang(int a[][MAX],int n,int m)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			a[i][j]=rand()%201-100;
	}
}
void XuatMang(int a[][MAX],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
}
void Xuat1dong(int a[][MAX],int m,int k)
{
	cout<<"\nDong thu :"<<k<<"\n";
	for(int i=0;i<m;i++)
	{
		cout<<a[k][i]<<"\t";
	}
}
int KTTang1Dong(int a[][MAX],int m,int k)
{
	for(int i=0;i<m-1;i++)
	{
		if(a[k][i]>a[k][i+1])
			return 0;
	}
	return 1;
}
void XuatDongTang(int a[][MAX],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		if(KTTang1Dong(a,m,i)==1)
			Xuat1dong(a,m,i);
	}
}
void hoanvi2dong(int a[][MAX],int n,int m,int &dong1,int &dong2)
{
	dong1=0;dong2=2;
	for(int i=0;i<n;i++)
	{
		int t=a[dong1][i];
		a[dong1][i]=a[dong2][i];
		a[dong2][i]=t;
	}
}
int main()
{
	int a[MAX][MAX],n,m,dong1,dong2;
	NhapKT(n,m);
//	PhatSinhMang(a,n,m);
	NhapMang(a,n,m);
	XuatMang(a,n,m);
//	cout<<"\nCac dong tang:\n";
//	XuatDongTang(a,n,m);
	hoanvi2dong(a,n,m,dong1,dong2);
	cout<<"\nMang sau khi hoan vi:\n";
	XuatMang(a,n,m);
}
