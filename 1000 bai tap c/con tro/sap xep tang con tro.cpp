#include<iostream>
using namespace std;
void Nhap(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap a["<<i<<"]:";
		cin>>*(a+i);
	}
}
void Xuat(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<*(a+i);
	}
}
void HoanVi(int *a,int *b)
{
	int t;
	t=*a; *a=*b; *b=t;
}
void SXTang(int *a,int begin,int end)
{
	for(int i=begin;i<end-1;i++)
	{
		for(int j=i+1;j<end;j++)
		{
			if(*(a+i)>*(a+j))
				HoanVi((a+i),(a+j));
		}
	}
}
void SXGiam(int *a,int begin,int end)
{
	for(int i=begin;i<end-1;i++)
	{
		for(int j=i+1;j<end;j++)
		{
			if(*(a+i)<*(a+j))
				HoanVi((a+i),(a+j));
		}
	}
}
void SX(int *a,int n)
{
	int d=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)%2==0){
				HoanVi((a+i),(a+j));
			}
		}
	}
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0)
			d++;
	}
	SXGiam(a,0,n-d);
	SXTang(a,d,n);
}
int main()
{
	int *a,n;
	cout<<"\nNhap n:";
	cin>>n;
	a=new int[n];
	Nhap(a,n);
	cout<<"\nMang vua nhap la:"<<endl;
	Xuat(a,n);
	cout<<"\nMang sau khi sap xep le giam chan tang dan la:"<<endl;;
	SX(a,n);
	Xuat(a,n);
}
