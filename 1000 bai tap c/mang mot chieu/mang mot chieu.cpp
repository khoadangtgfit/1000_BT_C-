#include<stdio.h>
#include<conio.h>
#define MAX 100
void Nhapn(int &n)
{
	do
	{
		printf("\nNhap n:");
		scanf("%d",&n);
		if(n<1||n>MAX)
			printf("\nNhap so phan tu khong hop le!yeu cau nhap lai!");
	}while(n<1||n>MAX);
}
void NhapMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
int ViTriDuongDauTien(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			return i;
	}
	return -1;
}
int ViTriDuongCuoiCung(int a[],int n)
{
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]>0)
			return i;
	}
	return -1;
}
int PTMAX(int a[],int n)
{
	int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int DemPTMax(int a[],int n)
{
	int d=0,m=PTMAX(a,n);
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
			d++;
	}
	return d;
}
void XuatVTMax(int a[],int n)
{
	printf("\nVi tri cac phan tu MAX:");
	int m=PTMAX(a,n);
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
			printf("%4d",i);
	}
}
void ThemDauMang(int a[],int &n,int x)
{
	for(int i=n;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=x;
	n++;
}
void ThemXVaoVTK(int a[],int &n,int k,int x)
{
	for(int i=n;i>k;i--)
	{
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
}
void XoaDau(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
int main()
{
	int a[MAX],n,x,k,o;
	Nhapn(n);
	NhapMang(a,n);
	XuatMang(a,n);
	int vt=ViTriDuongDauTien(a,n);
	if(vt==-1)
		printf("\nMang khong co phan tu duong!!!");
	else
		printf("\nVi tri phan tu duong dau tien cua mang la=%d",vt);
	int vt1=ViTriDuongCuoiCung(a,n);
	if(vt1==-1)
		printf("\nMang khong co phan tu duong!!!");
	else
		printf("\nVi tri phan tu duong cuoi cung trong mang la=%d",vt1);
	printf("\nPhan tu co gia tri max trong mang la=%d",PTMAX(a,n));
	printf("\nSo phan tu co gia tri max trong mang la=%d",DemPTMax(a,n));
	XuatVTMax(a,n);
	printf("\nNhap gia tri can them:");
	scanf("%d",&x);
	ThemDauMang(a,n,x);
	printf("\nMang sau khi them la=");
	XuatMang(a,n);
	printf("\nNhap vi tri can chen :");
	scanf("%d",&k);
	printf("\nNhap gia tri can them vao mang:");
	scanf("%d",&x);
	ThemXVaoVTK(a,n,k,x);
	printf("\nMang sau khi them la=");
	XuatMang(a,n);
	XoaDau(a,n);
	printf("\nMang sau khi xoa phan tu dau tien la=");
	XuatMang(a,n);
}
