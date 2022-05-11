#include <iostream>
using namespace std;
class Sheep								//定义绵羊类Sheep
{
public:
	Sheep(string name,string color);	//声明带参数构造函数
	Sheep(const Sheep& another);		//声明拷贝构造函数
	void show();						//声明普通成员函数
	~Sheep();							//声明析构函数
private:
	string _name;						//声明表示绵羊名字的成员变量
	string _color;						//声明表示绵羊颜色的成员变量
};
Sheep::Sheep(string name, string color)
{
	cout<<"调用构造函数"<<endl;
	_name=name;
	_color=color;
}
Sheep::Sheep(const Sheep& another)		//类外实现拷贝构造函数
{
	cout<<"调用拷贝构造函数"<<endl;
	_name=another._name;
	_color=another._color;
}
void Sheep::show()
{
	cout<<_name<<" "<<_color<<endl;
}
Sheep::~Sheep()
{
	cout<<"调用析构函数"<<endl;
}

int main()
{
	Sheep sheepA("Doly","white");
	cout<<"sheepA:";
	sheepA.show();
	Sheep sheepB(sheepA);				//使用sheepA初始化新对象sheepB
	cout<<"sheepB:";
	sheepB.show();
 	return 0;
}
