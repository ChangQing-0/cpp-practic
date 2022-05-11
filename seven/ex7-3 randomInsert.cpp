#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<char> v;  					//创建空的vector容器v
	v.insert(v.begin(), 'a');  			//在头部位置插入元素a
	v.insert(v.begin(), 'b');			//在头部位置插入元素b
	v.insert(v.begin(), 'c');			//在头部位置插入元素c
	v.insert(v.begin() + 1, 5, 't');  	//在v.begin()+1位置插入5个元素t
	for (int i = 0; i < 8; i++)  		//输出容器v中的元素
		cout << v[i] << " ";
	cout << endl;
	cout << "after erase elems:\n"; 
 	//删除begin()+1到begin()+6区间的5个元素
	v.erase(v.begin() + 1, v.begin() + 6); 
	for (int i = 0; i <3; i++)			//输出容器v中的元素
		cout << v[i] << " ";
	cout << endl;
	return 0;
}
