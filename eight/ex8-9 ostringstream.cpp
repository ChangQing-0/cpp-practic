#include <iostream>
#include <sstream>
using namespace std;
int main( ) 
{
	ostringstream ostr;			//创建ostringstream类对象
	string str;					//创建string类对象str
	cout<<"请输入一个字符串"<<endl;	
	getline(cin,str);			//调用getline()函数从键盘为str输入内容
	ostr<<str;					//将str内容插入到ostr流对象中
 	string result=ostr.str();	//调用str()成员函数获取ostr对象缓冲区内容
	cout<<result<<endl;			//输出获取的内容
	return 0;
}
