#include<iostream>
using namespace std;
class ThoiGian
{
private:
    int Gio,Phut;
public:
    void Nhap(int gio,int phut)
    {
        Phut=phut;
        Gio=gio;
    }
    void Xuat()
    {
        cout<<Gio<<"h"<<Phut<<"p";
    }
    ThoiGian Tong(ThoiGian T1,ThoiGian T2)
    {
        int t = T1.Phut+T2.Phut+T1.Gio*60+T2.Gio*60;
        Phut =t%60;
        Gio =t/60;
        return *this;
    }
};
int main()
{
    ThoiGian T1,T2,T3;
    T1.Nhap(2,40);
    T1.Xuat();
     cout<<endl;
    T2.Nhap(3,50);
    T2.Xuat();
     cout<<endl;
    T3.Tong(T1,T2);
     cout<<endl;
    T3.Xuat();

}


