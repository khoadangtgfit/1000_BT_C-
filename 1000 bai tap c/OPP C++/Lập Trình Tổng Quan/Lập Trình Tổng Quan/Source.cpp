#include<string>
#include<vector>
#include<iostream>
using namespace std;
template<typename T>
class Stack
{
private:
	T data[100];
	int top;
public:
	Stack()
	{
		top = -1;
	}
	void push(T number)
	{
		++top;
		data[top] = number;
	}
	T pop()
	{
		T val = data[top];
		--top;
		return val;
	}
	T peek()
	{
		return data[top];
	}


};
int main()
{
	Stack <string>number;
	number.push("khoa");
	number.push("dep");
	number.push("trai");
	number.push("ma");
	number.push("ngu");
	number.pop();
	cout << "\nSau khi pop:" << endl;
	cout << number.peek();
	system("pause");
}