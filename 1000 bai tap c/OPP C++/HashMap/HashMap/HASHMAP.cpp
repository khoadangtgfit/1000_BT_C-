#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class T,class U>
class MAP
{
private:
	vector<T>Key;
	vector<U>Data;
public:
	void insert(T key, U data)
	{
		Key.push_back(key);
		Data.push_back(data);
	}
	void display(int n)
	{
		cout << "Key = " << Key[n] << ": Data =" << Data[n] << endl;
	}
	int getsize()
	{
		return Key.size();
	}
};
int main()
{
	MAP <int,string> m;
	m.insert(1, "khoa");
	m.insert(2, "dep");
	m.insert(3, "trai");
	for (int i = 0; i < m.getsize(); i++)
	{
		m.display(i);
	}
	system("pause");

}