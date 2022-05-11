#include <iostream>
using namespace std;
//类模板
template<typename T>
class Special
{
public:
	Special(T a, T b)
	{
		_a = a;
		_b = b;
	}
	T compete()
	{
		cout << "类模板" << endl;
		return _a > _b ? _a : _b;
	}
private:
	T _a;
	T _b;
};
//类模板全特化
template<>
class Special<const char*>			//指定特化类型为const char*
{
public:
	Special(const char* a, const char* b)
	{
		_a = a;
		_b = b;
	}
	const char* compete()			//重新定义成员函数compete()
	{
		cout << "类模板特化" << endl;
		if (strcmp(_a, _b)>0)
			return _a;
		else
			return _b;
	}
private:
	const char* _a;
	const char* _b;
};
int main()
{
	//创建Special<string>类对象s1
	Special<string> s1("hello", "nihao");
	cout << s1.compete() << endl;
	//创建Special<const char*>类对象s2
	Special<const char*> s2("hello", "nihao");
	cout << s2.compete() << endl;
	return 0;
}
