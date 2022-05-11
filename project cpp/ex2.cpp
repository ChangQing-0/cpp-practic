#include <iostream>
using namespace std;
class Birth								//定义出生日期类Birth
{
public:
	Birth(string sex,string di,int year,int month, int day);//构造函数
	void show();						//声明成员函数show()显示日期
private:
    string _sex;
    string _di;
    int _year;	
	int _month;
	int _day;
};
//类外实现构造函数
Birth::Birth(string sex,string di,int year, int month, int day)
	:_sex(sex),_di(di),_year(year),_month(month),_day(day)
{
	cout<<"Birth类构造函数"<<endl;
}
//类外实现show()函数
void Birth::show()
{
    cout << "性别：" << _sex << endl;
    cout << "地址：" << _di << endl;
   cout<< "出生日期：" << _year << "-" << _month << "-" << _day << endl;
}
class Student							//定义学生类Student
{
public:
	//构造函数
	Student(string name, long long id, string sex,string di,int year, int month, int day);	
	void show();
private:
	string _name;
    string _sex;
    string _di;
    long long _id;
	Birth birth;
};
//类外实现构造函数
Student::Student(string name, long long id,string sex,string di, int year, int month, int day)
	:birth(sex,di,year,month,day)
{
	cout<<"Student类构造函数"<<endl;
    _name=name;
	_id=id;
}
//类外实现show()函数
void Student::show()
{
	cout<<"姓名："<<_name<<endl;

    cout<<"学号："<<_id<<endl;
	birth.show();
}
int main()
{
 	Student stu("lili",500222200201163119,"男","南大街",2000,1,1);	//创建学生对象stu
	stu.show();								//显示学生信息
	return 0;
}
