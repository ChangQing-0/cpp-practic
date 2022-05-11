#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	//创建文件流对象，并以只写模式打开hello.txt文件
	ofstream ofs("hello.txt",ios::out); 
	if (!ofs)							//判断文件打开是否成功
	{
		cout<<"写文件时，文件打开失败"<<endl;
		exit(0);
	}
	cout<<"将26个字母写入文件"<<endl;
	char ch1='a';
	for(int i=0;i<26;i++)
	{
		ofs.put(ch1+i);					//调用put()函数将字母写入文件
	}
	cout<<"文件写入成功"<<endl;
	ofs.close();						//关闭文件
	//创建文件流对象，并以只读模式打开hello.txt文件
	ifstream ifs("hello.txt",ios::in);
	if (!ifs)							//判断文件是否打开成功
	{
		cout<<"读文件时，文件打开失败"<<endl;
		exit(0);
	}
	cout<<"文件读取成功，内容如下："<<endl;
	char ch2;
	ifs.get(ch2);						//调用get()函数将字母读取到ch2变量中
	while (!ifs.eof())					//循环读取剩余字母
	{
		cout<<ch2;						//输出ch2的值
		ifs.get(ch2);
	}
	ifs.close();						//关闭文件
	return 0;
}
