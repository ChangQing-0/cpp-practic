#include <iostream>
#include <map>
#include <functional>
#include <string>
using namespace std;
//定义printm()函数输出map容器元素
void printm(map<char, double> mymap)
{
	pair<char, double> p;  					//创建pair对象p
	map<char, double>::iterator it; 		//定义map的iterator迭代器it
	for (it = mymap.begin(); it != mymap.end(); it++)
	{
		p = (pair<char, double>)*it; 		//将迭代器指向的一对元素存放到p中
		cout << p.first << "->" << p.second << endl; 	//输出一对元素
	}
}
//定义printmt()函数输出multimap容器元素
void printmt(multimap<int, string> mymul)
{
	pair<int, string> p;
	multimap<int, string>::iterator it;
	for (it = mymul.begin(); it != mymul.end(); it++)
	{
		p = (pair<int, string>)*it;
		cout << p.first << "->" << p.second << endl;
	}
}
int main()
{
	map<char, double> m;   					//创建一个map容器m
	//向容器m中插入元素
	m['a'] = 1.2;
	m['b'] = 3.6;
	m['c'] = 6.4;
	m['d'] = 0.8;
	m['e'] = 5.3;
	m['f'] = 3.6;
	cout << "map: " << endl;
	printm(m);								//调用printm()函数输出容器m中的元素
	cout << "map中key=a的值：" << m.at('a') << endl;
	cout << "map中key=f的元素个数：" << m.count('f') << endl;
	multimap<int, string> mt;  				//创建一个multimap容器mt
	//向容器mt中插入元素
	mt.insert(pair<int, string>(1, "Hello"));
	mt.insert(make_pair(1, "China"));
 	mt.insert(make_pair(2, "!"));
	cout << "multimap: " << endl;
	printmt(mt);							//调用printmt()函数输出容器mt中的元素
	return 0;
}
