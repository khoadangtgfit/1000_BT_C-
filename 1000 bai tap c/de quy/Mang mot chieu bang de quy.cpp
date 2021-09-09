#include<iostream>
using namespace std;
void NhapN(int &n){
	cout<<"nhap n:"<<endl;
	cin>>n;
}

void NhapMang(int a[],int n)
{
	if(n>0){
		NhapMang(a,n-1);
		cout<<"Nhap a["<<n<<"]:"<<endl;
		cin>>a[n];
	}
}
void XuatMang(int a[],int n)
{
	if(n>0){
		XuatMang(a,n-1);
		cout<<a[n]<<" ";
	}
}
int TongPT(int a[],int n){
	if(n==0)
		return 0;
	return TongPT(a,n-1)+a[n];
}
int Max(int a[], int n)
{
	if (n == 0)
		return -1;
	if(a[n]>Max(a,n-1))
		return a[n];
	else
		return Max(a,n-1);
}
int DemChan(int a[],int n){
	int KT=0;
	if(n==0)
		return 0;
	if(a[n]%2==0){
		KT=1;
	}
	return DemChan(a,n-1)+KT;	
}
int swap(int &a,int &b){
	int t=a; a=b; b=t;
}
//void SXTang(int a[],int n){
////	if(n==1)
////		return a[0];
//	if(a[n]>a[n-1])
//		swap(a[n],a[n-1]);
//	SXTang(a,n-1);
//}
void SapXep(int a[],int n)
{
	if(n==0)
		return;
	if(a[n]< a[n-1])
		swap(a[n],a[n-1]);
	SapXep(a,n-1);
	
}
int main()
{
	int n,a[100];
	NhapN(n);
	NhapMang(a,n);
	XuatMang(a,n);
//	cout<<"\nS="<<TongPT(a,n);
//	cout<<"\nMAX="<<Max(a,n);
//	cout<<"\nSo PT Chan:"<<DemChan(a,n);
cout<<endl;
	SapXep(a,n);
	XuatMang(a,n);
		
}
