//#include<stdio.h>
#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100
using namespace std;
void NhapN(int &n)
{
	t:cout<<"Nhap so phan tu cua mang:"<<endl;
	cin>>n;
	if(n<1||n>MAX)
	{
		cout<<"Nhap so phan tu khong hop le, yeu cau nhap lai!!!"<<endl;
		goto t;	
	}
}
void ghifile(int a[],int n)
{
	fstream f;
	f.open("khoa.txt",ios::out);
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%100;
		f<<a[i]<<"\t";
	}
	f.close();
}
void docfile(int a[],int n)
{
	fstream f;
	f.open("khoa.txt",ios::in);
	for(int i=0;i<n;i++)
	{
		f>>a[i];
	}
	f.close();
}
void TimMax(int a[],int n)
{
	fstream f;
	f.open("output.txt",ios::out);
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	f<<"MAX:"<<max;
	f.close();
}
void DemChanLe(int a[],int n)
{
	fstream f;
	int d1=0,d2=0;
	f.open("output.txt",ios::out);
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			d1++;
		else
			d2++;
	}
	f<<"So luong chan:"<<d1;
	f<<"\nSo luong le:"<<d2;
	f.close();
}
int main()
{
	int a[MAX],n,khoa;
	t:NhapN(n);
	ghifile(a,n);
	docfile(a,n);
	DemChanLe(a,n);
	TimMax(a,n);
	cout<<"Ban co muon tiep tuc khong? neu co bam phim c,nguoc lai bam phim bat ky!"<<endl;
	khoa=getch();
	if(khoa=='c'||khoa=='C')
	goto t;
	
}
