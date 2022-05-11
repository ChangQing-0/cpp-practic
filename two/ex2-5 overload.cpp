#include <iostream>
#include <iomanip>
using namespace std;
class Clock										//定义时钟类Clock
{
public:
	//声明重载构造函数
	Clock(int hour, int min);
	Clock(int hour, int min, int sec=0); 
	void showTime();							//声明显示时间的成员函数
private:
 	int _hour;									//声明表示小时的成员变量
 	int _min;									//声明表示分钟的成员变量
 	int _sec;									//声明表示秒的成员变量
};
Clock::Clock(int hour, int min):_hour(hour),_min(min)
{
	cout<<"调用两个参数的构造函数"<<endl;
	_sec=10;
}
Clock::Clock(int hour, int min, int sec=0)		//类外实现构造函数
{
	cout<<"调用三个参数的构造函数"<<endl;
	_hour=hour;
	_min=min;
	_sec=sec;
}
void Clock::showTime()							//类外实现成员函数showTime()
{
 	cout<<setw(2)<<setfill('0')<<_hour<<":"
 	 	 		<<setw(2)<<setfill('0')<<_min<<":"
 	 	 		<<setw(2)<<setfill('0')<<_sec<<endl;
}
int main()
{
	Clock clock(8,0);							//创建对象clock，传入初始值
	cout<<"clock：";
	clock.showTime();							//通过对象调用成员函数显示时间
	return 0;
}
