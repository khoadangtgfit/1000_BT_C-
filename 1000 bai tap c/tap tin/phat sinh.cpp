#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100
void Nhapn(int &n)
{
	t:printf("Nhap so luong phan tu cua mang :");
	scanf("%d",&n);
	if(n<=0||n>MAX)
	{
		printf("Nhap so luong phan tu khong hop le!yeu cau nhap lai!");
		goto t;
	}
}
void GhiFile(int a[],int n)
{
	FILE*f;
	f=fopen("input.txt","wt");
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%101;
		fprintf(f,"%4d",a[i]);
	}
	fclose(f);
}
void DocFile(int a[],int n)
{
	FILE *f;
	f=fopen("input.txt","rt");
	for(int i=0;i<n;i++)
	{
		fscanf(f,"%d",a[i]);
		printf("a[%d]=%d\n",i,a[i]);
	}
	fclose(f);
}
void TimMax(int a[],int n)
{
	FILE*f;
	f=fopen("input.txt","at");
	int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];	
	}
	fprintf(f,"\nMAX:%d",max);
}
void DemChanLe(int a[],int n)
{
	int dem=0,dem1=0;
	FILE*pFile;
	pFile=fopen("input.txt","at"); // M? file ra . ? dây ta ph?i d? d?nh d?ng file là "at" hay là d? "a" cung du?c . Ch?c nang là m? t?p tin và ghi ti?p d? li?u c?n n?p vào cu?i t?p tin . Ta không th? xài l?i d?nh d?ng "wt" vì khi d? li?u m?i vào thì t?t c? d? li?u cu s? b? xóa di h?t .
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			dem++; // Ð?m s? lu?ng các giá tr? ch?n trong m?ng .
		}
		else
		{
			dem1++; // Ð?m s? lu?ng các giá tr? l? trong m?ng .
		}
	}
	fprintf(pFile,"Cau b:%d\t%d\n",dem,dem1); // Ghi d? li?u vào file .
	fclose(pFile); // Ðóng file .
}

int main()
{
	int a[MAX],n;
	Nhapn(n);
	GhiFile(a,n);
	DocFile(a,n);
	TimMax(a,n);
}
