#include<iostream>
#include<math.h>
using namespace std;
int UCLN(int a,int b)
{
	while(a!=b){
		if(a>b)
			a=a-b;
		if(b>a)
			b=b-a;
	}
	return a;
}
int main()
{
	int a,b;
	cout<<"Nhap a vao:"<<endl;
	cin>>a;
	cout<<"Nhap b vao:"<<endl;
	cin>>b;
	cout<<"Boi chung nho nhat cua hai so "<<a<<" va "<<b<<" la :"<<(a*b)/UCLN(a,b);
}
