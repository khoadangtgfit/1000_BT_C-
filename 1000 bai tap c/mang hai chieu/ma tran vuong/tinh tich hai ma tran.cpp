#include<iostream>
using namespace std;
#define MAX 100
void NhapKT(int &n)
{
    do{
        cout<<"\nNhap kich thuoc cua ma tran vuong:";
        cin>>n;
        if(n<1||n>MAX)
            cout<<"\nNhap kich thuoc khong hop le,yeu cau nhap lai!!! ";
    }while(n<1||n>MAX);
}
void NhapMang(int a[MAX][MAX],int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"\nNhap a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
}
void XuatMang(int a[][MAX],int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void TichHaiMaTran(int a[][MAX],int n,int b[][MAX],int c[][MAX] )
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
int main()
{
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],n;
    NhapKT(n);
    NhapMang(a,n);
    NhapMang(b,n);
    cout<<"\nMang A:"<<endl;
    XuatMang(a,n);
    cout<<"\nMang B:"<<endl;
    XuatMang(b,n);
    TichHaiMaTran(a,n,b,c);
    XuatMang(c,n);
}