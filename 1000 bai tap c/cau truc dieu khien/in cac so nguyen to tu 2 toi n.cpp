#include<iostream>
using namespace std;
void InSoNTTu2DenN()
{
	int n;
	cin>>n;
	for(int k=2;k<=n;k++){
		int d=0;
		for(int i=1;i<=k;i++){
			if(k%i==0)
				d+=1;
		}
		if(d==2)
			cout<<k<<" ";
	}
}
int main()
{
	InSoNTTu2DenN();
}
