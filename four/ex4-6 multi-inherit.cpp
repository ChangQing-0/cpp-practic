#include <iostream>
using namespace std;
class Wood								//木材类Wood
{
public:
	Wood(){cout<<"木材构造函数"<<endl; }	
	~Wood(){cout<<"木材析构函数"<<endl; }
};
class Sofa								//沙发类Sofa
{
public:
	Sofa(){cout<<"沙发构造函数"<<endl; }
	~Sofa(){cout<<"沙发析构函数"<<endl; }
	void sit(){cout<<"Sofa用来坐..."<<endl; }
};
class Bed								//床类Bed
{
public:
	Bed(){cout<<"床的构造函数"<<endl; }
	~Bed(){cout<<"床的析构函数"<<endl; }
	void sleep(){cout<<"Bed用来睡觉..."<<endl; }
};
class Sofabed:public Sofa,public Bed	//Sofabed类，公有继承Sofa类和Bed类
{
public:
	Sofabed(){cout<<"沙发床构造函数"<<endl; }
	~Sofabed(){cout<<"沙发床析构函数"<<endl; }
	Wood pearwood;						//Wood对象，梨木
};
int main()
{
	Sofabed sbed;						//创建沙发床对象sbed
	sbed.sit();							//通过sbed调用基类Sofa的sit()函数
	sbed.sleep();						//通过sbed调用基类Bed的sleep()函数
	return 0;
}
