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
struct TamGiac
{
    Diem a,b,c;
};
void NhapTamGiac(TamGiac &X)
{
    cout<<"\nNhap Diem A:";
    NhapDiem(X.a);
    cout<<"\nNhap Diem B:";
    NhapDiem(X.b);
    cout<<"\nNhap Diem C:";
    NhapDiem(X.c);
}
void XuatTamGiac(TamGiac X)
{
    cout<<"("; XuatDiem(X.a); cout<<";";XuatDiem(X.b);cout<<";"; XuatDiem(X.c); cout<<")";
}
double KhoangCachGiuaHaiDiem(Diem x,Diem y)
{
    return sqrt(pow(x.HoanhDo-y.HoanhDo,2)+pow(x.TungDo-y.TungDo,2));
}
void KTTamGiac(TamGiac X)
{
    double AB=KhoangCachGiuaHaiDiem(X.a,X.b);
    double AC=KhoangCachGiuaHaiDiem(X.a,X.c);
    double BC=KhoangCachGiuaHaiDiem(X.b,X.c);
    if((AB+AC>BC)&&(AB+BC>AC)&&(AC+BC>AB))
        cout<<"\n 3 diem A B C tao thanh 3 dinh cua mot tam giac!!!";
    else
    {
        cout<<"\n 3 diem A B C khong tao thanh 3 dinh cua mot tam giac!!!";
    }
}
double TinhChuViTamGiac(TamGiac X)
{
    double AB=KhoangCachGiuaHaiDiem(X.a,X.b);
    double AC=KhoangCachGiuaHaiDiem(X.a,X.c);
    double BC=KhoangCachGiuaHaiDiem(X.b,X.c);
    double cv=AB+AC+BC;
    return cv;
}
double TinhDienTichTamGiac(TamGiac X)
{
    double AB=KhoangCachGiuaHaiDiem(X.a,X.b);
    double AC=KhoangCachGiuaHaiDiem(X.a,X.c);
    double BC=KhoangCachGiuaHaiDiem(X.b,X.c);
    double P=TinhChuViTamGiac(X)/2;
    double dt=sqrt(P*(P-AB)*(P-AC)*(P-BC));
    return dt;
}
Diem TrongTamTamGiac(TamGiac X)
{
    Diem T;
    T.HoanhDo=(X.a.HoanhDo+X.b.HoanhDo+X.c.HoanhDo)/3;
    T.TungDo=(X.a.TungDo+X.b.TungDo+X.c.TungDo)/3;
    return T;
}
Diem HoanhDoMAX(TamGiac X)
{
    Diem T;
    T.HoanhDo=X.a.HoanhDo;
    T.TungDo=X.a.TungDo;
    double max=X.a.HoanhDo;
    if(X.c.HoanhDo>max)
    {
        T.HoanhDo=X.c.HoanhDo;
        T.TungDo=X.c.TungDo;
        max=X.c.HoanhDo;
    }
    if(X.b.HoanhDo>max)
    {
        T.HoanhDo=X.c.HoanhDo;
        T.TungDo=X.c.TungDo;
        max=X.c.HoanhDo;
    }
    return T;
}