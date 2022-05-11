#include <iostream>
using namespace std;
int main()
{
	char buf[50]={0};
	cout<<"请输入一个字符串："<<endl;
	cin.read(buf,25);
	cout<<"输出："<<endl<<buf<<endl;
 	return 0;
}
