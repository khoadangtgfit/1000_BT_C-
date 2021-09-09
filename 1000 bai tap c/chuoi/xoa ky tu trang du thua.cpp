#include<iostream>
#include<string.h>
using namespace std;
void Xoa(char *s,int &n,int k)
{
    for(int i=k;i<n;i++)
    {
        s[i]=s[i+1];
    }
    n--;
}
void XoaKhoangTrangDuThua(char *s,int n)
{
    for(int i=0;i<n;i++)
    {
        if(s[i]==' '&s[i+1]==' '){
            Xoa(s,n,i);
            i--;
        }
    }
    if(s[0]==' ')
        Xoa(s,n,0);
    if(s[n-1]==' ')
         Xoa(s,n,n-1);;
}
int main()
{
    char s[100],n;
	gets(s);
	n=strlen(s);
	XoaKhoangTrangDuThua(s,n);
	puts(s);
	// ChuanHoa(a,n);
	// puts(a);
	printf("do dai:%d",strlen(s));

}