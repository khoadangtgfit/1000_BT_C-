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
void TongCacPhanTuNamTrenDuongCheoChinh(int a[][MAX],int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
        s+=a[i][i];
    cout<<"\nTong cac phan tu nam tren duong cheo chinh ="<<s;
}
void TongCacPhanTuNamTrenDuongCheoPhu(int a[][MAX],int n)
{
    int s=0,t=n;
    for(int i=1;i<=n;i++)
        s+=a[i][t--];
    cout<<"\nTong cac phan tu nam tren duong cheo phu ="<<s;
}
int main()
{
    int a[MAX][MAX],n;
    NhapKT(n);
    NhapMang(a,n);
    XuatMang(a,n);
    TongCacPhanTuNamTrenDuongCheoChinh(a,n);
    TongCacPhanTuNamTrenDuongCheoPhu(a,n);
}