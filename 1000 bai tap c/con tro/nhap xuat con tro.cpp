#include<iostream>
using namespace std;
void Nhap(int *&a,int n)
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
int DemTanSuatXHMax(int *a,int n)
{
	int max=1;
	for(int i=0;i<n;i++)
	{
		int d=1;
		for(int j=i+1;j<n;j++)
			if(*(a+i)==*(a+j))
				d++;
		if(d>max)
			max=d;
	}
	return max;
}
void TanSuat(int *a,int n)
{
	
	for(int i=0;i<n;i++)
	{
		int d=0;
		for(int j=0;j<n;j++)
		{
			if(*(a+i)==*(a+j))
				d++;
		}
			cout<<"\nTan suat xuat hien cua "<<a[i]<<" la :"<<d;
	}
}
int main()
{
	int *a,n;
	cout<<"\nNhap n:";
	cin>>n;
	a=new int[n];
	Nhap(a,n);
	Xuat(a,n);
//	cout<<"\nTan suat xuat hien lon nhat:"<<DemTanSuatXHMax(a,n);
//	cout<<"dem:"<<Dem(a,n,2);
	TanSuat(a,n);
	delete a;
}
