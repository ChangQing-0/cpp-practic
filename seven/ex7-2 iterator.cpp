#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>c={1,2,3};					//创建vector容器c
	vector<int>::iterator pos;				//定义iterator迭代器pos
	vector<int>::reverse_iterator pos_r;	//定义reverse_iterator迭代器pos_r
	cout<<"iterator迭代器:";
	for(pos=c.begin();pos!=c.end();++pos)	//使用迭代器pos遍历容器c中的元素
	{
		cout<<*pos<<" ";
	}
	cout<<endl<<"reverse_iterator迭代器:";
 	//使用迭代器pos_r遍历容器c中的元素
	for (pos_r = c.rbegin(); pos_r != c.rend(); ++pos_r)
	{
		cout << *pos_r <<" ";
	}
	return 0;
}
