#include<iostream>
#include<math.h>
using namespace std;
#define MAX 100
void NhapKT(int &n,int &m)
{
    do{
        cout<<"\nNhap so dong:";
        cin>>n;
        if(n<1||n>MAX)
            cout<<"\nNhap so dong khong hop le,yeu cau nhap lai!!! ";
    }while(n<1||n>MAX);
    do{
        cout<<"\nNhap so cot:";
        cin>>m;
        if(m<1||m>MAX)
            cout<<"\nNhap so cot khong hop le,yeu cau nhap lai!!! ";
    }while(m<1||m>MAX);
}
void NhapMang(int a[MAX][MAX],int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"\nNhap a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
}
void XuatMang(int a[][MAX],int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void Xuat1cot(int a[][MAX],int n,int k)
{
    for(int i=1;i<=n;i++)
    {
        cout<<a[i][k]<<"\t";
    }
    cout<<endl;
}
void XuatCacCotTangDan(int a[][MAX],int n,int m)
{
    for(int j=1;j<=m;j++)
    {
        int flag=1;
        for(int i=1;i<=n;i++)
        {
            if(a[i-1][j]>=a[i][j]){
                flag=0;
                break;
            }

        }
        if(flag==1){
            cout<<"cot "<<j<<":\t";
            Xuat1cot(a,n,j);
            cout<<endl;
        }
    }
}
int main()
{
    int a[MAX][MAX],n,m;
    NhapKT(n,m);
    NhapMang(a,n,m);
    XuatMang(a,n,m);
    cout<<"\nCac cot tang dan :\n";
    XuatCacCotTangDan(a,n,m);
}