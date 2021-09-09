#include<iostream>
using namespace std;
void Enqueue(int a[],int &n,int x)
{
	a[n]=x;
	n++;
}
int Dequeue(int a[],int &n)
{
	if(n==0)
		return -1;
	int x=a[0];
	return x;
	for(int i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void DequeueAll(int a[],int &n)
{
	while(n>0)
	{
		cout<<Dequeue(a,n);
	}
}
int main()
{
	int a[100];
	int n=0;
	Enqueue(a,n,1);
	Enqueue(a,n,2);
	Enqueue(a,n,3);
	Enqueue(a,n,4);
	Enqueue(a,n,5);
	cout<<Dequeue(a,n);
}