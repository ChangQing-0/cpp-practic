#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"请输入一个字符串："<<endl;
	cout<<"第一种形式："<<cin.get()<<endl;
	cin.get(ch);
	cout<<"第二种形式："<<ch<<endl;
	char buf[20];
	cin.get(buf,6,' ');
	cout<<"第三种形式："<<buf<<endl;
	return 0;
}
