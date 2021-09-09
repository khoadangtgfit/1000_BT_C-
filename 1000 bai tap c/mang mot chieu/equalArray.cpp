#include<iostream>
#include<math.h>
using namespace std;
void SapXep(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int equalArray(int a[],int n)
{
	SapXep(a,n);
	int t=a[n/2];
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=abs(a[i]-a[n/2]);
	}
	return s;
}
int main()
{
	int a[]={1,1,4,2,5,5,7};
	int n=7;
	cout<<"So lan sx = "<<equalArray(a,n);
}