#include <iostream>
#include <fstream>
using namespace std;
class AbstractException				//定义抽象异常类AbstractException
{
public:
	virtual void printErr() = 0;	//纯虚函数printErr()
};
//定义文件异常类FileException公有继承AbstractException
class FileException : public AbstractException
{
public:
	virtual void printErr()			//实现prinErr()函数
	{
		cout << "错误：文件不存在" << endl;
	}
};
//定义整除异常类DivideException公有继承AbstractException
class DivideException : public AbstractException
{
public:
	virtual void printErr()			//实现printErr()函数
	{
		cout << "错误：除零异常" << endl;
	}
};
void readFile()						//定义readFile()函数
{
	ifstream ifs("log.txt");		//创建文件输入流对象ifs并打开log.txt文件
	if (!ifs)						//如果文件打开失败
	{
		throw FileException();		//抛出异常
	}
	ifs.close();					//关闭文件
}
void divide()						//定义divide()函数
{
	int num1 = 100;
	int num2 = 2;
	if (num2 == 0)					//如果除数num2为0
	{
		throw DivideException();	//抛出异常
	}
	int ret = num1 / num2;
	cout << "两个数相除结果：" << ret << endl;
}
int main()
{
	try	
	{
		readFile();					//检测readFile()函数调用
		divide();					//检测divide()函数调用
	}
	catch (FileException& fex)		//捕获FileException&类型异常
	{
		fex.printErr();				//调用相应函数输出异常信息
	}
	catch (DivideException& dex)	//捕获DivideException&类型异常
	{
		dex.printErr();
	}
	catch (...)						//捕获任意类型异常	
	{
		cout << "处理其他异常" << endl;
	}
 	cout << "程序执行结束" << endl;
	return 0;
}
