#include<iostream>
using namespace std;
class PhanSo
{
private:
    int Tu,Mau;
public:
    PhanSo(int a,int b)
    {
        Tu=a;
        Mau=b;
    }
    PhanSo(/* args */) {}
    ~PhanSo() {}
    friend istream & operator>>(istream& ,PhanSo&);
    friend ostream & operator<<(ostream&,PhanSo);
    PhanSo &operator++()
    {
        Tu = Tu+Mau;
        return *this;
    }
    PhanSo operator+(int);
};
PhanSo PhanSo::operator+(int a)
{
    PhanSo kq;
    kq.Tu = a*Mau+Tu;
    kq.Mau = Mau;
}
iostream &operator>>(iostream &input,PhanSo &ps)
{
    int a,b;
    cout<<"\nNhap tu:";
    input>>a;
    do
    {
        cout<<"\nNhap mau:";
        input>>b;
    } while (b==0);
    ps=PhanSo(a,b);
    return input;
}
ostream &operator<<(ostream &output,PhanSo ps)
{
    return output<<ps.Tu<<"/"<<ps.Mau;
}
int main()
{
    PhanSo p1(1,5);
    // cin>>p1;
    ++p1;
    cout<<p1;
}