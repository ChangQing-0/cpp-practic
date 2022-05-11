#include <iostream>
#include <set>
#include <functional>
using namespace std;
int main()
{
	set<int, greater<int>> s;  			//创建set容器s，元素按降序排列
	multiset<char> ms;  				//创建multiset容器ms
	//向s中插入元素
	pair<set<int>::iterator, bool> ps;
	ps = s.insert(12);
	if (ps.second == true)
		cout << "insert success" << endl;
	s.insert(39);
	s.insert(32);
	s.insert(26);
	//向ms中插入元素
	ms.insert('a');
	ms.insert('z');
	ms.insert('T');
	ms.insert('u');
	ms.insert('u');
	//输出两个容器中的元素
	set<int>::iterator its; 			//创建容器s的迭代器，用于获取元素
	cout << "s容器中元素：";
	for (its = s.begin(); its != s.end(); its++)
		cout << *its << " ";
	cout << endl;
	multiset<char>::iterator itms;  	//创建容器ms的迭代器
	cout << "ms容器中元素：";
	for (itms = ms.begin(); itms != ms.end(); itms++)
		cout << *itms << " ";
	cout << endl;	
 	//查找容器ms中元素u的个数
	cout <<"ms容器中u元素个数："<< ms.count('u') << endl;
	return 0;
}
