#include<iostream>
using namespace std;
template<typename T, typename U>
T MAX(T a, U b)
{
	if (a > b)
		return a;
	else if (b > a)
	{
		return b;
	}
}
int main()
{
	int a = 12;
	float b = 15.5;
	cout << "MAX=" << MAX(b, a);
	system("pause");
}