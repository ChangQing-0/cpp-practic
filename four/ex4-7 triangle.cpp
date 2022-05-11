#include <iostream>
using namespace std;
class Sofa								//沙发类Sofa
{
public:
	void rest(){cout<<"沙发可以坐着休息"<<endl; }
};
class Bed								//床类Bed
{
public:
	void rest(){cout<<"床可以躺着休息"<<endl; }
};
class Sofabed:public Sofa,public Bed	//Sofabed类，公有继承Sofa类和Bed类
{
public:
	void function(){cout<<"沙发床综合了沙发和床的功能"<<endl; }
};
int main()
{
	Sofabed sbed;						//创建沙发床对象sbed
	sbed.rest();						//通过sbed调用rest()函数
	return 0;
}
