#include<iostream>
using namespace std;
int deQuyDuoi(int n, int Max = 0)
{
	if(n == 0)
		return Max;
	return deQuyDuoi(n / 10, Max > n % 10 ? Max: n % 10);
}
int main()
{
	 cout<<"Chu so max="<<deQuyDuoi(102);
	return 0;
}