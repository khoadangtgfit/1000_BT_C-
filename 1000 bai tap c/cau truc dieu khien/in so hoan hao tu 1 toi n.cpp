#include<iostream>
using namespace std;
int KTSoHH(int n)
{
	int d=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0)
			d+=i;
	}
	if(n==d)
		return 1;
	else
		return 0;
}
void InSoHH(int &n)
{
	for(int i=1;i<=n;i++){
		if(KTSoHH(i)==1)
			cout<<i<<" ";
	}
}
int main()
{
	int n;
	cout<<"Nhap n:"<<endl;
	cin>>n;
	cout<<"Cac so hoan thien tu 1 toi "<<n<<" la:";
	InSoHH(n);
}
