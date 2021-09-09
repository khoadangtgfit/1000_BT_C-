#include<iostream>
using namespace std;
void NhapMang(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\nNhap a["<<i<<"]:";
        cin>>*(a+i);
    }
}
void XuatMang(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<*(a+i);
    }
}
void ThemPhanTu(int *&a,int &n,int phantuthem,int vitrithem)
{
    n++;
    a=(int*)realloc(a,n*sizeof(int ));
    for(int i=n-1;i>vitrithem;i--)
    {
        a[i]=a[i-1];
    }
    a[vitrithem]=phantuthem;
}
void XoaPhanTu(int *&a,int &n,int vitrixoa)
{
    for(int i=vitrixoa;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a=(int*)realloc(a,n--*sizeof(int));
}
int main()
{
    int n,vitrithem,phantuthem,vitrixoa;
    cout<<"\nNhap so luong phan tu cua mang:";
    cin>>n;
    int *a=new int[n];
    NhapMang(a,n);
    XuatMang(a,n);
    // cout<<"\nMoi nhap gia tri can them:";
    // cin>>phantuthem;
    // cout<<"\nMoi nhap vi tri can them:";
    // cin>>vitrithem;
    // ThemPhanTu(a,n,phantuthem,vitrithem);
    // cout<<"\nMang sau khi them phan tu "<<phantuthem<<" vao vi tri "<<vitrithem<<" la:\n";
    // XuatMang(a,n);
    cout<<"\nNhap vi tri can xoa:";
    cin>>vitrixoa;
    XoaPhanTu(a,n,vitrixoa);
    cout<<"\nMang sau khi xoa phan tu tai vi tri "<<vitrixoa<<" la:\n";
    XuatMang(a,n);
}