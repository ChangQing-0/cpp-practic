#include <iostream>
#include <string.h>
using namespace std;
class Time									//定义Time类，描述时分秒
{
public:
    Time(int hour, int minute, int second); //声明带参构造函数
    friend class Date; 						//声明类Date为友元类
private:
    int _hour, _minute, _second;
};
class Date									//定义Date类
{
public:
	Date(int year, int month, int day); 	//声明带参构造函数
	void showTime(Time& time); 				//声明显示时间的成员函数
private:
	int _year, _month, _day;
};
Date::Date(int year, int month, int day) 	//实现Date类构造函数
{
	_year = year;
	_month = month;
	_day = day;
}
void Date::showTime(Time& time)
{
	cout << _year << "-" << _month << "-" << _day
		<< " " << time._hour << ":" << time._minute
		<< ":" << time._second << endl;
}
Time::Time(int hour,int minute,int second) //实现Time类构造函数
{
    _hour = hour;
    _minute = minute;
    _second = second;
}
int main()
{
    Time time(17,30,20); 		//创建Time对象
    Date date(2019,10,31); 		//创建Date对象
    date.showTime(time); 		//调用showTime()显示年月日、时分秒信息
    return 0;
}
