#include<iostream>
using namespace std;
int ChuSoDauTien(int n){
	if(n<10)
		return n;
	return ChuSoDauTien(n/10);
}
int main()
{
	int n;
	cout<<"Nhap n:"<<endl;
	cin>>n;
	cout<<"Chu so cuoi cung cua "<<n<<" la: "<<ChuSoDauTien(n);
}
