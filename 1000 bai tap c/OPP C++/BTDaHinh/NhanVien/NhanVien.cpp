#include "NhanVien.h"
void NhanVien::Nhap()
{
    fflush(stdin);
    cout<<"\nNhap ho ten:";
    getline(cin,HoTen);
    fflush(stdin);
    cout<<"\nNhap vao ngay sinh:";
    getline(cin,NgaySinh);
}
void NhanVien::Xuat()
{
    cout<<"\nHo Ten:"<<HoTen;
    cout<<"\nNgay Sinh:"<<NgaySinh;
    cout<<"\nLuong Co Ban:"<<LuongCoban;
}
NhanVien::NhanVien()
{
    LuongCoban = 200000;
}
NhanVien::~NhanVien()
{
    LuongCoban = 200000;
}