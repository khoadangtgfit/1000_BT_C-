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
// void Xoa1PT(int a[][MAX],int &m,int d,int k)
// {
//     for(int i=k;i<=m;i++)
//     {
//         a[d][i]=a[d][i+1];
//     }
//     m--;
// }
void Xoa1Dong(int a[][MAX],int &n,int &m,int d1)
{
    int t=m,d=0;
    do{
        cout<<"\nNhap dong can xoa(1<=d1<="<<n<<"):";
        cin>>d1;
        if(d1<1||d1>n)
            cout<<"\nNhap dong can xoa khong hop le,yeu cau nhap lai!!! ";
    }while(d1<1||d1>n);
    for(int i=d1;i<n;i++ )
	{
		for (int j=1; j<=m;j++)
		{
			a[i][j] = a[i+1][j];
		}
	}
	n--;
}
int main()
{
    int a[MAX][MAX],n,m,d1;
    NhapKT(n,m);
    NhapMang(a,n,m);
    XuatMang(a,n,m);
    Xoa1Dong(a,n,m,d1);
    // Xoa1PT(a,m,1,2);
    XuatMang(a,n,m);
}