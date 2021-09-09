#include<iostream>
#include<math.h>
using namespace std;
struct Diem
{
    double X,Y,Z;
};
void NhapDiem(Diem &a)
{
    cout<<"\nNhap Hoanh Do:"; cin>>a.X;
    cout<<"\nNhap Tung Do:"; cin>>a.Y;
    cout<<"\nNhap Cao Do:"; cin>>a.Z;
}
void XuatDiem(Diem a)
{
    cout<<"<"<<a.X<<","<<a.Y<<","<<a.Z<<">";
}
double KhoangCach2Diem(Diem a,Diem b)
{
    return sqrt(pow(a.X-b.X,2)+pow(a.Y-b.Y,2)+pow(a.Z-b.Z,2));
}
Diem DXQuaO(Diem a)
{
    Diem c;
    c.X=-a.X;
    c.Y=-a.Y;
    c.Z=-a.Z;
    return c;
}
Diem DXQuaOXY(Diem a)
{
    Diem c;
    c.X=a.X;
    c.Y=a.Y;
    c.Z=-a.Z;
    return c;
}

