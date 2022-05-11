#include <iostream>
using namespace std;
class Student							//定义学生类Student
{
public:
void setGrade(string grade);			//设置年级的成员函数
string getGrade();						//获取年级的成员函数
void setName(string name);				//设置姓名的成员函数
string getName();						//获取姓名的成员函数
protected:
	string _grade;						//保护成员：表示年级
private:
	string _name;						//私有成员：表示姓名
};
void Student::setGrade(string grade)	//类外实现setGrade()函数
{
	_grade=grade;
}
string Student::getGrade()				//类外实现getGrade()函数
{
	return _grade;
}
void  Student::setName(string name)		//类外实现setName()函数
{
	_name=name;
}
string Student::getName()				//类外实现getName()函数
{
	return _name;
}
class Undergraduate:public Student		//大学生类公有继承学生类
{
public:
	Undergraduate(string major);		//声明构造函数
	void show();						//声明显示大学生信息的成员函数
private:
	string _major;						//私有成员：表示专业
};
//类外实现构造函数
Undergraduate::Undergraduate(string major)
{
	_major=major;
}
void Undergraduate::show()				//类外实现show()函数
{
	cout<<"姓名："<<getName()<<endl;		//派生类调用基类成员函数
	cout<<"年级："<<_grade<<endl;		//派生类访问继承的基类成员变量
	cout<<"专业："<<_major<<endl;		//派生类访问新增成员
}
int main()
{
	//创建大学生类对象stu
	Undergraduate stu("计算机信息工程");	
	stu.setGrade("大三");			//派生类对象调用基类成员函数设置年级
	stu.setName("zhangsan");		//派生类对象调用基类成员函数设置姓名
	stu.show();						//派生类对象调用新增成员函数显示学生信息
	return 0;
}
