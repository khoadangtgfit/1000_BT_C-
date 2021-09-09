#include<iostream>
using namespace std;
class People
{
protected:
    string name,address;
    int age;
public:
    People()
    {
        name = address ="";
        age = 0;
    }
    ~People()
    {}
    void Set()
    {
        fflush(stdin);
        cout<<"\nName:";
        getline(cin,name);
        cout<<"\nAddress:";
        getline(cin,address);
        cout<<"\nAge:";
        cin>>age;
    }
    void Get()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAddress: "<<address;
        cout<<"\nAge: "<<age;
    }
};
class Student : public People
{
private:
    string id;
    int math,physical,chemistry;
public:
    Student()
    {
        id="";
        math=physical=chemistry=0;
    }
    ~Student()
    {
    }
    void set()
    {
        cout<<"=================INPUT==============="<<endl;
        People::Set();
        fflush(stdin);
        cout<<"\nNhap id:";
        getline(cin,id);
        cout<<"\nNhap diem toan:";
        cin>>math;
        cout<<"\nNhap diem ly";
        cin>>physical;
        cout<<"\nNhap diem hoa:";
        cin>>chemistry;
    }
    void get()
    {
        cout<<"=================OUTPUT==============="<<endl;
        People::Get();
        cout<<"id: "<<id;
        cout<<"\nMath: "<<math;
        cout<<"\nPhysical: "<<physical;
        cout<<"\nChemistry: "<<chemistry;
        
    }
};
int main()
{
    Student s;
    s.set();
    s.get();
}