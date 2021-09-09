#include<iostream>
#include<string.h>
using namespace std;
void TaoXau(char string1[],int n,char string2[],int &k)
{
	for(int i=0;i<n;i++)
	{
		if(string1[i]<='Z'&&string1[i]>='A')
		{
			string2[k++]=string1[i];
		}
	}
}
int main()
{
	char string1[100];
	char string2[100];
	gets(string1);
	int n=strlen(string1);
	int k;
	cout<<"chuoi tao thanh tu string 1 la:";
	puts(string2);
}