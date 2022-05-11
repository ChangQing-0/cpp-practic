#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Sheep												//定义绵羊类Sheep
{
public:
	Sheep(string name,string color,const char*home);	//声明带参数构造函数
	Sheep(const Sheep& another);						//声明拷贝构造函数
	void show();										//声明普通成员函数
	~Sheep();											//声明析构函数
private:
	string _name;							//声明表示绵羊名字的成员变量
	string _color;							//声明表示绵羊颜色的成员变量
	char* _home;							//声明表示绵羊家的成员变量
};
Sheep::Sheep(string name, string color,const char*home)
{
	cout<<"调用构造函数"<<endl;
	_name=name;
	_color=color;
	//为指针成员home分配空间，将形参home的内容复制到_home指向的空间
	int len=strlen(home)+1;
	_home=new char[len];
	memset(_home,0,len);
	strcpy(_home,home);
}
Sheep::Sheep(const Sheep& another)		//类外实现拷贝构造函数
{
	cout<<"调用拷贝构造函数"<<endl;
	_name=another._name;
	_color=another._color;
	int len = strlen(another._home) + 1;
	_home = new char[len];
	memset(_home, 0, len);
	strcpy(_home, another._home);    //深拷贝
	//_home=another._home;				//浅拷贝
}
void Sheep::show()
{
	cout<<_name<<" "<<_color<<" "<<_home<<endl;
}
Sheep::~Sheep()
{
	cout<<"调用析构函数"<<endl;
	if(_home!=NULL)
		delete []_home;
}
int main()
{
	const char *p = "beijing";
	Sheep sheepA("Doly","white",p);
	cout<<"sheepA:";
	sheepA.show();
	Sheep sheepB(sheepA);				//使用sheepA初始化新对象sheepB
	cout<<"sheepB:";
	sheepB.show();
	return 0;
}
