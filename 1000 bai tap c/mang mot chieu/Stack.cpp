#include<iostream>
using namespace std;
void Push(int a[],int &n,int x)
{
	a[n]=x;
	n++;
}
int Pop(int a[],int &n)
{
	if(n<0)
		return -1;
	int x=a[--n];
	return x;
}
void PopAll(int a[],int &n)
{
	while(n>0)
	{
		int x=Pop(a,n);
		cout<<x<<"\t";
	}
}
int main()
{
	int a[100];
	int n=0;
	Push(a,n,1);
	Push(a,n,2);
	Push(a,n,3);
	Push(a,n,4);
	Push(a,n,5);
	PopAll(a,n);
}