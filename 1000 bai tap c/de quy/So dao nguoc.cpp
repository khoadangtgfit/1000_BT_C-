#include<iostream>
using namespace std;
int DaoNguocSo(int n,int s){
	if(n==0)
		return s;
	else{
		s=s*10+n%10;
		return DaoNguocSo(n/10,s);
	}
}
int main()
{
	int n,s;
	cout<<"Nhap n:"<<endl;
	cin>>n;
	cout<<"So dao nguoc cua "<<n<<" la: "<<DaoNguocSo(n,s);
}
