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
void GopMang(int c[],int &p,int a[],int n,int b[],int m)
{
	p=m+n;
	for(int i=0;i<p;i++)
	{
		if(i<n)
			c[i]=a[i];
		else
			c[i]=b[i-n];
	}
}
void GopMangXenKe(int c[],int &p,int a[],int n,int b[],int m)
{
	for (int i = p= 0; i < m || i < n; i++)
	{
	   if (i < n) c[p++] = a[i];
	   if (i < m) c[p++] = b[i];
	}
}
int main()
{
	int c[MAX+MAX],n=4,m=4,p;
	int a[]={1,2,3,4};
    int b[]={2,3,4,5};
//	printf("\nNhap mang a:");
//	NhapN(n);
//	NhapMang(a,n);
//	printf("\nNhap mang b:");
//	NhapN(m);
//	NhapMang(b,m);
	printf("\nMang A:\n");
	XuatMang(a,n);
	printf("\nMang B:\n");
	XuatMang(b,m);
	printf("\nSau khi gop mang A va mang B:");
	GopMang(c,p,a,n,b,m);
	XuatMang(c,p);
//	printf("\nSau khi gop mang A va mang B xen ke nhau:");
//	GopMangXenKe(c,p,a,n,b,m);
//	XuatMang(c,p);
}
