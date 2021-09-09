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
int KTDX(int a[][MAX],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i][n+1-i]!=a[n+1-i][i])
            return 0;
    }
    return 1;
}
int main()
{
    int a[MAX][MAX],n;
    NhapKT(n);
    NhapMang(a,n);
    XuatMang(a,n);
    int dx=KTDX(a,n);
    if(dx==0)
        cout<<"\nMa tran vuong khong doi xung qua duong cheo chinh!!!";
    else
    {
        cout<<"\nMa tran vuong doi xung qua duong cheo chinh!!!";
    }
    
}