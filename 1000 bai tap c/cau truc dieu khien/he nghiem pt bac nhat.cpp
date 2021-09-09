#include<iostream>
using namespace std;
int HeNo()
{
	int d=0;
	cout<<"He Nghiem Cua PT 3X+5Y+7Z=135"<<endl;
	for(int x=1;x<=45;x++){
		for(int y=1;y<=27;y++){
			for(int z=1;z<20;z++){
				if(3*x+5*y+7*z==135){
					cout<<x<<" "<<y<<" "<<z<<endl;
					d++;}
			}
		}
	}
	cout<<"So nghiem ="<<d;
}
int main()
{
	HeNo();
}
