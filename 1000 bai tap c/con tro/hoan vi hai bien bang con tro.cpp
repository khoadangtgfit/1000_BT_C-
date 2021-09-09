#include<iostream>
using namespace std;
void Swap(float *a,float *b)
{
    float temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    float a=5,b=10;
    Swap(&a,&b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;

}