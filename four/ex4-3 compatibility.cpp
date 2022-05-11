#include <iostream>
using namespace std;
class Base								//定义基类Base
{
public:
	Base();								//Base类构造函数
	void show();						//Base类普通成员函数show()
protected:
	string _name;						//Base类保护成员变量_name
};
Base::Base()							//类外实现基类构造函数
{
	_name="base";
}
void Base::show()						//类外实现show()函数
{
	cout<<_name<<" Base show()"<<endl;
}
class Derive : public Base				//Derive类公有继承Base类
{
public:
	Derive();							//Derive类构造函数
	void display();						//Derive类普通成员函数display()
};
Derive::Derive()						//类外实现派生类构造函数
{
	_name="derive";						//_name成员从Base类继承而来
}
void Derive::display()					//类外实现display()函数
{
	cout<<_name<<" Derive show()"<<endl;
}
void func(Base* pbase)					//定义普通函数func()，参数为基类指针
{
	pbase->show();
}
int main()
{
	Derive derive;			//创建Derive类对象derive
	Base base=derive;		//使用对象derive为Base类对象base赋值
	Base &qbase=derive;		//使用对象derive为Base类对象的引用qbase赋值
	Base *pbase=&derive;	//使用对象derive的地址为Base类指针pbase赋值
	base.show();			//通过Base类对象调用show()函数
	qbase.show();			//通过Base类对象引用调用show()函数
	pbase->show();			//通过Base类指针调用show()函数
	func(&derive);			//取对象derive的地址作为func()函数的参数
	return 0;
}
