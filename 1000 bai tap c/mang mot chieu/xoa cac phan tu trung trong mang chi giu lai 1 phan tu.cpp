#include<stdio.h>
#include<conio.h>
#define MAX 100
void NhapN(int &n)
{
	do
	{
		printf("\nNhap so luong phan tu(1<=n<=100):");
		scanf("%d",&n);
		if(n<1||n>MAX)
			printf("\nNhap so luong phan tu khong hop le,yeu cau nhap lai n(1<=n<=100)!!!");
	}while(n<1||n>MAX);
}
void NhapMang(int a[],int n)
{
	for(int i=0;i<n;i++){
		printf("\nNhap a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}
int Xoa(int a[],int &n,int k)
{
	for(int i=k;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
}
int KTTrung(int a[],int n,int x)
{
	for(int i=0;i<n;i++){
		if(a[i]==x)
			return 1;
	}
	return 0;
}
int XoaTrung(int a[],int n)
{
	for(int i=0;i<n;i++){
		if(KTTrung(a,i,a[i])==1){
			Xoa(a,i,a[i]);
			i--;
		}
	}
}
void Xoatrung(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j]){
				Xoa(a,j,a[j]);
//				n--;
				j--;
		}
		}
	}
}
int main()
{
	int a[MAX],n;
	NhapN(n);
	NhapMang(a,n);
	Xoatrung(a,n);
	XuatMang(a,n);
}
