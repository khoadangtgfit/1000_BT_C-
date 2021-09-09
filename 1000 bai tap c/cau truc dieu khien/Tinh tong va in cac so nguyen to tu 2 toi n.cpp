#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int KTNT(int n)
{
	if(n<2)
		return 0;
	else
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)
				return 0;
		}
		return 1;
}
void InsoNT(int n)
{
	for(int i=2;i<=n;i++){
		if(KTNT(i)==1)
			cout<<i<<" ";
	}
}
int TinhTongSoNT(int n){
	int s=0;
	for(int i=2;i<=n;i++){
		if(KTNT(i)==1)
			s+=i;
	}
	return s;
}
int main()
{
	 clrscr();
	int n;
	cout<<"Nhap n vao:"<<endl;
	cin>>n;
	InsoNT(n);
	cout<<"\nTong cac so nguyen to tu 2 toi "<<n<<" = "<<TinhTongSoNT(n);
	system("pause");
}
