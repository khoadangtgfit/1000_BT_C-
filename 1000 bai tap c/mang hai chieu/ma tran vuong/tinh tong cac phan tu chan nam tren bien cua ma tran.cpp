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
void TongPhanTuChanCuaBien(int a[][MAX],int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i][1]%2==0)
            s+=a[i][1];
        if(a[i][n]%2==0)
            s+=a[i][n];
    }
    for(int j=2;j<=n-1;j++)
    {
        if(a[1][j]%2==0)
            s+=a[1][j];
        if(a[n][j]%2==0)
            s+=a[n][j];
    }
    cout<<"\nTong cac phan tu chan tren bien: "<<s;
}
int main()
{
    int a[MAX][MAX],n;
    NhapKT(n);
    NhapMang(a,n);
    XuatMang(a,n);
    TongPhanTuChanCuaBien(a,n);
}