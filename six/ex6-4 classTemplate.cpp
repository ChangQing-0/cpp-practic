#include<iostream>
using namespace std;
template< typename T>  					//类模板
class Array
{
private:
	int _size;
	T* _ptr;
public:
	Array(T arr[], int s);
	void show();
};
template< typename T> 					//类模板外定义其成员函数
Array<T>::Array(T arr[], int s)
{
	_ptr = new T[s];
	_size = s;
	for (int i=0;i<_size; i++)
	{
		_ptr[i]=arr[i];
	}
}
template< typename T> 					//类模板外定义其成员函数
void Array<T>::show()
{
	for (int i=0;i<_size;i++)
		cout<<*(_ptr + i)<<" ";
	cout<<endl;
}
int main()
{
	char cArr[] = { 'a', 'b', 'c', 'd', 'e' };
	Array<char> a1(cArr, 5);  		//创建类模板的对象
	a1.show();
	int iArr[10] = { 1, 2, 3, 4, 5, 6 };
	Array<int> a2(iArr, 10);
	a2.show();
	return 0;
}
