#include<iostream>
using namespace std;
int KTSoHoanHao1()
{
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
			s+=i;
	}
	if(n==s)
		cout<<n<<" la so hoan thien!!!"<<endl;
	else
		cout<<n<<" khong phai la so hoan thien!!!"<<endl;
}
int KTSoHoanHao2()
{
	int i=1,n,s=0;
	cin>>n;
	while(i<n)
	{
		if(n%i==0)
			s+=i;
		i++;
	}
	if(n==s)
		cout<<n<<" la so hoan thien!!!"<<endl;
	else
		cout<<n<<" khong phai la so hoan thien!!!"<<endl;
}
int main()
{
	// KTSoHoanHao1();
	KTSoHoanHao2();
}
