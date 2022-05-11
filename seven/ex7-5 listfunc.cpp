#include <iostream>
#include <list>
using namespace std;
template<typename T>
void print(list<T> mylist)  			//定义函数模板，输出list容器元素
{
	typename list<T>::iterator it;  	//创建list的iterator迭代器
	for (it = mylist.begin(); it != mylist.end(); it++)
		cout << *it << " ";
	cout << endl;
}
int main()
{
	list<int> lt;						//创建空的list容器lt
	for (int i = 0; i < 10; i++)
		lt.push_back(i + 1);   			//向容器中添加元素
	cout << "输出list容器中的元素：" << endl;
	print(lt);
	lt.pop_back(); 						//删除最后一个元素
	lt.push_front(5); 					//在头部添加元素5
	cout << "再次输出list容器中的元素：" << endl;
	print(lt);
	lt.remove(5);
	cout << "删除5之后，输出list容器中的元素：" << endl;
	print(lt);
	return 0;
}
