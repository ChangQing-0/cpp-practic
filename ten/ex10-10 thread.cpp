#include <iostream>
#include <thread>						//包含头文件
using namespace std;
void func()							//定义函数func()
{
	cout << "子线程工作" << endl;
	cout << "子线程工作结束" << endl;
}
int main()
{
	cout << "主线程工作" << endl;
	thread t(func);						//创建线程对象t
	t.join();						//将子线程加入程序执行
	cout << "主线程工作结束" << endl;
	return 0;
}
