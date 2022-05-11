#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v; 								//创建一个空的vector容器v
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);  					//从尾部向容器v中插入10个元素
	for (int i = 0; i < 10; i++)
		cout << v[i] << "  ";  					//输出容器v中的元素
	cout << endl;
	v.pop_back(); 								//移除尾部元素
	for (int i = 0; i < 9; i++) 				//此时元素个数为9
		cout << v[i] << "  ";  					//输出容器v中的元素
	cout << endl;
	return 0;
}
