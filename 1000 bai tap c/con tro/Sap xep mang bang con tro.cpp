#include<iostream>
#include<stdlib.h>
using namespace std;
void Nhap(int *&a,int n)
{
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        *(a+i)=rand()%100;
    }
}
void Xuat(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout<<*(a+i)<<"\t";
}
void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SapGiam(int *&a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)<*(a+j))
                Swap(a+i,a+j);
        }
    }
}
int main()
{
   int *a,n=10;
   Nhap(a,n);
   Xuat(a,n);
   SapGiam(a,n);
   cout<<endl;
   Xuat(a,n);
}