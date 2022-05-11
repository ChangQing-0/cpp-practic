#include <iostream>
using namespace std;
void add(int x, int y)
{
	cout << "int: " << x + y << endl;
}
void add(double x)
{
	cout << "double: " << 10 + x << endl;
}
double add(double x, double y)
{
	return x + y;
}
int main()
{
	add(10.2);  		//一个double类型参数
	add(1, 3);  		//两个int类型参数
	return 0;
}
