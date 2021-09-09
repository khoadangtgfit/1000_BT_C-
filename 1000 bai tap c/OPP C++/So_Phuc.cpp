#include<iostream>
using namespace std;
class So_Phuc
{
private:
    int Thuc,Ao;
public:
    void Nhap();
    void Xuat();
    So_Phuc Tong(So_Phuc);
    So_Phuc Hieu(So_Phuc);
    So_Phuc(/* args */);
    ~So_Phuc();
};
void So_Phuc::Nhap()
{
    cout<<"\nNhap phan thuc:";
    cin>>this->Thuc;
    cout<<"\nNhap phan ao:";
    cin>>this->Ao;
}
void So_Phuc::Xuat()
{
    if(this->Ao < 0)
        cout<<this->Thuc<<" - "<<this->Ao<<"i";
    if(this->Ao > 0)
        cout<<this->Thuc<<" + "<<this->Ao<<"i";
}
So_Phuc So_Phuc::Tong(So_Phuc p1)
{
    So_Phuc p2;
    p2.Thuc=this->Thuc+p1.Thuc;
    p2.Ao=this->Ao+p1.Ao;
    return p2;
}
So_Phuc So_Phuc::Hieu(So_Phuc p1)
{
    So_Phuc kq;
    kq.Thuc = this->Thuc-p1.Thuc;
    kq.Ao =this->Ao-p1.Ao;
    return kq; 
}
So_Phuc::So_Phuc(/* args */)
{
}
So_Phuc::~So_Phuc()
{
}
int main()
{
    So_Phuc p1,p2,p3;
    p1.Nhap();
    cout<<endl;
    p1.Xuat();
    p2.Nhap();
    cout<<endl;
    p2.Xuat();
    p3=p1.Tong(p2);
    cout<<endl;
    p3.Xuat();
}
