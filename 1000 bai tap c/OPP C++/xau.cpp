#include<iostream>
#include<string.h>
#define MAX 250
using namespace std;
void DaoNguoc(char Q[],int u,int v)
{
	for(int i=u;i<v/2;i++)
	{
		int t=Q[i];
		Q[i]=Q[v-i-1];
		Q[v-1-i]=t;
	}
}
void DN(char Q[],int u,int v)
{
	while(u<v)
	{
		int t=Q[u];
		Q[u]=Q[v];
		Q[v]=t;
		u++;
		v--;
	}
}
// void ThucThi(char Q[],int &k)
// {
// 	do{
// 	cout<<"Nhap chuoi Q:";
// 	gets(Q);
// 	if(strlen(Q)==0&&strlen(Q)>250)
// 		cout<<"Do dai chuoi phai tu 1->250"<<endl;
// 	}while(strlen(Q)==0&&strlen(Q)>250);
// 	do
// 	{
// 		cout<<"\nNhap k:";
// 		cin>>k;
// 		if(k<0&&k>250)
// 			cout<<"\nk phai tu 0->250!";
// 	}while(k<0&&k>250);
// 	DaoNguoc(Q,k);
// }
int main()
{
	int k;
	char Q[] = "123456789";
	DN(Q,1,5);
	// ThucThi(Q,k);
	// cout<<"Chuoi S=";
	puts(Q);
}