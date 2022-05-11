#include <iostream>
using namespace std;
class Student       					//定义学生类Student
{
public:
    Student(string name);				//声明带参构造函数
    ~Student();							//声明析构函数
     static int _sum;					//声明表示学生总数的静态成员变量
private:
    string _name;						//声明表示学生姓名的成员变量
};
//类外实现Student类带参数的构造函数
Student::Student(string name)
{
    this->_name=name;
    _sum++;   
}
Student::~Student(){}					//类外实现析构函数
int Student::_sum = 0;					//类外初始化静态成员变量_sum
int main()
{
    Student stu1("张三");
    Student stu2("李四");
    cout<<"人数是:"<<stu1._sum<<endl;	//通过对象访问静态成员变量
    cout<<"人数是:"<<stu2._sum<<endl;
     cout<<"人数是"<<Student::_sum<<endl;//通过类访问静态成员变量
     cout<<"stu1的大小是:"<<sizeof(stu1)<<endl;
    return 0;
}
