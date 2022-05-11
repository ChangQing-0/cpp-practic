#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,3>c={1,2,3};						//创建array容器c
	array<int,3>c1={2,3,4};						//创建array容器c1
	array<int,3>::iterator pos;					//定义iterator迭代器pos
	c.swap(c1);									//交换容器c和容器c1的元素
	for(pos=c.begin();pos!=c.end();++pos)		//使用迭代器pos遍历容器c中的元素
	{
		cout<<*pos<<" ";
	}
	return 0;
}
