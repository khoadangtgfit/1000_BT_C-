#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100
void NhapN(int &n)
{
	t:printf("\nNhap N vao:");
	scanf("%d",&n);
	if(n<=0||n>MAX)
	{
		printf("\nNhap sai N yeu cau nhap lai!!!");
		goto t;
	}
}
void GhiFile(char *fn,int a[],int n)
{
	FILE*f;
	f=fopen(fn,"wt");
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%100;
		fprintf(f,"%d\t",a[i]);
	}
	fclose(f);
}
void DocFile(char *fn,int a[],int n)
{
	FILE*f;
	f=fopen(fn,"rt");
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++)
	{
		fscanf(f,"%d",&a[i]);
	}
	fclose(f);
}
void GhiMax(char *fn,int a[],int n)
{
	FILE*f;
	f=fopen(fn,"wt");
	int m=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	fprintf(f,"%d",m);
	fclose(f);
}
void GhiChanLe(char *fn,int a[],int n)
{
	FILE*f;
	f=fopen(fn,"at");
	int d1=0,d2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			d1++;
		else
			d2++;
	}
	fprintf(f,"\nSo luong chan:%d",d1);
	fprintf(f,"\nSo luong le:%d",d2);
}
void swap(int &a,int &b)
{
	int t=a; a=b; b=t;
}
void SX(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
	}
}
void Xuat(char *fn,int a[],int n)
{
	FILE*f;
	f=fopen(fn,"at");
	fprintf(f,"\nMang sau khi sap xep tang la:\n");
	for(int i=0;i<n;i++)
	{
		fprintf(f,"%4d",a[i]);
	}
	fclose(f);
}
int main()
{
	int a[MAX],n;
	NhapN(n);
	GhiFile("input.txt",a,n);
	DocFile("input.txt",a,n);
	GhiMax("output.txt",a,n);
	GhiChanLe("output.txt",a,n);
	SX(a,n);
	Xuat("output.txt",a,n);
}

