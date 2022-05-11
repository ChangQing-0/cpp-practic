#include <iostream>
#include <fstream>
using namespace std;
struct Student					//定义学生结构体Student
{
 	char name[20];				//姓名
 	int age;					//年龄
 	char sex;					//性别
};
int main()
{
 	Student stus[3];			//定义学生结构体数组，大小为3
 	cout << "请输入3个学生的信息:\n（姓名 年龄 性别）" << endl;
 	for (int i = 0; i < 3; i++)	//通过for循环从键盘读入学生信息
 	{
 		cin >> stus[i].name>>stus[i].age>>stus[i].sex;
 	}
	//创建输出文件流对象，以二进制、写入模式打开student.dat二进制文件
 	ofstream ofs("student.dat", ios::out | ios_base::binary);
 	if (!ofs)
 	{
 		cerr << "写入时，文件打开失败" << endl;
 		exit(0);
 	}
 	//通过for循环将3个学生的信息写入文件	
 	for (int i = 0; i < 3; i++)
 	{
		//调用write()函数写入数据，每次写入一个学生信息
 		ofs.write(reinterpret_cast<char*>(&stus[i]), sizeof(stus[i]));
 		ofs.flush();
 	}
 	ofs.close();				//关闭文件
 	cout << "写入成功" << endl << "读取文件:" << endl;
 	//创建输入文件流对象，以只读和二进制模式打开student.txt文件
 	ifstream ifs("student.dat", ios::in | ios_base::binary);
 	if (!ifs)
 	{
 		cout << "读取时，文件打开失败" << endl;
 		exit(0);
 	}
	Student stus1[3];			//定义学生结构体数据存储读取的文件内容
 	for (int i = 0; i < 3; i++)
 	{
		//调用read()函数读取数据，每次读取一个学生信息
 		ifs.read(reinterpret_cast<char*>(&stus1[i]), sizeof(stus1[i]));
 		cout << stus1[i].name << " " << stus1[i].age 
			<< " " << stus1[i].sex << endl;
 	}
 	ifs.close();				//关闭文件
 	return 0;
}
