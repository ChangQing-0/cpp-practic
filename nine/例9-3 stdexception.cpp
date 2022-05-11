#include <iostream>
using namespace std;
class Animal					//定义动物类Animal
{
public:
	virtual void speak();		//声明虚函数speak()
};
void Animal::speak()			//类外实现speak()函数
{
	cout << "动物叫声" << endl;
}
class Cat :public Animal		//猫类Cat公有继承Animal类
{
public:
	virtual void speak();		//声明虚函数speak()
};
void Cat::speak()				//类外实现speak()函数
{
	cout << "小猫喵喵叫" << endl;
}
int main()
{
	Animal animal;				//创建Animal类对象animal
	Animal& ref = animal;		//定义Animal类引用ref
	ref.speak();				//通过Animal的引用ref调用speak()函数
	try
	{
		//将引用ref强制转换为Cat&类型
		Cat& cat = dynamic_cast<Cat&>(ref);
		cat.speak();
	}
	catch (bad_cast& ex)		//捕获异常，bad_cast标准异常
	{
		cout << ex.what() << endl;
	}
	return 0;
}
