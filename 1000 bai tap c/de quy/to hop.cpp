#include<iostream>
using namespace std;
int ToHop(int k,int n)
{
    if(k==0||n==k)
        return 1;
    return ToHop(n-1,k)+ToHop(n-1,k-1);
}
int main()
{
    int n=5;
    int k=3;
    int kq=ToHop(n,k);
    cout<<kq;
    return 0;
}