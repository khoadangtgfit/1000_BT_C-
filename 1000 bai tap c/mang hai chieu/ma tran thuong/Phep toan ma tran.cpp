#include<stdio.h>
#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;
void NhapKT(int &n,int &m)
{
	do
	{
		cout<<"Nhap so dong:"<<endl;
		cin>>n;
		if(n<=0||n>MAX)
			cout<<"Nhap so dong khong hop le,yeu cau nhap lai!!!"<<endl;
	}while(n<=0||n>MAX);
	do
	{
		cout<<"Nhap so cot:"<<endl;
		cin>>m;
		if(m<=0||m>MAX)
			cout<<"Nhap so cot khong hop le,yeu cau nhap lai!!!"<<endl;
	}while(m<=0||m>MAX);
}
void NhapMang(int a[][MAX],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"\nNhap a["<<i<<"]["<<j<<"]="<<endl;
			cin>>a[i][j];
		}
	}
}
void XuatMang(int a[][MAX],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void NhanHaiMT(int a[][MAX],int n,int m,int b[][MAX],int x,int y,int c[][MAX])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<y;j++)
		{
			for(int k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}
void TongHaiMaTran(int a[][MAX],int n,int m,int b[][MAX],int x,int y,int d[][MAX])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
				d[i][j]=a[i][j]+b[i][j];
		}
	}
}
void HieuHaiMaTran(int a[][MAX],int n,int m,int b[][MAX],int x,int y,int e[][MAX])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
				e[i][j]=a[i][j]-b[i][j];
		}
	}
}
int main()
{
	int a[MAX][MAX],n,m,x,y,b[MAX][MAX],c[MAX][MAX],d[MAX][MAX],e[MAX][MAX],chon;
	char Khoa;
	t:cout<<"\n=====================MENU====================="<<endl;
    cout<<"=                                            ="<<endl;
	cout<<"=                1.Nhan Hai MT               ="<<endl;
	cout<<"=                2.Tong Hai MT               ="<<endl;
	cout<<"=                3.Hieu Hai MT               ="<<endl;
	cout<<"=                0.Thoat                     ="<<endl;
	cout<<"=                                            ="<<endl;
	cout<<"=====================END======================"<<endl;
	cout<<"Nhap su lua chon:"<<endl;
	cin>>chon;
	switch(chon){
		case 1:
		
			cout<<"Nhap mang A:"<<endl; NhapKT(n,m); NhapMang(a,n,m);
			cout<<"\nNhap mang B:"<<endl; NhapKT(x,y); NhapMang(b,x,y); 
			cout<<"\nMang A:"<<endl; XuatMang(a,n,m);
			cout<<"\nMang B:"<<endl; XuatMang(b,x,y);
			if(m==x){
				NhanHaiMT(a,n,m,b,x,y,c);
				cout<<"\nTich cua MT A va MT b:"<<endl;
				XuatMang(c,n,y);
			}
			else cout<<"\nKhong thuc hien duoc phep nhan cua hai ma tran!!!"<<endl;
		break;
		case 2:
		{
			cout<<"Nhap mang A:"<<endl; NhapKT(n,m); NhapMang(a,n,m);
			cout<<"\nNhap mang B:"<<endl; NhapKT(x,y); NhapMang(b,x,y); 
			cout<<"\nMang A:"<<endl; XuatMang(a,n,m);
			cout<<"\nMang B:"<<endl; XuatMang(b,x,y);
			if(n==x&&m==y){
				TongHaiMaTran(a,n,m,b,x,y,d);
				cout<<"\nTong cua MT A va MT b:"<<endl;
				XuatMang(d,n,m);
			}else cout<<"\nKhong thuc hien duong phep cong hai ma tran!!!"<<endl;
		}
		break;
		case 3:
			{
			cout<<"Nhap mang A:"<<endl; NhapKT(n,m); NhapMang(a,n,m);
			cout<<"\nNhap mang B:"<<endl; NhapKT(x,y); NhapMang(b,x,y); 
			cout<<"\nMang A:"<<endl; XuatMang(a,n,m);
			cout<<"\nMang B:"<<endl; XuatMang(b,x,y);
			if(n==x&&m==y){
				HieuHaiMaTran(a,n,m,b,x,y,e);
				cout<<"\nHieu cua MT A va MT b:"<<endl;
				XuatMang(e,n,m);
			}else cout<<"\nKhong thuc hien duong phep tru hai ma tran!!!"<<endl;
		}
		break;
		case 0: exit(0);
		default:
		{
			cout<<"Su lua chon khong hop le,yeu cau chon lai!!!"<<endl;
			goto t;
		}
	}
	cout<<"\nBan co muon tiep tuc,neu co bam phim c,neu khong bam phim bam ky!!!"<<endl;
	Khoa=getch();
	if(Khoa=='c'||Khoa=='C')
	goto t;
}
