#include<iostream>
using namespace std;
void Swap(int &a,int &b)
{
	int t=a; a=b; b=t;
}
void Xuat(int *a,int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<i[a];
	}
	cout<<endl;
}
void SapTang(int *a,int begin,int n)
{
	for(int i=begin;i<=n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
	}
}
void LietKeHoanVi(int a[],int n)
{
	int i;
	while(true){
		for( i=n;i>=1;i--)
		{
			if(i==1)
				break;
			if(a[i]>a[i-1])
				break;
		}
		for(int j=n;j>=i;j--)
		{
			if(a[j]>a[i-1])
			{
				Swap(a[j],a[i-1]);
				SapTang(a,i,n);
				Xuat(a,n);
				break;
			}
		}
	}
}
int main()
{
	int *a;
	int n;
	cin>>n;
	a=new int [n];
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	Xuat(a,n);
	LietKeHoanVi(a,n);
}