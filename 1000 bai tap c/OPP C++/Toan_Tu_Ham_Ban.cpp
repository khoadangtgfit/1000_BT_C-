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
    PhanSo(/* args */) {}
    ~PhanSo() {}
    friend PhanSo operator+(int,PhanSo);
};
PhanSo operator+(int a,PhanSo A)
{
    PhanSo kq;
    kq.Tu = a*A.Mau + A.Tu;
    kq.Mau = A.Mau;
    return kq;
}
int main()
{
    PhanSo p1(1,2),p3=1+p1;
    p3.Xuat();
}