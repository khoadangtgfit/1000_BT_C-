#include<iostream>
using namespace std;
int TimMax(int a[],int n)
{
    if(n==1)
        return a[0];
    int m=TimMax(a,n-1);
    if(a[n-1]>m)
        m=a[n-1];
    return m;
}
int ViTriMax(int a[],int n)
{
    int vt;
    if(n==1)
        return 0;
    int m=TimMax(a,n-1);
    if(a[n-1]>m){
        vt=n-1;
    }
    return vt;
    
}
int main()
{
    int a[5]={1,2,3,4,5};
    int n=5;
    cout<<"MAX:"<<TimMax(a,n);
    cout<<"\nVi Tri Max:"<<ViTriMax(a,n);
}