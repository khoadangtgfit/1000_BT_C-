#include<iostream>
#include<math.h>
using namespace std;
void NhapN(int &n){
	cout<<"nhap n:";
	cin>>n;
}
void UocSo(int n,int k)
{
    if(n<0)    
        return ;
    if(n%k==0)
        cout<<k<<"\t";
    UocSo(n,k+1);
}
int main()
{
	int n,a[100],x,k=1;
	NhapN(n);
	// cout<<"\nTong1:"<<Tong1(a,n);
	// cout<<"\nNhap x:";
	// cin>>x;
	// cout<<"\nNhap n:";
	// cin>>n;
    UocSo(n,k);
}
