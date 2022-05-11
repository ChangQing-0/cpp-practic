#include<iostream>
using namespace std;
class A
{
private:
	int _x;
	int _y;
public:
	A(int x=0,int y=0):_x(x),_y(y){}
	void show() const; 		//输出数据
	A operator++();  		//重载前置++
	A operator++(int); 		//重载后置++
};
void A::show() const
{
	cout<<"(_x,_y)="<<"("<<_x<<","<<_y<<")"<<endl;
}
A A::operator++()  			//前置++实现
{
	++_x;
	++_y;
	return *this;
}
A A::operator++(int) 	 	//后置++实现
{
	A a=*this;
	++(*this);  			//调用已经实现的前置++
	return a;
}
int main()
{
	A a1(1,2), a2(3,4);
	(a1++).show();
	(a1).show();
	(++a2).show();
	return 0;
}
