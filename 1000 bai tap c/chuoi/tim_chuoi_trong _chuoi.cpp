#include<iostream>
#include<string.h>
using namespace std;
void XoaKTu(char s[],int &m,int k)
{
	for(int i=k;i<m;i++)
	{
		s[i]=s[i+1];
	}
	m--;
}
int Dem(char s[100],char t[100],int n,int m)
{
	char s1[100];
	strcpy(s1,s);
	int d=n;
	int dem=0;
	while(d==n){
		d=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(t[i]==s1[j])
			{
				XoaKTu(s1,m,j);
				d++;
				break;
			}
		}
		if(d==n)
			dem++;
	}
}
return dem;
}
int main()
{
	char s[]="loonbalxballpoonballoon";
	char t[]="balloon";
	int n=strlen(t);
	int m=strlen(s);
	cout<<Dem(s,t,n,m);
}