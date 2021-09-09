#include<iostream>
using namespace std;
class GiangVien;
class SinhVien
{
private:
    string mssv;
public:
    SinhVien(/* args */);
    ~SinhVien();
    void set()
    {
        fflush(stdin);
        cout<<"Nhap ma sv:";
        getline(cin,mssv);
    }
    friend void get(SinhVien a,GiangVien b);
};
SinhVien::SinhVien(/* args */)
{
}

SinhVien::~SinhVien()
{
}
class GiangVien
{
private:
    string magv;
public:
    void set()
    {
        fflush(stdin);
        cout<<"\nNhap ma giag vien:";
        getline(cin,magv);
    }
    GiangVien(/* args */) {}
    ~GiangVien() {}
    friend void get(SinhVien a,GiangVien b);
};
void get(SinhVien a,GiangVien b)
{
    cout<<"MSSV:"<<a.mssv<<endl;
    cout<<"MSGV:"<<b.magv<<endl;
}
int main()
{
    GiangVien b;
    SinhVien a;
    a.set();
    b.set();
    get(a,b);
}