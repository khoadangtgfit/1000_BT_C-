#include<stdio.h>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define MAX 100
using namespace std;
void GhiFile(int a[],int &n,ofstream &f)
{
	srand(time(NULL));
	cout<<"\nNhap so luong:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%101;
		f<<a[i]<<"\t";
	}
}
void DocFile(int a[],int n,ifstream &f1)
{
	for(int i=0;i<n;i++)
	{
		f1>>a[i];
		cout<<a[i]<<"\t";
	}
}
void TimMax(int a[],int n,	ofstream &f)
{
	int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	f<<"\nMAX:"<<max;
}
bool KTNT(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
void SoNT(int a[],int n,ofstream &f)
{
	f<<"\nSo nguyen to:";
	for(int i=0;i<n;i++)
	{
		if(KTNT(a[i]))
			f<<"\t"<<a[i];
	}	
}
void DemChanLe(int a[],int n,ofstream &f)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			d++;
	}
	f<<"\nSo chan:"<<d;
	f<<"\nSo le:"<<n-d;
}
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
void SXTang(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
	}
}
void Xuat(int a[],int n,ofstream &f)
{
	f<<"\nMang sau khi sx tang:";
	for(int i=0;i<n;i++)
	{
		f<<"\t"<<a[i];
	}
}
int main()
{
	int a[MAX],n;
	ofstream f;
	f.open("input.txt",ios::in);
	ifstream f1;
	f1.open("input.txt",ios::out);
	GhiFile(a,n,f);
	DocFile(a,n,f1);
	TimMax(a,n,f);
	SoNT(a,n,f);
	DemChanLe(a,n,f);
	SXTang(a,n);
	Xuat(a,n,f);
	f.close();
	f1.close();
}
