#include<iostream>
using namespace std;
class Animal					//动物类Animal
{
public:
	virtual void speak();		//声明虚函数speak()
};
void Animal::speak()			//类外实现虚函数
{
	cout<<"动物叫声"<<endl;
}
class Cat :public Animal		//猫类Cat公有继承Animal类
{
public:
	virtual void speak();		//声明虚函数speak()
};
void Cat::speak()				//类外实现虚函数
{
	cout<<"猫的叫声：喵喵"<<endl;
}
class Dog:public Animal			//狗类Dog公有继承Animal类
{
public:
	virtual void speak();		//声明虚函数speak()
};
void Dog::speak()				//类外实现虚函数
{
	cout<<"狗的叫声：汪汪"<<endl;
}
int main()
{
	Cat cat;					//创建Cat类对象cat
	Animal *pA=&cat;			//定义Animal类指针pA指向对象cat
	pA->speak();				//通过pA调用speak()函数
	Dog dog;					//创建Dog类对象dog
	Animal *pB=&dog;			//定义Animal类指针pB指向对象dog
	pB->speak();				//通过pB调用speak()函数
    return 0;
}
