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
void SXTang(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                HV(a[i],a[j]);
        }
    }
}
void GopMang(int a[],int n,int b[],int m,int c[],int &p)
{
    p=m+n;
    for(int i=0;i<p;i++)
    {
        if(i<n)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[i-n];
        }
        
    }
}
int main()
{
	// NhapSL(n);
	// NhapMang(a,n);
    // NhapSL(m);
	// NhapMang(b,m);
    int a[]={1,4,6,9},b[]={2,5,7,8,10,15,17},n=4,m=7,c[MAX+MAX],p;
    cout<<"\nMang A:"<<endl;
    XuatMang(a,n);
    cout<<"\nMang B:"<<endl;
	XuatMang(b,m);
	GopMang(a,n,b,m,c,p);
    SXTang(c,p);
    cout<<endl;
    XuatMang(c,p);

    
}