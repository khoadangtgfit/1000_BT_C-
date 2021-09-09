#include<iostream>
#include<conio.h>
#include<fstream>
#include<time.h>
#include<stdlib.h>
#define MAX 100
using namespace std;
void Nhap(int &n)
{
	do{
		cout<<"\nNhap kich thuoc mang(0<n<100):";
		cin>>n;
		if(n<0||n>MAX)
			cout<<"\nNhap sai kich thuoc,yeu cau nhap lai!!!";
	}while(n<0||n>MAX);
}
void GhiFile(int a[],int n)
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
void DocFile(int a[],int n)
{
	fstream f;
	f.open("khoa.txt",ios::in);
	for(int i=0;i<n;i++){
		f>>a[i];
	}
	f.close();
}
int main()
{
	int a[MAX],n;
	Nhap(n);
	GhiFile(a,n);
	DocFile(a,n);
}
