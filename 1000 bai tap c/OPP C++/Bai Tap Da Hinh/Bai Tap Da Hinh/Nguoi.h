#include<iostream>
#include<string>
#pragma once
using namespace std;
class Nguoi
{
protected:
	string Hoten, NamSinh;
	bool KT;
public:
	virtual void Nhap();
	virtual void Xuat();
	bool GETTER()
	{
		return KT;
	}
	void SETTER(bool kt)
	{
		KT = kt;
	}
	float get1();
	int get2();
	Nguoi();
	~Nguoi();
};

