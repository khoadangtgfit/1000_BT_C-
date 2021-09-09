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
int DemTrung(int a[][MAX],int n,int m,int x)
{
    int d=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==x)
                d++;
        }
    }
    return d;
}
int XuatPTXuatHienNhieuNhat(int a[][MAX],int n,int m)
{
    int max=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(DemTrung(a,n,m,a[i][j])>max)
                max=DemTrung(a,n,m,a[i][j]);
        }
    }
    return max;
}
void XuatPT(int a[][MAX],int n,int m)
{
    cout<<"\nPhan tu co so lan xuat hien nhieu nhat :";
    int k=XuatPTXuatHienNhieuNhat(a,n,m);
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=1;j<=m;j++)
        {
            if(DemTrung(a,n,m,a[i][j])==k){
                 cout<<"\t"<<a[i][j];
                 break;
            }
            break;
        }  
    }
    cout<<"\n voi so lan xuat hien la "<<k;
}
int main()
{
    int a[MAX][MAX],n,m;
    NhapKT(n,m);
    NhapMang(a,n,m);
    XuatMang(a,n,m);
    XuatPT(a,n,m);
}