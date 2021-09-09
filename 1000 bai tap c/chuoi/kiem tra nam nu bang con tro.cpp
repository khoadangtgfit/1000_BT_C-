#include<iostream>
#include<string.h>
using namespace std;
int KiemTraGioiTinh(char *s)
{
    char s1[10];
    int k=0,t=0;
    int n=strlen(s);
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==';'){
            k=i;
            break;
        }
    }
    for(int i=k+1;i<n;i++)
    {
        s1[t++]=s[i];
    }
    s1[t]='\0';
    if(strcmp(s1,"male")==0)
        return 1;
    else
        return 0;
}
int main()
{
    char **ds=new char*[5];
    for(int i=0;i<5;i++)
    {
        *(ds+i)=new char[255];
    }
    strcpy(*(ds+0),"SV0;dang phuoc khoa;male");
    strcpy(*(ds+1),"SV1;putin;male");
    strcpy(*(ds+2),"SV2;obama;male");
    strcpy(*(ds+3),"SV3;dang phuoc khoa;female");
    strcpy(*(ds+4),"SV4;dang phuoc khoa;female");
    for(int i=0;i<5;i++)
    {
        cout<<*(ds+i)<<endl;
    }
    int d1=0,d2=0;
    for(int i=0;i<5;i++){
    if(KiemTraGioiTinh(*(ds+i))==1)
        d1++;
    else
    {
        d2++;
    }
    
    }
    cout<<"\nSo sinh vien nam co trong danh sach la "<<d1<<endl;
    cout<<"\nSo sinh vien nu co trong danh sach la "<<d2<<endl;
}