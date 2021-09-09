#include<iostream>
#include<cstdlib>
#include<math.h>
#include<string.h>
using namespace std;
int KTNT(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int KTSo(int n)
{
    if('0'<=n&&n<='9')
        return 1;
    return 0;
}
void LocNT(char s[],int n,char s1[])
{
    int t=0;
    for(int i=t;i<=n;i++)
    { 
        int k=0;
        char s1[] = {0};
        while(KTSo(s[i])==1){
            s1[k++]=s[i];
            i++;
        }
        if(KTNT(atoi(s1))==1)
            cout<<atoi(s1)<<"\t";
        t=i;
    }
}
int main()
{
    char s[100],s1[20];
    cout<<"\nNhap chuoi:";
    gets(s);
    int n=strlen(s);
    LocNT(s,n,s1);
}