#include<iostream>
#include<math.h>
using namespace std;
void GiaiPTBac2(float a,float b,float c)
{
	cout<<"Nhap he so a,b va c vao:"<<endl;
	cin>>a>>b>>c;
	float denta=b*b-4*a*c;
	if(a==0)
		if(b==0)
			if(c==0)
				cout<<"Phuong trinh vo so nghiem!!!"<<endl;
			else
				cout<<"Phuong trinh vo nghiem!!!"<<endl;
		else
			cout<<"Phuong trinh co nghiem x="<<(float)(-b)/c<<endl;
	else{
		if(denta>0)
			cout<<"Phuong trinh co 2 nghiem phan biet x1="<<((float)(-b)+sqrt(denta))/(2*a)<<" x2="<<((float)(-b)-sqrt(denta))/(2*a)<<endl;
		if(denta==0)
			cout<<"Phuong trinh co nghiem duy nhat x="<<(float)(-b)/(2*a)<<endl;
		if(denta<0)
			cout<<"Phuong trinh vo nghiem!!!"<<endl;
	}		
}
void KTTamGiac(float a,float b,float c)
{
	cout<<"Nhap kich thuoc 3 canh cua tam giac vao:"<<endl;
	cin>>a>>b>>c;
	if((a==b)&&(b==c))
		cout<<"Tam giac deu"<<endl;
	if((a==b)||(b==c)||(c==a))
		cout<<"Tam giac can"<<endl;
			
}
int main()
{
	float a,b,c;
	GiaiPTBac2(a,b,c);
}
