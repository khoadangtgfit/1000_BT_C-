#include<iostream>
using namespace std;
void KTNgayHopLe()
{
	int ngay,thang,nam,flag=0;
	cout<<"Nhap ngay thang nam vao:"<<endl;
	cin>>ngay>>thang>>nam;
	cout<<"Ngay "<<ngay<<" thang "<<thang<<" nam "<<nam<<endl;
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: if(ngay<=31) flag=1; break;
		case 4:
		case 6:
		case 11:
		case 9: if(ngay<=30) flag=1; break;
		case 2: if((nam%4==0)&(nam%100!=0)||(nam%400==0)&&(ngay<=29)) flag=1; 
				if(ngay<=28) flag=1; break;
		default: cout<<"Ngay thang nam khong hop le!!!"<<endl;
	}
	if(flag==1){
			cout<<"Ngay thang nam hop le!!!"<<endl;
			if((nam%4==0)&(nam%100!=0)||(nam%400==0))
				cout<<"Nam nhuan"<<endl;
			else 
				cout<<"Nam khong nhuan"<<endl;
		}
		else
			cout<<"Ngay thang nam khong hop le!!!"<<endl;
}
int main()
{
	KTNgayHopLe();
}
