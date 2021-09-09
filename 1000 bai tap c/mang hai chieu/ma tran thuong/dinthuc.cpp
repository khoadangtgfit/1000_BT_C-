#include<iostream>
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
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cout<<"\nNhap a["<<i<<"]["<<j<<"]:"<<endl;
			cin>>a[i][j];
		}
}
void XuatMang(int a[][MAX],int n,int m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
}
int Det2(int &a,int &b,int &c,int &d)
{
	return a*d-b*c;
}
int Det3(int a[][MAX])
{
	return a[0][0]*Det2(a[1][1],a[1][2],a[2][1],a[2][2])-a[1][0]*Det2(a[0][1],a[0][2],a[2][1],a[2][2])+a[2][0]*Det2(a[0][1],a[0][2],a[1][1],a[1][2]);
}
int main()
{
	int a[MAX][MAX],n,m;
	NhapSL(n,m);
	NhapMang(a,n,m);
	XuatMang(a,n,m);
	cout<<"DT="<<Det3(a);
}
