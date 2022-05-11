#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	//创建文件流对象，并以只写模式打开hello.txt文件
	ofstream ofs("hello.txt",ios::out); 
	if (!ofs)								//判断文件打开是否成功
	{
		cout<<"写文件时，文件打开失败"<<endl;
		exit(0);
	}
	cout<<"请输入要写入文件的数据："<<endl;
	char str[1024]={0};						//定义数据str
	cin>>str;								//从键盘输入数据存储到str数组
	ofs<<str;								//将str数组中数据写入文件
	cout<<"文件写入成功"<<endl;
	ofs.close();							//关闭文件
	//创建文件流对象，并以只读模式打开hello.txt文件
	ifstream ifs("hello.txt",ios::in);
	if (!ifs)								//判断文件是否打开成功
	{
		cout<<"读文件时，文件打开失败"<<endl;
		exit(0);
	}
	char buf[1024]={0};						//定义数组buf
	ifs>>buf;								//将文件内容读入到buf
	cout<<"文件读取成功，内容如下："<<endl;
	cout<<buf<<endl;						//输出buf数组中的数据
	ifs.close();							//关闭文件
	return 0;
}
