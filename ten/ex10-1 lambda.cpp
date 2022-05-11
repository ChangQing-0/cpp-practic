#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num = 100;
	//lambda表达式
	auto f = [num](int x)->int {return x + num; };
	cout << f(10) << endl;
	//创建vector对象v
	vector<int> v = { 54,148,3,848,2,89 };
	//调用for_each()函数遍历输出v容器中的元素
	for_each(v.begin(), v.end(), [](auto n) {
		cout << n << " "; });
	return 0;
}
