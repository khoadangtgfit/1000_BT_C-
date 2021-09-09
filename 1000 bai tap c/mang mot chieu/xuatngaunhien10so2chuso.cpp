#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void TaoMang(int a[],int &n)
{
	for(int i=0;i<10;i++)
	{
		a[i]=(rand()%n+1)*10+(rand()%n+1);
	}
}
void Xuat(int a[],int n)
{
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int a[100],n;
	cin>>n;
	srand((unsigned)time(NULL));
	TaoMang(a,n);
	Xuat(a,n);
}
