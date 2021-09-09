#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
struct Diem
{
    double TungDo;
    double HoanhDo;
};
void NhapDiem(Diem &a)
{
    cout<<"\nNhap hoanh do:";
    cin>>a.HoanhDo;
    cout<<"\nNhap tung do:";
    cin>>a.TungDo;
}
void XuatDiem(Diem a)
{
    cout<<"("<<a.HoanhDo<<","<<a.TungDo<<")";
}
struct DuongTron
{
    Diem I;
    double r;
};
void NhapDuongTron(DuongTron &a)
{
    cout<<"\nNhap Toa Do Tam:";
    NhapDiem(a.I);
    cout<<"\nNhap Ban Kinh:"; cin>>a.r;
}
void XuatDuongTron(DuongTron a)
{
    cout<<"(("<<a.I.HoanhDo<<","<<a.I.TungDo<<"),"<<a.r<<")";
}
double TinhChuVi(DuongTron a)
{
    return 2*PI*a.r;
}
double TinhDienTichDuongTron(DuongTron a)
{
    return PI*a.r*a.r;
}
double TinhKhoangCachHaiDiem(Diem a,Diem b)
{
    return sqrt(pow(a.HoanhDo-b.HoanhDo,2)+pow(a.TungDo-b.TungDo,2));
}
bool KT(Diem x,DuongTron a)
{
    if(TinhKhoangCachHaiDiem(x,a.I)==a.r)
        return true;
    else
    {
        return false;
    }
    
}
int ViTriTuongDoi(DuongTron a,DuongTron b)
{
    if(TinhKhoangCachHaiDiem(a.I,b.I)>(a.r+b.r))
        return 1;
    else if(TinhKhoangCachHaiDiem(a.I,b.I)==(a.r+b.r))
        return 0;
    else
        return -1;
}
int main()
{
    DuongTron a,b;
    Diem x;
    NhapDuongTron(a);
    XuatDuongTron(a);
    NhapDuongTron(b);
    XuatDuongTron(b);
    cout<<"\nChu vi duong tron a="<<TinhChuVi(a);
    cout<<"\nDien tich duong tron a="<<TinhDienTichDuongTron(a);
    cout<<"\nKhoang cac hai tam cua duong tron a va b="<<TinhKhoangCachHaiDiem(a.I,b.I);
    cout<<"\nNhap diem x:";
    NhapDiem(x);
    if(KT(x,a)==true)
        cout<<"\nDiem x thuoc duong trong a!!!";
    else
    {
        cout<<"\nDiem x khong thuoc duong trong a!!!";
    }
    int k=ViTriTuongDoi(a,b);
    if(k==1)
        cout<<"\nDuong tron a khong cat duong tron b!!!";
    else if(k==0)
        cout<<"\nDuong tron a tiep xuc duong tron b!!!";
    else
    {
        cout<<"\nDuong tron a cat duong tron b!!!";
    }
    
    
}