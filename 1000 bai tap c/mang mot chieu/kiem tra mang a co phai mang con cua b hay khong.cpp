#include<iostream>
#define MAX 100
using namespace std;
void XuatMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}
int KTTrung(int a[],int n,int x){
    for(int i=0;i<n;i++)
        if(a[i]==x)
            return 1;
    return 0;
}
int KT(int a[],int n,int b[],int m)
{
    if(n<m)
        return 0;
    for(int i=0;i<n;i++)
    {
        if(KTTrung(b,m,a[i])==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a[]={1,2,2,4},b[]={1,2,3,4,5,6,7},n=4,m=7;
    cout<<"\nMang A:"<<endl;
    XuatMang(a,n);
    cout<<"\nMang B:"<<endl;
	XuatMang(b,m);
    int t=KT(a,n,b,m);
    if(t==0)
        cout<<"\nMang a khong phai mang con cua mang b!!!";
    else
    {
        cout<<"\nMang a la mang con cua mang b!!!";
    }
}