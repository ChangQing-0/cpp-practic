#include<iostream>
using namespace std;
class A
{
private:
	int _x;
	int _y;
public:
	A(int x=0,int y=0):_x(x),_y(y){}
		void show() const;					//输出数据
		A operator+(const A& a) const;		//重载+运算符
		A operator- (const A& a) const;		//重载-运算符
	};
	void A::show() const					//show()函数的实现
	{
		cout<<"(_x,_y)="<<"("<<_x<<","<<_y<<")"<<endl;
	}
	A A::operator+(const A& a) const		//重载+运算符的实现
	{
		return A(_x+a._x,_y+a._y);
	}
	A A::operator-(const A& a) const		//重载-运算符的实现
	{
		return A(_x-a._x,_y-a._y);
	}
int main()
{
	A a1(1,2);
	A a2(4,5);
	A a;
	cout<<"a1: "; 
	a1.show();
	cout<<"a2: "; 
	a2.show();
	a=a1+a2;					//实现两个对象相加
	cout<<"a: "; 
	a.show();
	a=a1-a2;					//实现两个对象相减
	cout<<"a: "; 
	a.show();
	return 0;
}
