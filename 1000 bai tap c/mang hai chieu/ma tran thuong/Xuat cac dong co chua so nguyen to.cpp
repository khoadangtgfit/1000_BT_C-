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
int KTNT(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void Xuat1Dong(int a[][MAX],int k,int m)
{
    for(int j=1;j<=m;j++)
    {
        cout<<a[k][j]<<"\t";
    }
    cout<<endl;
}
void XuatCacDongCoChuaSoNguyenTo(int a[][MAX],int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=1;j<=m;j++)
        {
            if(KTNT(a[i][j])==1){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"Dong "<<i<<":\t";
            Xuat1Dong(a,i,m);
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
    cout<<"\nCac dong co chua pt la so nguyen to:\n";
    XuatCacDongCoChuaSoNguyenTo(a,n,m);
}