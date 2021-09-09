#include<iostream>
#include<string.h>
using namespace std;
int Check(string a)
{
	int n=a.size();
	int flag1=1;
	int flag2=1;
	int flag3=1;
	for(int i=0;i<n;i++)
	{
		if(!(a[i]>=65 && a[i]<=90) and flag1==1)
			flag1=0;
		if(!(a[i]>=97 && a[i]<=122) and flag2==1)
			flag2 =0;
		if(a[i]<48 || a[i]>57 and flag3==1)
			flag3 = 0;
	}
	if(flag1==1||flag2==1||flag3==1)
		return 1;
	else
		return 0;

}
void vaildPassword (string b[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(Check(b[i])==1)
			cout<<b[i]<<"\t";
	}

}
int main()
{
	string b[]={"abc","Abc","ABC","AB2C"};
	vaildPassword(b,4);
}