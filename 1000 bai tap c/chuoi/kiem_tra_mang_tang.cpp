#include<iostream>
using namespace std;
int KiemTraMangTang(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
			return 0;
	}
	return 1;
}
int main()
{
	int a[]={1,2,4,5,5,6,6,7};
	int n=8;
	if(KiemTraMangTang(a,n)==0)
	{
		cout<<"Mang khong tang dan";
	}
	else
	{
		cout<<"Mang tang dan";
	}
}