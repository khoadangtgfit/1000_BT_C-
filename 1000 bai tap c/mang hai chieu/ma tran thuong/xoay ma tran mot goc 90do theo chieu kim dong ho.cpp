#include<iostream>
using namespace std;
#define MAX 100
void NhapKT(int &n,int &m)
{
    do{
        cout<<"\nNhap so n:";
        cin>>n;
        if(n<0||n>MAX)
            cout<<"\nNhap so n khong hop le,yeu cau nhap lai!!! ";
    }while(n<0||n>MAX);
    do{
        cout<<"\nNhap so m:";
        cin>>m;
        if(m<0||m>MAX)
            cout<<"\nNhap so m khong hop le,yeu cau nhap lai!!! ";
    }while(m<0||m>MAX);
}
void NhapMang(int a[MAX][MAX],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"\nNhap a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
}
void XuatMang(int a[][MAX],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void XoaMaTranGoc90Do(int a[][MAX],int n,int m)
{
    for(int j=0;j<m;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
}
void Swap(int &a,int &b)
{
    int t=a;a=b;b=t;
}
void SapXepKhongDungMangPhu(int a[][MAX], int n, int m)
{
	int k = n * m;
	for(int i = 0; i < k - 1; i++)
	{
		for(int j = i + 1; j < k; j++)
		{
			if(a[i / m][i % m] > a[j / m][j % m])
			{
				Swap(a[i / m][i % m], a[j / m][j % m]);
			}
		}
	}
}
int main()
{
    int a[MAX][MAX],n,m;
    NhapKT(n,m);
    NhapMang(a,n,m);
    XuatMang(a,n,m);
    cout<<"===================="<<endl;
    SapXepKhongDungMangPhu(a,n,m);
    XuatMang(a,n,m);
    // XoaMaTranGoc90Do(a,n,m);
}