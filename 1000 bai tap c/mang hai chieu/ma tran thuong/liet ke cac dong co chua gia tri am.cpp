#include<iostream>
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
void Xuat1Dong(int a[][MAX],int k,int m)
{
    for(int j=1;j<=m;j++)
    {
        cout<<"\t"<<a[k][j];
    }
}
void XuatCacDongCoPTAm(int a[][MAX],int n,int m)
{
    cout<<"\ncac dong co phan tu am :"<<endl;
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]<0)
                flag=1;
        }
        if(flag==1){
            cout<<"\nDong "<<i<<": ";
            Xuat1Dong(a,i,m);
            }
    }
}
int main()
{
    int a[MAX][MAX],n,m;
    NhapKT(n,m);
    NhapMang(a,n,m);
    XuatMang(a,n,m);
    XuatCacDongCoPTAm(a,n,m);
}