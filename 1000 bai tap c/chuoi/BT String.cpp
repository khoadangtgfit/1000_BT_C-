/*Với str = "tour". Đầu ra stringTask2(str) = ".t.r"*/
#include<iostream>
#include<string.h>
using namespace std;
void Chuyen_Thanh_Chuoi_Thuong(string &b)
{
	for(int i=0;i<b.size();i++)
	{
		if(b[i]>='A'&&b[i]<='Z')
		{
			b[i]+=32;
		}
	}
}
void Convert1(char a[],char &x,char &y)
{
	if(strchr(a,x)!=NULL)
	{
		x='.';
	}
	if(strchr(a,y)!=NULL)
	{
		y=x;
		x='.';
	}
}
void Convert2(string &b,int n,char a[])
{
	Chuyen_Thanh_Chuoi_Thuong(b);
	for(int i=0;i<n;i=i+2)
	{

		Convert1(a,b[i],b[i+1]);
	}
}
int main()
{
	char a[]={'a','o','y','e','u','i'};
	string b;
	getline(cin,b);
	int n=b.size();
	Convert2(b,n,a);
}