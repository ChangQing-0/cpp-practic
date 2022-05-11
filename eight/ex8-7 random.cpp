#include <iostream>
#include <fstream>
using namespace std;
int main( ) 
{
	//创建输出文件流对象ofs
	ofstream ofs("random.dat",ios::out|ios::binary);
	if(!ofs)
	{
		cout<<"写入文件时，文件打开失败"<<endl;
		exit(0);
	}
	//输出文件位置指针的位置
	cout<<"文件打开时，文件位置指针位置："<<ofs.tellp()<<endl;
	cout<<"请输入数据："<<endl;
	char buf[1024]={0};				//定义字符数组buf
	cin.getline(buf,1024,'/');		//从键盘读取数据存储到buf中
	ofs.write(buf,30);				//调用write()函数将buf中的数据写入到文件
	//写入完成之后，输出文件位置指针的位置
	cout<<"写入完成后，文件位置指针位置："<<ofs.tellp()<<endl;
	ofs.seekp(-10,ios::end);		//移动文件位置指针
	//移动之后，输出文件位置指针的位置
	cout<<"移动之后，文件位置指针位置："<<ofs.tellp()<<endl;
	return 0;
}
