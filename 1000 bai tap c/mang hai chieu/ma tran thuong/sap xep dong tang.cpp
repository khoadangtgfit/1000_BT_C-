#include<iostream>
#include<conio.h>
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
void swap(int &a,int &b)
{
    int t=a; a=b; b=t;
}
void SapXepDongTang(int a[][MAX],int n,int m,int k)
{
    do{
        cout<<"\nNhap dong can sap xep tang vao:";
        cin>>k;
        if(k<1||k>n)
            cout<<"\nNhap dong ko hop le,yeu cau nhap lai!!! ";
    }while(k<1||k>n);
    for(int i=1;i<m;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            if(a[k][i]>a[k][j])
                swap(a[k][i],a[k][j]);
        }
    }
}
int main()
{
    int a[MAX][MAX],n,m,d1,d2,k;
    int chon;
    NhapKT(n,m);
    NhapMang(a,n,m);
    XuatMang(a,n,m);
    t:SapXepDongTang(a,n,m,k);
     XuatMang(a,n,m);
    cout<<"\nBan co muon tiep tuc ko neu co bam phim c, neu khong bam phim bat ky khac!!!";
    chon=getch();
    if(chon=='c'||chon=='C')
        goto t;
}