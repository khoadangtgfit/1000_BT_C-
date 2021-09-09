#include<iostream>
#include<string>
using namespace std;
class NhanVien
{
protected:
    string HoTen,NgaySinh;
    float LuongCoban,Luong;
public:
    void Nhap();
    void Xuat();
    NhanVien();
    ~NhanVien();
};
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
int main()
{
    NhanVien Nv;
    Nv.Nhap();
    Nv.Xuat();
}
