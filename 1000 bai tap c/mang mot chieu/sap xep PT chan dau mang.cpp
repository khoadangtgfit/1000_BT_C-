#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
void HV(int &a,int &b)
{
    int t=a; a=b; b=t;
}
void SX(int a[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
            if(a[i]%2==0)
                HV(a[i],a[j]);
}
int main()
{
    int a[]={1,2,3,4,5},n=5;
    cout<<"\nMang A:"<<endl;
    XuatMang(a,n);
    cout<<"\nMang sau khi SX cac phan tu chan dau mang:"<<endl;
    SX(a,n);
    XuatMang(a,n);
    
}