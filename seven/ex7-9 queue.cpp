#include <iostream>
#include <list>
#include<queue>									//包含头文件queue
using namespace std;
int main()
{
	list <int >l = { 1,2,3 };					//创建list容器l
	queue<int, list <int>> q(l);				//创建queue容器q
	q.push(4);
	q.emplace(5);
	q.pop();
	cout << "第一个元素" << q.front() << endl;	//获取第一个元素
	cout << "最后一个元素" << q.back() << endl;	//获取最后一个元素
	while(!q.empty())
	{
		cout << " "<<q.front();
		q.pop();
	}
	return 0;
}
