#include<stdio.h>
#include<string.h>
void ChuanHoa(char s[],int n)
{
	if(s[0]>'a'&&s[0]<'z')
		s[0]-=32;
	for(int i=1;i<n;i++)
	{
		if(s[i]!=' '&&s[i]>'A'&&s[i]<'Z')
			s[i]+=32;
		if(s[i]==' '&&s[i+1]>'a'&&s[i+1]<'z')
		{
			s[i+1]-=32;
			i++;
		}
			
	}
}
void Xoa(char s[],int &n,int k)
{
	for(int i=k;i<=n;i++)
	{
		s[i]=s[i+1];
	}
	n--;
}
void XoaKyTuTrangDuThua(char s[],int &n)
{
	for(int i=0;i<n;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			Xoa(s,n,i);
			i--;
		}
	}
	if(s[0]==' ')
		Xoa(s,n,0);
	if(s[n-1]==' ')
	   	s[n-1]='\0';
}
int main()
{
	char s[]="    dang           phuoc       khoa";
	int n=strlen(s);
	ChuanHoa(s,n);
	printf("\nSau khi chuan hoa:");
	puts(s);
	XoaKyTuTrangDuThua(s,n);
	printf("\nSau khi xoa ky tu trang du thua:");
	puts(s);
	printf("\ndo dai:%d",strlen(s));
}
