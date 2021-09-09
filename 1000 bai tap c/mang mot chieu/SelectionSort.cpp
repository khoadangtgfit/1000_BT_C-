#include<iostream>
using namespace std;
void Xuat(int a[],int n)
{
	int i=0;
	while(i<n)
	{
		cout<<a[i]<<"\t";
		i++;
	}
}
void Swap(int &a,int &b)
{
	int t=a; a=b; b=t;
}
void SelectionSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			Swap(a[i],a[min]);
		}
	}
}
int main()
{
	int a[]={5,2,6,1,7,8};
	int n=6;
	SelectionSort(a,n);
	Xuat(a,n);
}
