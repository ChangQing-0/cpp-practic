#include <iostream>
using namespace std; 
void add(int x,int y=1,int z=2) 
{
	cout<<x+y+z<<endl;
}
int main()
{
	add(1);      	//只传递1给形参x，y、z使用默认形参值
	add(1,2);    	//传递1给x，2给y,z使用默认形参值
	add(1,2,3); 	//传递三个参数，不使用默认形参值
	return 0;
}
