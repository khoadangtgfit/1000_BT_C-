#include<iostream>
using namespace std;
void CongThoigian()
{
	int gio1,gio2,gio3,phut1,phut2,phut3,giay1,giay2,giay3;
	cout<<"Nhap thoi gian 1:"<<endl;
	cin>>gio1>>phut1>>giay1;
	cout<<"Nhap thoi gian 2:"<<endl;
	cin>>gio2>>phut2>>giay2;
	cout<<"Gio thu 1 ="<<gio1<<" gio "<<phut1<<" phut"<<giay1<<" giay"<<endl;
	cout<<"Gio thu 2 ="<<gio2<<" gio "<<phut2<<" phut"<<giay2<<" giay"<<endl;
	gio3=gio2+gio1; phut3=phut2+phut1; giay3=giay1+giay2;
	if(giay3>=60)
	{
		phut3+=giay3/60;
		giay3=giay3%60;
	}
	if(phut3>=60)
	{
		gio3+=phut3/60;
		phut3=phut3%60;
	}
	cout<<"Tong thoi gian ="<<gio3<<" gio "<<phut3<<" phut"<<giay3<<" giay"<<endl;
}
int main()
{
	CongThoigian();
}
