#include<iostream>
using namespace std;
int Tong(int a[],int n)
{
    if(n==0)
        return 0;
    return Tong(a,n-1)+a[n-1];
}
int main()
{
    int a[5]={1,2,3,4,5};
    int n=5;
    cout<<"\nTong PT="<<Tong(a,5);
}