#include<iostream>
using namespace std;
//cách 2: cai dat ben ngoai class
class PhanSo
{
private: int Tu,Mau;
public:
    int LayTu()
    {
        return Tu;
    }
    int LayMau()
    {
        return Mau;
    }
    void setTu(int a)
    {
        Tu=a;
    }
    void setMau(int b)
    {
        Mau=b;
    }
    PhanSo(int a,int b)
    {
        Tu=a;
        Mau=b;
    }
    void Xuat()
    {
        cout<<Tu<<"/"<<Mau;
    }
};
void operator-(PhanSo &p1)
{
    p1.setTu(-p1.LayTu());
    p1.setMau(p1.LayMau()); 
}
int main()
{
    PhanSo A(1,2);
    -A;
    A.Xuat();
}