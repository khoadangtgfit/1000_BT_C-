#include<stdio.h>
#include<cstring>
int Xoa(char a[],int &n,int k)
{
	for(int i=k;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
}
void XoaKyTuTrangDuThua(char a[],int n)
{	
	for(int i=0;i<n;i++)
	{
		if(a[i]==' '&&a[i+1]==' '){
			Xoa(a,n,i);
			i--;
		}
	}
	if(a[0]==' ')
		Xoa(a,n,0);
	if(a[n-1]==' ')
		Xoa(a,n,n-1);
}
void ChuanHoa(char a[],int n)
{
	if(a[0]>'a'&&a[0]<'z')
		a[0]-=32;
	for(int i=1;i<n;i++)
	{
		if(a[i]>'A'&&a[i]<'Z')
			a[i]+=32;
		if(a[i]==' '&&(a[i+1]>'a'&&a[i+1]<'z')){
			a[i+1]-=32;
			i++;
	}
	}
}
int main()
{
	char a[100],n;
	gets(a);
	n=strlen(a);
	XoaKyTuTrangDuThua(a,n);
	puts(a);
	// ChuanHoa(a,n);
	// puts(a);
	printf("do dai:%d",strlen(a));
	
}
