#include<iostream>
using namespace std;
bool KTToanChan(int n){
	if(n==0)
		return true;
	if(n%10%2!=0)
		return false;
	return KTToanChan(n/10);
}
int main()
{
	int n,s;
	cout<<"Nhap n:"<<endl;
	cin>>n;
	if(KTToanChan(n)==true)
		cout<<n<<" la so co toan chu so chan!!!"<<endl;
	else
		cout<<n<<" la so khong co toan chu so chan!!!"<<endl;
		
}
