#include<iostream>
using namespace std;
class Base							//基类Base
{
public:
	virtual ~Base();				//虚析构函数
};
Base::~Base()
{
	cout<<"Base类析构函数"<<endl; 
}
class Derive :public Base			//派生类Derive公有继承Base类
{
public:
	~Derive();						//虚析构函数
};
Derive::~Derive()
{
	cout<<"Derive类析构函数"<<endl; 
}
int main()
{
	Base *pb=new Derive;			//基类指针指向派生类对象
	delete pb;						//释放基类指针
     return 0;
}
