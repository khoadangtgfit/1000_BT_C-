#include<iostream>
#include<math.h>
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
double KhoangCachGiuaHaiDiem(Diem x,Diem y)
{
    return sqrt(pow(x.HoanhDo-y.HoanhDo,2)+pow(x.TungDo-y.TungDo,2));
}
Diem DiemDoiXungQuaGocToaDo(Diem a)
{
    Diem c;
    c.HoanhDo=-a.HoanhDo;
    c.TungDo=-a.TungDo;
    return c;
}
Diem DiemDXQuaTrucHoanh(Diem a)
{
    Diem c;
    c.HoanhDo=a.HoanhDo;
    c.TungDo=-a.TungDo;
    return c;
}
Diem DiemDXQuaTrucTung(Diem a)
{
    Diem c;
    c.HoanhDo=-a.HoanhDo;
    c.TungDo=a.TungDo;
    return c;
}
Diem DXPhanGiac1(Diem a)
{
    Diem c;
    c.HoanhDo=a.TungDo;
    c.TungDo=a.HoanhDo;
    return c;
}
Diem DXPhanGiac2(Diem a)
{
    Diem c;
    c.HoanhDo=-a.TungDo;
    c.TungDo=a.HoanhDo;
    return c;
}
int main()
{
    Diem a,b;
    NhapDiem(a);
    NhapDiem(b);
    cout<<"\nKhoang cach giua hai diem a va b="<<KhoangCachGiuaHaiDiem(a,b);
    Diem c=DiemDoiXungQuaGocToaDo(a);
    cout<<"\nDiem doi xung vs diem a qua goc toa do la:";
    XuatDiem(c);
    Diem d=DiemDXQuaTrucHoanh(a);
    cout<<"\nDiem doi xung vs diem a qua truc hoanh la:";
    XuatDiem(d);
    Diem e=DiemDXQuaTrucTung(a);
    cout<<"\nDiem doi xung vs diem a qua truc tung:";
    XuatDiem(e);
    Diem f=DXPhanGiac1(a);
    cout<<"\nDiem doi xung vs diem a qua phan giac 1(x=y):";
    XuatDiem(f);
    Diem g=DXPhanGiac2(a);
    cout<<"\nDiem doi xung vs diem a qua phan giac 2(x=-y):";
    XuatDiem(g);
}
