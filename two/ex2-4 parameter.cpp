#include <iostream>
#include <iomanip>
using namespace std;
class Clock										//定义时钟类Clock
{
public:
	Clock(int hour, int min, int sec);			//声明有参构造函数
	void showTime();							//用于显示时间的成员函数
private:
	int _hour;									//声明表示小时的成员变量
	int _min;									//声明表示分钟的成员变量
	int _sec;									//声明表示秒的成员变量
};
Clock::Clock(int hour, int min, int sec)		//类外实现有参构造函数
{
	_hour=hour;					//初始化过程，将初始值直接赋值给成员变量
	_min=min;
	_sec=sec;
}
void Clock::showTime()			//类外实现成员函数
{
	cout<<setw(2)<<setfill('0')<<_hour<<":"
 	 			<<setw(2)<<setfill('0')<<_min<<":"
 	 			<<setw(2)<<setfill('0')<<_sec<<endl;
}
int main()
{
	Clock clock1(10,20,30);		//创建对象clock1，传入初始值
	cout<<"clock1：";
	clock1.showTime();			//通过对象调用成员函数showTime()显示时间
	Clock clock2(22,16,12);		//创建对象clock2，传入初始值
	cout<<"clock2：";
	clock2.showTime();			//通过对象调用成员函数showTime()显示时间
	return 0;
}
