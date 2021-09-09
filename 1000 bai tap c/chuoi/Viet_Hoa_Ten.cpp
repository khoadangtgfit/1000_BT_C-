#include<iostream>
#include<string.h>
using namespace std;
void XoaKTu(char Ten[],int &n,int k)
{
	for(int i=k;i<n;i++)
	{
		Ten[i]=Ten[i+1];
	}
	n--;
}
void XoaKhoangTrangDuThua(char Ten[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(Ten[i]==' '&&Ten[i+1]==' ')
		{
			XoaKTu(Ten,n,i+1);
		}
	}
	if(Ten[0]==' ')
		XoaKTu(Ten,n,0);
}
void ChuanHoa(char Ten[],int n)
{
	if(Ten[0]!=0&&Ten[0]<'a'&&Ten[0]>'z')
		Ten[0]-=32;
	for(int i=0;i<n;i++)
	{
		if(Ten[i]==' '&&Ten[i+1]<'a'&&Ten[i+1]>'z')
		{
			Ten[i+1]-=32;
		}
		if(Ten[i]!=' '&&Ten[i+1]<'A'&&Ten[i+1]>'Z')
		{
			Ten[i+1]+=32;
		}
	}
}
int main()
{
	char Ten[100];
	gets(Ten);
	int n=strlen(Ten);
	XoaKhoangTrangDuThua(Ten,n);
	puts(Ten);
}