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
	pFile=fopen("input.txt","at"); // M? file ra . ? d�y ta ph?i d? d?nh d?ng file l� "at" hay l� d? "a" cung du?c . Ch?c nang l� m? t?p tin v� ghi ti?p d? li?u c?n n?p v�o cu?i t?p tin . Ta kh�ng th? x�i l?i d?nh d?ng "wt" v� khi d? li?u m?i v�o th� t?t c? d? li?u cu s? b? x�a di h?t .
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			dem++; // �?m s? lu?ng c�c gi� tr? ch?n trong m?ng .
		}
		else
		{
			dem1++; // �?m s? lu?ng c�c gi� tr? l? trong m?ng .
		}
	}
	fprintf(pFile,"Cau b:%d\t%d\n",dem,dem1); // Ghi d? li?u v�o file .
	fclose(pFile); // ��ng file .
}

int main()
{
	int a[MAX],n;
	Nhapn(n);
	GhiFile(a,n);
	DocFile(a,n);
	TimMax(a,n);
}
