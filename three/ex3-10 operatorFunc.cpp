#include<iostream>
#include<string>
using namespace std;
class Show
{
public:
	void operator ()(const string str) 		//()运算符重载函数
	{
		cout<<str<<endl;
	}
	float operator()(const float num)		//()运算符重载函数
	{
		 return num*num;
	}
};
int main()
{
	Show s;
	s("abcdef");
	cout<<s(4)<<endl;
	return 0;
}
