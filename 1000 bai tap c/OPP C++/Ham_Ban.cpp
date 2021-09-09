#include<iostream>
using namespace std;
class HinhChuNhat
{
private:
    /* data */
    int dai,rong;
public:
    HinhChuNhat(int dai,int rong)
    {
        this->dai = dai;
        this->rong = rong;
    }
    // HinhChuNhat():dai(0){}
    friend int HienThiChieuDai(HinhChuNhat);
    HinhChuNhat(/* args */);
    ~HinhChuNhat();
};
int HienThiChieuDai(HinhChuNhat hcn)
{
    hcn.dai+=10;
    return hcn.dai;
}
HinhChuNhat::HinhChuNhat(/* args */)
{
}

HinhChuNhat::~HinhChuNhat()
{
}
int main()
{
    HinhChuNhat hcn =HinhChuNhat(10,20);
    cout<<"Chieu dai = "<<HienThiChieuDai(hcn);
}