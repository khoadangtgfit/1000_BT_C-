#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	std::vector<int> arr;
	for(int i=1;i<11;i++)
	{
		arr.push_back(i);
	}
	int sum=0;
	for(int i=0;i<arr.size();i++)
	{
		sum += arr[i];
	}
	cout<<"\nsum="<<sum;
	arr.pop_back();
	arr.erase(arr.begin()+2);
	arr.insert(arr.begin()+2,69);
	for(int a:arr)
	{
		cout<<" "<<a;
	}
	cout<<"\n"<<arr.front();
	return 0;
}
