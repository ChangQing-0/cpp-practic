#include<iostream>
using namespace std;
template <typename T>  				//定义函数模板
T add(T t1,T t2)
{
	return t1+t2;
}
int main()
{
	cout<<add(1,2)<<endl;  			//传入int类型参数
	cout<<add(1.2,3.4)<<endl; 		//传入double类型参数
	return 0;
}
