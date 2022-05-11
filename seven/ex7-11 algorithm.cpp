#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
using namespace std;
template<typename T>
class Multi  											//定义类模板
{
private:
		T value;
public:
		Multi(const T& v) :value(v){}  					//构造函数
		void operator()(T& elem) const 					//重载()运算符
 		{ 
 			elem *= value; 
 		} 
};
int main()
{
	int arr[] = { 5,3,2,1,6,4 };
	vector<int> v;
	v.assign(arr, arr + sizeof(arr) / sizeof(int));	//用数组给v容器赋值
	//调用for_each()函数将容器中每个元素都乘以2
    for_each(v.begin(), v.begin(), Multi<int>(2));
	//调用copy()构造函数将容器中元素输出到屏幕
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
 	cout << endl;
	//调用find()算法查找容器中是否存在值为200的元素
    vector<int>::iterator it = find(v.begin(), v.end(), 200); 
	if (it!= v.end())
		cout << "容器中有值为200的元素" << endl;
	else
		cout << "容器中不存在值为200的元素" << endl;
 	//调用sort()算法将容器中元素从小到大排序
	sort(v.begin(), v.end()); 
	cout << "排序之后：" << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	int sum = accumulate(v.begin(), v.end(), 0); //累加容器中元素
	cout << "sum = " << sum << endl;
	return 0;
}
