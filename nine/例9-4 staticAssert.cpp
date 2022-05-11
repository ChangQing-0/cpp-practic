#include <iostream>
using namespace std;
template<typename T,typename U>	
void func(T& t, U& u)								//定义函数模板func()
{
	static_assert(sizeof(t) == sizeof(u),			//静态断言
		"the parameters must be the same width.");
	cout << t << "与" << u << "字节大小相同" << endl;
}
int main()
{
	int x = 100;									//定义变量
	int y = 20;										//定义变量
	char ch = 'a';									//定义变量
	func(x, y);										//调用func()函数
	func(x, ch);									//调用func()函数
	return 0;
}
