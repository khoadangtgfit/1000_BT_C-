#include<iostream>
#include<string>
using namespace std;
class Nguoi
{
private:
    int NamSinh;
    string Ten;
public:
    Nguoi(/* args */);
    Nguoi(int namsinh,string ten){
        NamSinh = namsinh;
        Ten = ten;
    }
    void An()
    {
        cout<<Ten<<" an 2kg gao mot ngay";
    }
    void Xuat()
    {
        cout<<"\nNguoi "<<" ho ten:"<<Ten;
    }
    ~Nguoi();
};

Nguoi::Nguoi(/* args */)
{
}

Nguoi::~Nguoi()
{
}
class SinhVien : public Nguoi
{
    string MSSV;
public:
    SinhVien(){}
    SinhVien(int namsinh,string ten,string maso):Nguoi(namsinh,ten)
    {
        MSSV = maso;
    }
    void Xuat()
    {
        // cout<<"\nHo ten:"<<Ten;
        // cout<<"\nNam sinh:"<<NamSinh<<endl;
        cout<<"\nMSSV"<<MSSV;
    }
};
int main()
{
    SinhVien SV(2000,"Khoa","190304");
    SV.An();
}