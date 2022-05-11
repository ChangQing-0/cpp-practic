#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Student
{
private:
	string _id;
 	char* _name;
public:
 	Student(string id, const char* name) :_id(id)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
}
	operator  char*()			//类型转换运算符重载函数
	{
		return _name;
	}
	void show()
	{
		cout<<"ID:"<<_id<<","<<"name:"<<_name<<endl;
	}
};
int main()
{
	Student s1("1001","小明");	//调用普通构造函数创建对象
	cout<<"s1: "; 
	s1.show();
	char *ch=s1;				//调用类型转换函数
	cout<<ch<<endl;
	return 0;
}
