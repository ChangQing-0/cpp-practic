#include <iostream>
#include <sstream>
using namespace std;
//定义模板函数：将一个数字字符串转换成对应的数值
template<class T>
inline T swapString(const string &str)
{
	istringstream istr(str);				//创建istringstream类对象istr
	T t;							//定义变量t
	istr>>t;						//将对象istr中的数据输入到t中
	return t;						//返回t
}
int main( ) 
{
	int num=swapString<int>("10");		//将字符串"10"转换成数值10
	cout<<"num="<<num<<endl;
	double d=swapString<double>("3.14");	//将字符串"3.14"转换成数值3.14
	cout<<"d="<<d<<endl;
	float f=swapString<float>("abc");
	cout<<"f="<<f<<endl;
	return 0;
}
