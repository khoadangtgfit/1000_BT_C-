#include<iostream>
using namespace std;
bool KTToanAmHayKhong(int a[],int n)
{
    if(n==0)
        return false;
    if(a[n-1]>0)
        return false;
    else
        return true;
    return KTToanAmHayKhong(a,n-1);
}
int main()
{
    int a[5]={-1,-2,-4,-5,-3},n=5;
    bool k=KTToanAmHayKhong(a,n);
    if(k==true)
        cout<<"\nMang toan am!!!";
    else 
        cout<<"\nMang khong toan am!!!";
}