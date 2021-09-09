#include<iostream>
using namespace std;
void KTTamGiac(float a,float b,float c)
{
	cout<<"Nhap kich thuoc 3 canh cua tam giac vao:"<<endl;
	cin>>a>>b>>c;
	if((a>0)&&(b>0)&&(c>0)&&(a+b>c)&&(b+c>a)&&(c+a>b))
		if((a==b)&&(b==c))
			cout<<"Tam giac deu"<<endl;
		else if((a==b)||(b==c)||(c==a))
			cout<<"Tam giac can"<<endl;
		else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a))	
		 	cout<<"Tam giac vuong"<<endl;
	else
		cout<<a<<" "<<b<<" "<<c<<" "<<" khong phai la kich thuoc 3 canh cua mot tam giac!!!"<<endl;
}
int main()
{
	float a,b,c;
	KTTamGiac(a,b,c);
}
