#include<iostream>
#include<string.h>
using namespace std;
void DemKyTu(char s[],int n)
{
    int d1=0,d2=0,d3=0;
    for(int i=0;i<n;i++)
    {
        if(islower(s[i]))
            d1++;
        if(isupper(s[i]))
            d2++;
        if(isalpha(s[i]))
            d3++;

    }
    cout<<"\nSo ky tu thuong trong chuoi="<<d1;
    cout<<"\nSo ky tu hoa trong chuoi="<<d2;
    cout<<"\nSo ky tu khong phai la chu cai trong chuoi="<<d3;
}
int main()
{
    char s[100];
    cout<<"\nNhap chuoi:";
    gets(s);
    int n=strlen(s);
    cout<<"\nDo dai:"<<n;
    DemKyTu(s,n);

}