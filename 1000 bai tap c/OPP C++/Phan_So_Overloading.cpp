#include<iostream>
using namespace std;
class PhanSo
{
private:
    int Tu,Mau;
public:
    PhanSo(int a,int b)
    {
        Tu =a;
        Mau=b;
    }
    void Xuat()
    {
        cout<<Tu<<"/"<<Mau;
    }
    PhanSo operator+(PhanSo);
    PhanSo(/* args */) {}
    ~PhanSo() {}
};
PhanSo PhanSo::operator+(PhanSo p1)
{
    PhanSo kq;
    kq.Tu = Tu*p1.Mau + Mau*p1.Tu;
    kq.Mau = Mau*p1.Mau;
    return kq;
}
int main()
{
    PhanSo p1(1,2),p2(3,4),p3=p1+p2;
    p3.Xuat();
}