#include<iostream>
using namespace std;
void ChuanHoa(char a[],int n,char s[],int &k)
{
	for(int i=n-1;i>=0;i--)
	{
		a[k++]=a[i];
	}
}