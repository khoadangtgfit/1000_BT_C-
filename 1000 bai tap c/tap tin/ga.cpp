#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream f;
	f.open("input.txt",ios::out);
	for(int i=2;i<=9;i++)
	{
		for(int j=2;j<=5;j++)
		{
			f<<j<<"X"<<i<<"="<<i*j<<"\t";
		}
		f<<"\n";
	}
	f<<"\n";
	for(int i=2;i<=9;i++)
	{
		for(int j=6;j<=9;j++)
		{
			f<<j<<"X"<<i<<"="<<i*j<<"\t";
		}
		f<<"\n";
	}		
}
