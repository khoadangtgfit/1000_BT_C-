#include<iostream>
using namespace std;
int UCLN(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
		return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"Boi chung nho nhat cua "<<a<<" va "<<b<<" la:"<<(a*b)/UCLN(a,b);
}
