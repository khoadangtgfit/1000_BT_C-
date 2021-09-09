#include<iostream>
using namespace std;
//cách 1: member_function(S? d?ng phuong th?c trong class)
class PhanSo
{
private: int Tu,Mau;
public:
    void Xuat()
    {
        cout<<Tu<<"/"<<Mau;
    }
    PhanSo(int a,int b)
    {
        Tu = a;
        Mau = b;
    }
    void operator-();
};
void PhanSo::operator-()
{
    Tu = -Tu;
    Mau=Mau;
}
int main()
{
    PhanSo A(1,2);
    -A;
    A.Xuat();
}