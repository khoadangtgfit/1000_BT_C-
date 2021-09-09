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
void NhapDongCanHoanVi(int n,int m,int &d1,int &d2)
{
    do{
        cout<<"\nNhap dong thu nhat can hoan vi(1<=n<="<<n<<"):";
        cin>>d1;
        if(d1<1||d1>n)
            cout<<"\nNhap sai,yeu cau nhap lai!!! ";
    }while(d1<1||d1>n);
    do{
        cout<<"\nNhap dong thu 2 can hoan vi (1<=n<="<<n<<"):";
        cin>>d2;
        if(d2<1||d2>n)
            cout<<"\nNhap sai,yeu cau nhap lai!!! ";
    }while(d2<1||d2>n);
}
void HoanViHaiDong(int a[][MAX],int n,int m,int d1,int d2)
{
    for(int i=1;i<=n;i++)
    {
        int temp=a[d1][i];
        a[d1][i]=a[d2][i];
        a[d2][i]=temp;
    }
}
int main()
{
    int a[MAX][MAX],n,m,d1,d2;
    NhapKT(n,m);
    NhapMang(a,n,m);
    XuatMang(a,n,m);
    NhapDongCanHoanVi(n,m,d1,d2);
    HoanViHaiDong(a,n,m,d1,d2);
    XuatMang(a,n,m);
}