#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int *ptr=arr;
    for(size_t i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<"\t";
    }
    cout<<endl;
    for(;ptr<=&arr[4];ptr++)
    {
        cout<<*ptr<<"\t";
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
}