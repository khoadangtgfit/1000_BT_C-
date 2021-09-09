#include<iostream>
using namespace std;
int Dem(int a[],int n)
{
	int S=0,d=0;
	for(int i=1;i<=n;i++)
	{
		S+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((a[i]!=a[j])&&((S-(a[i]+a[j]))%2==0))
					d++;
		}
	}
	return d/2;
}
int main()
{
	int a[100];
	int n=5;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	cout<<"So cach chon="<<Dem(a,n);
}