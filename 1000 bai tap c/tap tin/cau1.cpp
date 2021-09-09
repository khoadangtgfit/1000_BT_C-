#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>
#define MAX 100
using namespace std;
void DocFile(int a[],int &n)
{
	ifstream f;
	f.open("TEXT.txt",ios::in);
	f>>n;
	for(int i=0;i<n;i++)
	{
		f>>a[i];
	}
	f.close();
}
bool KTNT(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
void Ghifile(int a[],int n)
{
	ofstream f1;
	f1.open("TEXT.txt",ios::out);
	f1<<"\nSo nguyen to:\t";
	for(int i=0;i<n;i++)
	{
		if(KTNT(a[i]))
			f1<<a[i]<<"\t";
	}
	f1.close();
}
int xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<a[i];
	}
}
int main()
{
	int a[MAX],n;
	DocFile(a,n);
	xuat(a,n);
	Ghifile(a,n);
}
