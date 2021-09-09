#include<iostream>
#include<math.h>
using namespace std;
int KTSoCoDang5MuK(int n)
{
    float a=log(n)/log(5);
    if(a==floor(a))
        return 1;
    else
        return 0;
}
int SoCoDang5MuKMax(int a[],int n)
{
    
    for(int i=t;i<n;i++)
    {
        if(KTSoCoDang5MuK(a[i])==1)
            max=a[i];
    }
}