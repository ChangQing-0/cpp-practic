#include <iostream>
using namespace std;
void exchange(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a, b;
	cout << "please input two nums: " << endl;
	cin >> a >> b;
	exchange(a, b);
	cout << " exchange: " << a << " "<< b << endl;
	return 0;
}
