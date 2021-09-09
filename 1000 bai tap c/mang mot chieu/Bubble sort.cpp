#include<iostream>
using namespace std;
#define MAX 100
void Swap(int &a,int &b)
{
    int t=a; a=b; b=t;
}
void Dao(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]%2==0&a[i]%2==0)
                Swap(a[i],a[j]);
        }
    }
}
void Xuat(int a[],int begin,int end)
{
    for(int i=begin;i<=end;i++)
    {
        cout<<a[i]<<"\t";
    }
}
void XuatDauDuoi(int a[],int n)
{
    int x,y=1;
    int i=0,j=1;
    for(i=0;i<n;i+=y)
    {
        if(a[i]%2==0){
            x=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]%2!=0)
            {
                y=j-1;
                break;
            }
        }
        cout<<"X="<<x<<"\t";
        cout<<"Y="<<y<<"\t";
    }
}
}
int main()
{
    int a[]={1,4,2,6,1,5,2,4,8,1};
    int n=10;
    // Dao(a,n);
    // Xuat(a,0,n-1);
    XuatDauDuoi(a,n);
}
