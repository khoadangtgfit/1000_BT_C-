#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[30];
    strcpy(s1,"khoa la thang ngu");
    cout<<s1<<endl;
    char s2[20]="",s3[20]="";
    strncpy(s2,s1,5);
    cout<<s2<<endl;
    strupr(s1);
    cout<<s1<<endl;
    strcat(s3,s1);
    strcat(s3,s2);
    cout<<s3<<endl;
}