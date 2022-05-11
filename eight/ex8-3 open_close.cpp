#include <iostream>
#include <fstream>					//包含fstream文件
using namespace std;
int main()
{
	ifstream ifs;					//创建输入流对象
 	ifs.open("hello.txt", ios::in);			//以只读方式打开hello.txt
 	if (!ifs)					//判断文件打开是否成功
 		cout << "文件打开失败" << endl;
 	else
 		cout << "文件打开成功" << endl;
	ifs.close();					//关闭文件
	return 0;
}
