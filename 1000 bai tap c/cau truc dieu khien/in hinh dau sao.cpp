#include<iostream>
using namespace std;
void InHinhVuong()
{
	int n;
	cout<<"Nhap vao kich thuoc:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
void InTamGiacVuongCanDuoi()
{
	int n;
	cout<<"Nhap vao kich thuoc:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<" *";
			}
		for(int k=1;k<=n-i;k++){
				cout<<" ";
		}
		cout<<endl;
	}
}
void InTamGiacVuongCanTren()
{
	int n;
	cout<<"Nhap vao kich thuoc:"<<endl;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int k=1;k<=i;k++){
				cout<<" *";
		}
		for(int j=1;j<=i;j++){
			cout<<" ";
			}
		cout<<endl;
	}
}
void InTamGiacDeu()
{
	int n;
	cout<<"Nhap vao kich thuoc:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=2;j<=n-i;j++)
			cout<<"  ";
		for(int j=1;j<=2*i+1;j++)
			cout<<"* ";
		cout<<endl;
	}
}
int main()
{
//	InHinhVuong();
//	InTamGiacVuongCanDuoi();
//	InTamGiacVuongCanTren();
	InTamGiacDeu();
}
