#include <iostream>
using namespace std;
template< typename T>
class A
{
	T _item;
	static int _count;  				//静态变量
public:
	A(const T& t) :_item(t){ _count++; }
	~A(){ _count--; }
	friend void func();  				//无参友元函数func()
	friend void show(const A<T>& a); 	//有参友元函数show()
};
template< typename T>
int A<T>::_count = 0;  					//初始化静态变量
void func()  							//func()函数实现
{
	cout<<"int count:"<<A<int>::_count<<";";
	cout<<"double count:"<<A<double>::_count<<";"<<endl;
}
//模板形参为int类型
void show(const A<int>& a){	cout<<"int:"<<a._item<<endl;}
void show(const A<double>& a){cout<<"double:"<<a._item<<endl;}
int main()
{
	func();  							//调用无参友元函数
	A<int> a(10);  						//创建int类型对象
	func();
	A<double> b(1.2);
	show(a);  							//调用有参数的友元函数
	show(b);
	return 0;
}
