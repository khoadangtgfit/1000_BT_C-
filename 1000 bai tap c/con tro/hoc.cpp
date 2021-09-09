#include<iostream>
using namespace std;
int main()
{
    int a=30,b=55;
    int *p=&a;
    cout<<"Gia tri cua bien a :"<<a<<endl;
    cout<<"Dia chi cua bien a :"<<&a<<endl;
    cout<<"Gia tri cua con tro p:"<<p<<endl;
    cout<<"Dia chi cua con tro p:"<<&p<<endl;
    cout<<"Gia tri tai dia chi con tro p tro toi:"<<*p<<endl;
    cout<<"Gia tri tai dia chi cua a: "<<*&a<<endl;
    *p=5;
    cout<<"Gia tri cua bien a :"<<a<<endl;
    cout<<"Gia tri tai dia chi con tro p tro toi:"<<*p<<endl;
    cout<<endl;
    p=&b;
    cout<<"Gia tri tai dia chi con tro p tro toi:"<<*p<<endl;
    system("pause");
    return 0;
}