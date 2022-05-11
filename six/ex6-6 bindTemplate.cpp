#include <iostream>
using namespace std;
template< typename T>					//声明函数模板func()
void func();
template< typename T>					//声明函数模板show()
void show(T& t);
template< typename U>					//类模板定义
class A
{
private:
	U _item;
	static int _count;
public:
	A(const U& u):_item(u){_count++;}
	~A(){_count--;}
	friend void func<U>(); 				//声明友元函数func()
	friend void show<>(A<U>& a); 		//声明友元函数show()
};
template< typename T>
int A<T>::_count = 0;
template< typename T>					//函数模板func()的定义
void func()
{
	cout<<"template size:"<<sizeof(A<T>)<<";";
	cout<<" template func():"<<A<T>::_count<<endl;
}
template< typename T>					//函数模板show()的定义
void show(T& t){cout << t._item << endl;}
int main()
{
	func<int>(); 		//调用int类型的函数模板实例，int类型，其大小为4字节
	A<int> a(10);  		//定义A<int>类对象a
	A<int> b(20); 		//定义A<int>类对象b
	A<double> c(1.2); 	//定义A<double>类对象c
	show(a); 			//调用show()函数，输出类对象a的值
	show(b);			//调用show()函数，输出类对象b的值
	show(c);			//调用show()函数，输出类对象c的值
	cout<<"func<int> output:\n";
	func<int>();  		//运行到此，已经创建了两个int类型对象
	cout<<"func<double>()output:\n";
	func<double>();
	return 0;
}
