#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#define MAX 100
using namespace std;
void NhapSL(int &n,int &m)
{
	do
	{
		cout<<"\nNhap n:"<<endl;
		cin>>n;
		if(n<=0||n>MAX)
			cout<<"\nNhap sai yeu cau nhap lai!!!"<<endl;
	}while(n<=0||n>MAX);
	do
	{
		cout<<"\nNhap m:"<<endl;
		cin>>m;
		if(m<=0||n>MAX)
			cout<<"\nNhap sai yeu cau nhap lai!!!"<<endl;
	}while(m<=0||n>MAX);
	
}
void NhapMang(int a[][MAX],int n,int m)
{
	ofstream f;
	fopen("input.txt",ios::out);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cout<<"\nNhap a["<<i<<"]["<<j<<"]:"<<endl;
			cin>>a[i][j];
			f<<a[i][j];	
		}
		cout<<endl;
}
//void XuatMang(int a[][MAX],int n,int m)
//{
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//			cout<<a[i][j]<<"\t";
//		cout<<endl;
//	}
//}
int main()
{
	int a[MAX][MAX],n,m;
	NhapSL(n,m);
	NhapMang(a,n,m);
//	XuatMang(a,n,m);
	
}
