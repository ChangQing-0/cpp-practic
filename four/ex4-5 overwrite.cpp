#include <iostream>
using namespace std;
class Vehicle					//定义交通工具类Vehicle
{
public:
	void run();					//交通工具类普通成员函数run()
};
void Vehicle::run()				//类外实现run()函数
{
	cout<<"基类run()函数：行驶"<<endl;
}
class Car :public Vehicle		//定义小汽车类Car，公有继承交通工具类Vehicle
{
public:
	void run();					//小汽车类普通成员函数run()
};
void Car::run()					//类外实现brake()函数
{
	cout<<"小汽车需要燃烧汽油,行驶速度快"<<endl;
}
int main()
{
	Car car;					//创建小汽车类对象car
	car.run();					//调用派生类的run()函数
	car.Vehicle::run();			//通过基类名与作用域限定符调用基类run()函数
	Vehicle* pv=&car;
	pv->run();					//基类指针调用基类run()函数
	return 0;
}
