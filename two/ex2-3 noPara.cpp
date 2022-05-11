#include <iostream>
#include <iomanip>
using namespace std;
class Clock						//定义时钟类Clock
{
public:
	Clock();					//声明无参构造函数
	void showTime();			//声明显示时间的成员函数
private:
	int _hour;					//声明表示小时的成员变量
	int _min;					//声明表示分钟的成员变量
	int _sec;					//声明表示秒的成员变量
};
Clock::Clock()					//类外实现无参构造函数
{
	_hour=0;					//初始化过程，将成员变量初始化为0
	_min=0;
	_sec=0;
}
void Clock::showTime()			//类外实现成员函数
{
	cout<<setw(2)<<setfill('0')<<_hour<<":"
 			<<setw(2)<<setfill('0')<<_min<<":"
 			<<setw(2)<<setfill('0')<<_sec<<endl;
}
int main()
{
	Clock clock;				//创建对象clock
	cout<<"clock：";
	clock.showTime();			//通过对象调用成员函数showTime()显示时间
	return 0;
}
