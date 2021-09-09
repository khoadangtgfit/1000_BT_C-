#include<iostream>
using namespace std;
int TongPTDuong(int a[],int n)
{
    if(n==0)
        return 0;
    int s=TongPTDuong(a,n-1);
    if(a[n-1]>0)
        return s+=a[n-1];
    return s;
    
}
int main()
{
    int a[5]={1,-32,3,-4,5};
    int n=5;
    cout<<"\nTong PT Duong="<<TongPTDuong(a,5);
}