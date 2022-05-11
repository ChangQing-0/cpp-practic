#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Rabbit								//定义兔子类Rabbit
{
public:
	Rabbit(string name,const char *pf);	//声明构造函数
	void eat();
	~Rabbit();								//声明析构函数
private:
	string _name;							//声明表示兔子名字的成员变量
	char *_food;							//声明表示兔子食物的成员变量
};
Rabbit::Rabbit(string name, const char* pf)
{
	cout<<"调用构造函数"<<endl;
	_name=name;
	_food=new char[50];						//为_food指针申请空间
	memset(_food,0,50);						//初始化_food空间
	strcpy(_food,pf);						//将参数pf指向的数据复制到_food中
}
void Rabbit::eat()
{
	cout<<_name<<" is eating "<<_food<<endl;
}
Rabbit::~Rabbit()							//类外实现析构函数
{
	cout<<"调用析构函数，析构"<<_name<<endl;
	if(_food != NULL)
		delete []_food;
}
int main()
{
	Rabbit A("A","luobo");
	A.eat();
	Rabbit B("B","baicai");
	B.eat();
	return 0;
}
