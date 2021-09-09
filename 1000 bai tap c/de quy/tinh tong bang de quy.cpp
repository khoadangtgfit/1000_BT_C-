#include<iostream>
#include<math.h>
using namespace std;
void NhapN(int &n){
	cout<<"nhap n:";
	cin>>n;
}
float Tong1(int a[],int n)
{
    //S=1/2+1/4+...+1/2n 
	if(n==1)
        return 1.0/2;
    return Tong1(a,n-1)+1.0/(2*n);
    
}
float Tong2(int a[],int n,int x)
{
	//S(n)=x+x^2+x^3+...+x^n
	if(n==1)
		return x;
	return Tong2(a,n-1,x)+pow(x,n);
}
int main()
{
	int n,a[100],x;
	NhapN(n);
	// cout<<"\nTong1:"<<Tong1(a,n);
	cout<<"\nNhap x:";
	cin>>x;
	cout<<"\nNhap n:";
	cin>>n;
	cout<<"\nTong2:"<<Tong2(a,n,x);
}
