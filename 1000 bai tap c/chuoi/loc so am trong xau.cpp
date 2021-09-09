#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int KTSo(int n)
{
    if('0'<=n&&n<='9')
        return 1;
    return 0;
}
void LocSoAmTrongXau(char s[],int n,char s1[])
{
    int t=0;
    for(int i=t;i<=n;i++)
    { 
        int k=0;
        char s1[] = {0};
        if(s[i-1]=='-'&&(KTSo(s[i])==1)){
            while(KTSo(s[i])==1){
                s1[k++]=s[i];
                i++;
        }
            cout<<"-"<<atoi(s1)<<"\t";
        t=i;
    }
}
}
int main()
{
    char s[100],s1[20];
    cout<<"\nNhap chuoi:";
    gets(s);
    int n=strlen(s);
    LocSoAmTrongXau(s,n,s1);
}