#include<iostream>
using namespace std;
template< typename T>				//定义类模板A
class A
{
private:
	T _item;
public:
	A(const T& t) :_item(t){}
	template<class U, class V> 		//声明非约束模板友元函数
	friend void show(U& u, V& v);
};
template< typename U, typename V>	//函数模板show()的定义
void show(U& u, V& v){cout<<u._item<<","<<v._item<<endl;}
int main()
{
	A<int> a(10);					//定义A<int>类对象a
	A<int> b(20);					//定义A<int>类对象b
	A<double> c(1.2);				//定义A<int>类对象c
	cout<<"a,b: ";  
     show(a, b);						//调用show()函数，传入对象a、b作为实参
	cout<<"a,c:"; 
     show(a, c);						//调用show()函数，传入对象a、c作为实参
	return 0;
}
