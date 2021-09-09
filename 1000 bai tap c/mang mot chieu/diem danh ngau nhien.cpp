#include<stdio.h>
#include <curses.h>
#include<time.h>
#include <unistd.h>
#include<stdlib.h>
int KTTrung(int a[],int u,int x)
{
	for(int i=0;i<u;i++)
	{
		if(a[i]==x)
			return 1;
	}
	return 0;
}
void NhapN(int &n)
{
	printf("\nNhap so luong mang:");
	scanf("%d",&n);
}
void TaoMang(int a[],int n,int b[],int &k)
{
	k=0;
	for(int i=0;i<9999;i++)
	{
		a[i]=rand()%n+1;
		if(KTTrung(a,i,a[i])==0)
		{
			b[k++]=a[i];
			if(k==n)
				break;	
		}		
	}
}
void Xuat(int b[],int &i,int k)
{
	if(i>k)
	{
		printf("\nHet Mang !!!");
		system("pause");
	}
	else
		printf("\n%4d",b[i++]);	
}
int main()
{
	int a[9999],n,b[300],i=0,k;
	char chon;
	srand(time(NULL));
	NhapN(n);
	TaoMang(a,n,b,k);
	t:Xuat(b,i,k);
	printf("\nBan co muon tiep tuc khong,neu co bam phim c");
	chon=getch();
	if(chon=='C'||chon=='c')
	goto t;
}
