#include<iostream>
// #include<stdlib.h>
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
int MAX(int **a,int n)
{
    int max=*(*(a+0)+0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(*(*(a+i)+j)>max)
                max=*(*(a+i)+j);
        }
    }
    return max;
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
int main()
{
   int **a,n=5;
   NhapMaTran(a,n);
   XuatMaTran(a,n);
   cout<<"\nPhan tu max:"<<MAX(a,n);
}