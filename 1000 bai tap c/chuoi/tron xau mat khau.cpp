#include<iostream>
#include<string.h>
using namespace std;
void GopMangXenKe(char s[],int&p,char s1[],int n,char s2[],int m)
{
    for(int i=p=0;i<m||i<n;i++)
    {
        if(i<n)
            s[p++]=s1[i];
        if(i<m)
            s[p++]=s2[i];
    }
}
int main()
{
    char s[100],s2[100],s1[100];
    int m,n,p;
    cout<<"\nNhap chuoi S1:";
    gets(s1);
    n=strlen(s1);
    cout<<"\nNhap chuoi S2:";
    gets(s2);
    m=strlen(s2);
    puts(s1);
    puts(s2);
    cout<<"\nSau khi gop xen ke giua chuoi 2 va chuoi 1:";
    GopMangXenKe(s,p,s1,n,s2,m);
    puts(s);
}