#include<iostream>
#include<string.h>
using namespace std;
void TachTrai(char *s,char *&s1,char *&s2)
{
    char *p=strchr(s,' ');
    int k=p-s;
    cout<<*strchr(s,' ');
    strncpy(s1,s,k);
    p=p+1;
    s2=p;
}
int main()
{
    char *s=new char[100];
    strcpy(s,"dang phuoc khoa");
    char *s1=new char[100];
    char *s2=new char[100];
    TachTrai(s,s1,s2);
    cout<<s1<<endl;
    cout<<s2<<endl;

}