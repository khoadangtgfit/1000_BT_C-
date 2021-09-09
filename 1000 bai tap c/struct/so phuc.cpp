#include<iostream>
using namespace std;
struct SoPhuc
{
    float Thuc;
    float Ao;
};
void NhapSoPhuc(SoPhuc &sp)
{
    cout<<"\nNhap phan thuc:"; cin>>sp.Thuc;
    cout<<"\nNhap phan ao:"; cin>>sp.Ao;
}
void XuatSoPhuc(SoPhuc sp)
{
    cout<<"\t"<<sp.Thuc<<"+"<<sp.Ao<<"i";
}
SoPhuc TongHaiSoPhuc(SoPhuc x,SoPhuc y)
{
    SoPhuc b;
    b.Thuc=x.Thuc+y.Thuc;
    b.Ao=x.Ao+y.Ao;
    return b;
}
SoPhuc HieuHaiSoPhuc(SoPhuc x,SoPhuc y)
{
    SoPhuc b;
    b.Thuc=x.Thuc-y.Thuc;
    b.Ao=x.Ao-y.Ao;
    return b;
}
SoPhuc TichHaiSoPhuc(SoPhuc x,SoPhuc y)
{
    SoPhuc b;
    b.Thuc=x.Thuc*y.Thuc-x.Ao*y.Ao;
    b.Ao=x.Thuc*y.Ao+x.Ao*y.Thuc;
    return b;
}
SoPhuc ThuongHaiSoPhuc(SoPhuc x,SoPhuc y)
{
    SoPhuc b;
    b.Thuc=(x.Thuc*y.Thuc+x.Ao*y.Ao)/(x.Thuc*y.Thuc+y.Thuc*y.Thuc);
    b.Ao=(x.Thuc*y.Ao-x.Ao*y.Thuc)/(x.Thuc*x.Thuc+y.Thuc*y.Thuc);
    return b;
}
SoPhuc TinhLuyThuaBacN(SoPhuc a,int n)
{
    while(n!=0)
    {
        a=TichHaiSoPhuc(a,a);
        n--;
    }
    return a;
}
int main()
{
    SoPhuc a,b;
    cout<<"\nNhap so phuc thu nhat:";
    NhapSoPhuc(a);
    cout<<"\nNhap so phuc thu hai:";
    NhapSoPhuc(b);
    cout<<"\nHai so phuc ban vua nhap la:";
    XuatSoPhuc(a);
    cout<<endl;
    XuatSoPhuc(b);
    SoPhuc tong=TongHaiSoPhuc(a,b);
    SoPhuc hieu=HieuHaiSoPhuc(a,b);
    SoPhuc tich=TichHaiSoPhuc(a,b);
    SoPhuc thuong=ThuongHaiSoPhuc(a,b);
    SoPhuc luythua=TinhLuyThuaBacN(a,2);
    cout<<"\nTong hai so phuc:";
    XuatSoPhuc(tong);
    cout<<"\nHieu hai so phuc:";
    XuatSoPhuc(hieu);
    cout<<"\nTich hai so phuc:";
    XuatSoPhuc(tich);
    cout<<"\nThuong hai so phuc:";
    XuatSoPhuc(thuong);
    cout<<"\nLuy thua bac 4 cua so phuc :";
    XuatSoPhuc(luythua);
}