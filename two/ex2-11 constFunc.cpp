#include <iostream>
using namespace std;
class  Person							//定义类Person
{
public:
    Person(string ,int,string,string); //声明带参构造函数
    ~Person();							//声明析构函数
    const string _addr; 				//声明表示住址的常成员变量
    void  myInfor() const;				//声明显示个人信息的常成员函数
    void  myInfor();					//声明显示个人信息的普通成员函数
    void place();						//声明显示住址的普通成员函数
private:
    const string _name; 				//声明表示姓名的常成员变量
    const int _age;						//声明表示年龄的常成员变量
    string _favFruit;					//声明表示水果的普通成员变量
};
//有参构造函数初始化对象
Person::Person(string name,int age,string addr,string favFruit):
	_name(name), _age(age),_addr(addr),_favFruit(favFruit)
{
}
void Person::myInfor() const			//类外实现常成员函数myInfor()
{
    //_favFruit="榴莲";
    //place();
    cout<<"我叫"<<_name<<"今年"<<_age<<"岁"<<"我喜欢吃"<<_favFruit<<endl;  
}
Person:: ~Person(){}					//类外实现析构函数
void Person::myInfor()					//类外实现普通成员函数myInfor()
{
    _favFruit="桃子";
    cout<<"我叫"<<_name<<"今年"<<_age
 		<<"岁"<<"我喜欢吃"<<_favFruit<<endl; 
    place();
}
void Person::place()					//类外实现普通成员函数place()
{
    cout<<"我住在"<<_addr<<endl;
}
int main()
{
    Person p1("张三",18,"北大街","苹果");			//创建对象p1
    p1.myInfor();								//调用普通成员函数myInfor()
    const Person p2("李四",18,"南大街","橘子");	//创建常对象p2
    p2.myInfor();								//调用常成员函数myInfor()
    return 0;
}
