#include<iostream>
#include<math.h>
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
int KTChinhPhuong(int n)
{
	if((int)sqrt(n)==sqrt(n))
		return 1;
	else
		return 0;
}
void MeNu()
{
	cout<<"1.So nguyen to"<<endl;
	cout<<"2.So hoan hao"<<endl;
	cout<<"3.So chinh phuong"<<endl;
	cout<<"4.Xem menu"<<endl;
	cout<<"0.Thoat chuong trinh"<<endl;
}
int main()
{
	int chon,n;
	MeNu();
	do{
	t:cout<<"Nhap su lua chon:"<<endl;
	cin>>chon;
	switch(chon){
		case 1: cout<<"Nhap n:"<<endl; cin>>n;
				if(KTNT(n)==1)
					cout<<n<<" la so nguyen to !!!"<<endl;
				else
					cout<<n<<" khong phai la so nguyen to !!!"<<endl; break;
		case 2: cout<<"Nhap n:"<<endl; cin>>n;
				if(KTSoHH(n)==1)
					cout<<n<<" la so hoan hao !!!"<<endl;
				else
					cout<<n<<" khong phai la so hoan hao !!!"<<endl; break;
		case 3: cout<<"Nhap n:"<<endl; cin>>n;
				if(KTChinhPhuong(n)==1)
					cout<<n<<" la so chinh phuong !!!"<<endl;
				else
					cout<<n<<" khong phai la so chinh phuong !!!"<<endl; break;
		case 4: MeNu(); break;
		case 0: break;
	}
	}while(chon!=0);
}
