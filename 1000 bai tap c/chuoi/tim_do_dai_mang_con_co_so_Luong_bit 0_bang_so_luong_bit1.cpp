#include<iostream>
using namespace std;
int Dem(int a[],int n)
{
	int c=0,l=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			c++;
		else
			l++;
	}
	if(c>l)
		c=l;
	else
		l=c;
	return l+c;
}
int main()
{
	int a[]={0,1,1,0,1,0,0,0,0};
	int n=9;
	cout<<"Do dai chuoi bit dai nhat co so bit1 bang bit0="<<Dem(a,n);
}