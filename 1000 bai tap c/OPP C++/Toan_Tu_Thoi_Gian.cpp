#include<iostream>
using namespace std;
class ThoiGian
{
private:
    int Gio,Phut;
public:
    ThoiGian()
    {
        Gio=0;
        Phut=0;
    }
    ThoiGian(int a,int b)
    {
        Gio=a;
        Phut=b;
    }
    void HienThi()
    {
        cout<<"Gio: "<<Gio<<" Phut: "<<Phut<<endl;
        cout<<"-----------------------------"<<endl;
    }
    friend ThoiGian &operator++();
};
ThoiGian &operator++()
{
    ++Phut;
    if(Phut>=60)
    {
        Gio+=1;
        Phut-=60;
    }
    return *this;
}
int main()
{
    ThoiGian t1(6,59);
    ++t1;
    t1.HienThi();
}
