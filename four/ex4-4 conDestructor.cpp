#include <iostream>
using namespace std;
class Engine								//定义发动机类Engine
{
public:
	Engine(string type,int power);			//发动机构造函数
	void show();							//发动机普通成员函数show
	~Engine();								//发动机析构函数
private:
	string _type;							//成员_type表示型号
	int _power;								//成员_power表示功率
};
Engine::Engine(string type, int power)		//类外实现构造函数
{
	cout<<"调用发动机Engine构造函数"<<endl;
	_type=type;
	_power=power;
}
void Engine::show()							//类外实现show()函数
{
	cout<<"发动机型号："<<_type<<",发动机功率："<<_power<<endl;
}
Engine::~Engine()							//类外实现析构函数
{
	cout<<"调用发动机Engine析构函数"<<endl;
}
class Vehicle								//定义交通工具类Vehicle
{
public:
	Vehicle(string name);					//交通工具类构造函数
	void run();								//交通工具类普通成员函数run()
	string getName();						//交通工具类普通成员函数getName()
	~Vehicle();								//交通工具类析构函数
private:
	string _name;							//成员_name表示交通工具种类
};
Vehicle::Vehicle(string name)				//类外实现构造函数
{
	cout<<"调用交通工具Vehicle构造函数"<<endl;
	_name=name;
}
void Vehicle::run()							//类外实现run()函数
{
	cout<<_name<<"正在行驶中"<<endl;
}
string Vehicle::getName()					//类外实现getName()函数
{
	return _name;
}
Vehicle::~Vehicle()							//类外实现析构函数
{
	cout<<"调用交通工具Vehicle析构函数"<<endl;
}
//定义小汽车类Car，公有继承交通工具类Vehicle
class Car :public Vehicle
{
public:
	//Car类构造函数，其参数包括了成员对象、基类成员变量、新增成员变量的参数
	Car(int seats,string color,string type, int power,string name);
	void brake();							//小汽车类普通成员函数brake()
	void display();							//小汽车类普通成员函数display()
	~Car();									//小汽车类析构函数
	Engine engine;							//公有成员变量，Engine类对象
private:
	int _seats;								//成员_seats表示座位数量
	string _color;							//成员_color表示颜色
};
//类外实现构造函数，后面使用“:”运算符调用成员对象构造函数、基类构造函数
Car::Car(int seats, string color, string type, int power, string name):
	engine(type,power),Vehicle(name)
{
	cout<<"调用小汽车Car构造函数"<<endl;
	_seats=seats;
	_color=color;
}
void Car::brake()							//类外实现brake()函数
{
	cout<<getName()<<"停车"<<endl;
}
void Car::display()							//类外实现display()函数
{
	cout<<getName()<<"有"<<_seats<<"个座位，"<<"颜色为"<<_color<<endl;
}
Car::~Car()									//类外实现析构函数
{
	cout<<"调用小汽车Car析构函数"<<endl;
}
int main()
{
	Car car(5,"red","EA113",130,"passat");	//创建小汽车类对象car
	car.run();								//调用基类的run()函数
	car.brake();							//调用brake()函数
	car.display();							//调用display()函数
 	//通过成员对象engine调用Engine类的show()函数，显示发动机信息
	car.engine.show();
	return 0;
}
