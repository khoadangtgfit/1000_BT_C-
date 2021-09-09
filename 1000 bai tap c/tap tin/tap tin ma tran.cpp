#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100
void PhatSinhMang(char *fn,int a[][MAX],int n,int m)
{
	FILE*f=fopen(fn,"wt");
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
}
void DocFile(char *fn,int a[][MAX],int n,int m)
{
	FILE*f=fopen(fn,"rt");
	fscanf(f,"%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			fscanf(f,"%d",&a[i][j]);
		}
	}
}
void XuatMang(int a[][MAX],int n,int m)
{
	printf("%4d%4d\n",n,m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int a[MAX][MAX],n=5,m=6;
	PhatSinhMang("input.txt",a,n,m);
	DocFile("input.txt",a,n,m);
	XuatMang(a,n,m);
}

