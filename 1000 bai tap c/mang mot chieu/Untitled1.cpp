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
void XuatDauDuoi(int a[],int n)
{
	int x,y,flag=0;
	for(int i=0;i<n;i++)
	{
		if((a[i]%2==0)&&(flag==0))
		{
			flag=1;
			x=a[i];
		}
		if((a[i]%2==0)&&(flag==1))
		{
			y=a[i];
		}
		if((a[i]%2!=0)&&(flag==1))
		{
			flag=0;
			if(x!=y){
				cout<<"X="<<x<<"\t";
				cout<<"Y="<<y<<"\t";
			}
		}

	}
}
int main()
{
	int a[]={5,2,6,4,7,8,};
	int n=6;
	XuatDauDuoi(a,n);
	// Xuat(a,n);
}
