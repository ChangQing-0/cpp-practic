#include<iostream>
using namespace std;
class A
{
private:
	int _x;
	int _y;
public:
	A(int x=0,int y=0):_x(x),_y(y){}
	friend ostream& operator<<(ostream& os,const A& a);  //重载<<运算符
	friend istream& operator>>(istream& is,A& a);         //重载>>运算符
};
ostream& operator<< (ostream& os, const A& a)
{
	os<<"("<<a._x<<","<<a._y<<")"; //输出类的数据成员
	return os;
}
istream& operator>>(istream& is, A& a)
{
	is>>a._x>>a._y;                  //输入类的成员数据
	return is;
}
int main()
{
	A a1(1,2);
	cout<<"a1:"<<a1<<endl;
	cout<<"请重新为a1对象输入数据："<<endl;
	cin>>a1;
	cout<<"重新输入后a1:"<<a1<<endl;
	return 0;
}
