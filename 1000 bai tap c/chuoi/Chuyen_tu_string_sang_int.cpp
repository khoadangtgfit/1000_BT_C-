#include<iostream>
#include<string.h>
using namespace std;
int Convert_String_To_Int(string taolao)
{
	int value=0;
	for(int i=0;i<taolao.size();i++)
	{
		if(taolao[i]<'0'||taolao[i]>'9')
			return -1;
		value=value*10+taolao[i]-'0';
	}
	return value;
}
int main()
{
	string taolao="1234";
	cout<<Convert_String_To_Int(taolao)-1230;
}