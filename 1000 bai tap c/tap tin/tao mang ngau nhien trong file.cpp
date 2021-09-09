#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void TaoFile(char *s,int a[],int &n)
{
    FILE*f=fopen(s,"wt");
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        fprintf(f,"%4d",a[i]);
    }
    fclose(f);
}
void DocFile(char *s,int a[],int n)
{
    FILE*f=fopen(s,"rt");
    for(int i=0;i<n;i++)
    {
        fscanf(f,"%d",&a[i]);
        printf("%4d",a[i]);
    }
}
int main()
{
    int a[100],n;
    scanf("%d",&n);
    TaoFile("mang.txt",a,n);
    DocFile("mang.txt",a,n);
}