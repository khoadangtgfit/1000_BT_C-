#include<iostream>
#include<math.h>
using namespace std;
//Tính S(n) = x^2 + x^4 +… + x^2n
int Tong(int x,int n)
{
    int s;
    if(n==0)
        return 1;
    s+=pow(x,2*n);
    return s+Tong(x,n-1);
}
//Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3…n
int Tong2(int n)
{
    int tich=1;
    if(n==1)
        return 1;
    for(int i=1;i<=n;i++)
    {
        tich*=i;
    }
    return Tong2(n-1)+tich;
}
//Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
float Tong3(int n)
{
    if(n==1)
        return sqrt(2);
    return sqrt(2+Tong3(n-1));
}
//Tinh S(n)=1/2+1/(2*4)+1/(2*4*6)+...+1/(2*n*2(n-1)...)
float Tong4(int n)
{
    int tich=1;
    if(n==1)
        return 1.0/2;
    for(int i=1;i<=n;i++)
    {
        tich*=2*i;
    }
    return Tong4(n-1)+1.0/tich;
}
int Tong5(int n)
{
    int tich=1;
    int s=0;
    if(n==1)
        return 1;
    for(int i=1;i<=n;i++)
    {
        tich=tich*i;
    }
    return Tong5(n-1)+tich;
}
double Tong6(int n)
{
    if(n==1)
        return sqrt(2);
    return sqrt(2+sqrt(Tong6(n-1)));
}
int main()
{
    cout<<"\nTong="<<Tong(2,1);
    cout<<"\nTong 2="<<Tong2(3);
    cout<<"\nTong 3="<<Tong5(4);
    cout<<"\nTong 4="<<Tong4(2);
}