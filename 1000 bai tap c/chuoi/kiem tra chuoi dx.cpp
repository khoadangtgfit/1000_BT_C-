#include<iostream>
using namespace std;
int KT(char a[],int n)
{
	for(int i = 0;i < n;i ++)
	{
		if(a[i]!=a[n-1-i])
			return 0;
	}
	return 1;
}
int main()
{
	char a[]="abccba";
	int n=strlen(a);
	if(KT(a,n)==1)
		cout<<"DX"<<endl;
	else
		cout<<"Ko DX"<<endl;
}