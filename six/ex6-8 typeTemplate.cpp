#include <iostream>
using namespace std;
template< typename T, unsigned len> 	//非类型模板参数unsigned len
class Array
{
public:
	T& operator[](unsigned i)		//重载下标运算符
	{
		if (i >= len)
				cout << "数组越界" << endl;
		else
				return arr[i];
	}
private:
	T arr[len];
};
int main()
{
	Array<char, 5> arr1;  			//定义一个长度为5的char类型数组
	Array<int, 10> arr2;  			//定义一个长度为10的int数组
	arr1[0]= 'A';
	cout<<arr1[0]<<endl;
	for (int i = 0; i < 10; i++)	//为int类型数组arr2赋值并输出
		arr2[i] = i + 1;
	for (int i = 0; i < 10; i++)
		cout<<arr2[i]<< " ";
		cout<<endl;
	return 0;
}
