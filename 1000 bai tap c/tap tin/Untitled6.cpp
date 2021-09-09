#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100
void NhapKT(int &n,int &m)
{
	t:printf("\nNhap so dong:");
	scanf("%d",&n);
	if(n<=0||n>MAX)
	{
		printf("\nNhap so dong khong hop le!!!");
		goto t;
	}
	k:printf("\nNhap so cot:");
	scanf("%d",&m);
	if(m<=0||m>MAX)
	{
		printf("\nNhap so cot khong hop le!!!");
		goto k;
	}
}
void GhiFile(char *fn,int a[][MAX],int n,int m)
{
	FILE*f;
	f=fopen(fn,"wt");
	fprintf(f,"%4d%4d\n",n,m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=rand()%100;
			fprintf(f,"%4d",a[i][j]);
		}
		fprintf(f,"\n");
	}
	fclose(f);
}
void TimMax(char *fn,int a[][MAX],int n,int m)
{
	FILE*f;
	f=fopen(fn,"wt");
	int max=a[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>max)
				max=a[i][j];
		}
	}
	fprintf(f,"\nMAX:%d",max);
	fclose(f);
}
int KTNT(int &n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void SoNT(char *fn,int a[][MAX],int n,int m)
{
	FILE*f;
	f=fopen(fn,"at");
	fprintf(f,"\nSo nguyen to:");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(KTNT(a[i][j])==1)
				fprintf(f,"%4d",a[i][j]);
		}
	}
}
int main()
{
	int a[MAX][MAX],n,m;
	NhapKT(n,m);
	GhiFile("input.txt",a,n,m);
	TimMax("ouput.txt",a,n,m);
	SoNT("ouput.txt",a,n,m);
}
