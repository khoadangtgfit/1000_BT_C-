#include<stdio.h>
#include<conio.h>
#include<math.h>
void DocFile(int a[],int &n)
{
	FILE*f;
	f=fopen("input.txt","rt");
	if(f==NULL)
		printf("\nKhong the mo file!!!");
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++)
	{
		fscanf(f,"%d",&a[i]);
	}
	fclose(f);
}
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
bool KTNT(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
void SoNguyenTo(int a[],int n)
{
	FILE*f;
	f=fopen("input.txt","a");
	fprintf(f,"\nSo nguyen to:");
	for(int i=0;i<n;i++)
	{
		if(KTNT(a[i]))
		fprintf(f,"%4d",a[i]);
	}
	fclose(f);
}
int main()
{
	int a[100],n;
	DocFile(a,n);
	XuatMang(a,n);
	SoNguyenTo(a,n);
}

