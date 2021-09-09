#include<iostream>
#include<stdlib.h>
using namespace std;
void NhapMaTran(int **&a,int n)
{
    a=new int*[n];
    for(int i=0;i<n;i++)
    {
        *(a+i)=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(a+i)+j)=-50+rand()%151;
        }
    }
}
void XuatMaTran(int **a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*(*(a+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
int **CongHaiMaTran(int **M1,int **M2,int n)
{
    int **M3=new int*[n];
    for(int i=0;i<n;i++)
    {
        *(M3+i)=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(M3+i)+j)=*(*(M2+i)+j)+*(*(M1+i)+j);
        }
    }
    return M3;
}
int main()
{
   int **a,n=5;
   int **M2,**M1;
   NhapMaTran(M1,n);
   NhapMaTran(M2,n);
   cout<<"\n========M1:"<<endl;
   XuatMaTran(M1,n);
   cout<<"\n========M2:"<<endl;
   XuatMaTran(M2,n);
   cout<<"\nSau khi cong hai ma tran:"<<endl;
   int **M3=CongHaiMaTran(M1,M2,n);
   XuatMaTran(M3,n);
}