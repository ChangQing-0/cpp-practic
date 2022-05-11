#include<iostream>
using namespace std;
class Animal						//动物类Animal
{
public:
	virtual void speak()=0;			//纯虚函数speak()
	virtual void eat()=0;			//纯虚函数eat()
	virtual ~Animal();				//虚析构函数
};
Animal::~Animal()
{
	cout<<"调用Animal析构函数"<<endl;
}
class Cat :public Animal			//猫类Cat公有继承Animal类
{
public:
	void speak();					//声明speak()函数
	void eat();						//声明speak()函数
	~Cat();							//声明析构函数
};
void Cat::speak()					//实现speak()函数
{
	cout<<"小猫喵喵叫"<<endl;
}
void Cat::eat()						//实现eat()函数
{
	cout<<"小猫吃鱼"<<endl;
}
Cat::~Cat()							//实现析构函数
{
	cout<<"调用Cat析构函数"<<endl;
}
class Rabbit :public Animal			//兔子类Rabbit公有继承Animal类
{
public:
	void speak();					//声明speak()函数
	void eat();						//声明eat()函数
	~Rabbit();						//声明析构函数
};
void Rabbit::speak()				//实现speak()函数
{
	cout<<"小兔子咕咕叫"<<endl;
}
void Rabbit::eat()					//实现eat()函数
{
	cout<<"小兔子吃白菜"<<endl;
}
Rabbit::~Rabbit()					//实现析构函数
{
	cout<<"调用Rabbit析构函数"<<endl;
}
int main()
{
	Animal* pC=new Cat;				//定义基类指针pC指向Cat类对象
	pC->speak();					//通过pC指针调用Cat类的speak()函数
	pC->eat();						//通过pC指针调用Cat类的eat()函数
	delete pC;						//释放指针pC指向的空间
	Animal *pR=new Rabbit;			//定义基类指针pR指向Rabbit类对象
	pR->speak();					//通过pR指针调用Rabbit类的speak()函数
	pR->eat();						//通过pR指针调用Rabbit类的eat()函数
	delete pR;						//释放pR指向的空间
    return 0;
}
