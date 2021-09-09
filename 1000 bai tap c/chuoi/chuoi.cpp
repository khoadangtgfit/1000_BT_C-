#include<stdio.h>
#include<string.h>
void NhapChuoi(char s[])
{
	printf("\nNhap chuoi:");
	gets(s);
}
void XuatChuoi(char s[])
{
	puts(s);
}
void SoSanh(char s1[],char s2[])
{
	if(strcmp(s1,s2)>0)
		printf("\nChuoi s1 lon hon s2");
	if(strcmp(s1,s2)==0)
		printf("\nChuoi s1 bang s2");
	if(strcmp(s1,s2)<0)
		printf("\nChuoi s1 nho hon s2");
}
void NoiChuoi(char s1[],char s2[])
{
	strcat(s1,s2);
}
int main()
{
	char s1[100],s2[100];
	NhapChuoi(s1);
	NhapChuoi(s2);
	int n1=strlen(s1);
	int n2=strlen(s2);
	printf("\nChuoi 1:");
	XuatChuoi(s1);
	printf("\nChuoi 2:");
	XuatChuoi(s2);
	printf("\nDo dai chuoi 1=%d",n1);
	printf("\nDo dai chuoi 2=%d",n2);
	SoSanh(s1,s2);
	printf("\nSau khi noi chuoi 1 va chuoi 2 ta duoc:");
	NoiChuoi(s1,s2);
	XuatChuoi(s1);
}
