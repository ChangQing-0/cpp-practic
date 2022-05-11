#include<iostream>
using namespace std;
class Animal				//定义动物类Animal
{
public:
	void move();			//声明表示动物行为的成员函数move()
};
void Animal::move()			//类外实现成员函数move()
{
	cout<<"动物行为"<<endl;
}
class Cat :public Animal	//定义猫类Cat，公有继承动物类Animal
{
public:
	Cat(string name);		//声明有参构造函数
	void walk();			//声明表示动物行为的成员函数walk()
private:
	string _name;			//成员变量：表示名字
};
Cat::Cat(string name)		//类外实现构造函数
{
	_name=name;
}
void Cat::walk()			//类外实现普通成员函数walk()
{
	cout<<_name<<"会走"<<endl;
}
int main()
{
 	Cat cat("猫");			//定义猫类对象cat
	cat.move();				//通过派生类对象调用基类成员函数
	cat.walk();				//通过派生类对象调用新增的成员函数
 	return 0;
}
