#include<iostream>
using namespace std;
void NhapN(int &n){
	cout<<"nhap n:";
	cin>>n;
}
void NhapMang(int a[],int n)
{
	if(n==0)
		return;
	NhapMang(a,n-1);
	cout<<"\nNhap a["<<n-1<<"]:";
	cin>>a[n-1];
}
void XuatMang(int a[],int n)
{
	if(n==0)
		return;
	XuatMang(a,n-1);
	cout<<"a["<<n-1<<"]"<<"="<<a[n-1]<<endl;
}
void XuatNguoc(int a[],int n)
{
	if(n==0)
		return;
	cout<<"a["<<n-1<<"]"<<"="<<a[n-1]<<endl;
	XuatNguoc(a,n-1);
}
int DemPTPhanBiet(int a[],int n)
{
	if(n<1)
		return 0;
	if(n==1)
		return 1;
	int flag=0;
	int dem=DemPTPhanBiet(a,n-1);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[n-1])
			flag=1;
	}
	if(flag==0)
		dem++;
	return dem;
}
int main()
{
	int n,a[100];
	NhapN(n);
	NhapMang(a,n);
	XuatMang(a,n);
	XuatNguoc(a,n);
	cout<<"\nSo gia tri phan biet trong mang la:"<<DemPTPhanBiet(a,n);
}
