#include <iostream>
using namespace std;
class Shape						//定义形状类Shape
{
public:
	Shape();					//构造函数
	~Shape();					//析构函数
	static int count;			//静态成员变量count
};
int Shape::count = 0;			//count初始值为0
Shape::Shape()					//实现构造函数
{
	count++;
	if (Shape::count == 3)
		throw "纸张画不下啦！！";
	cout << "Shape构造函数" << endl;
}
Shape::~Shape()					//实现析构函数
{
	cout << "Shape析构函数" << endl;
}
int main()
{
	Shape circle;				//画圆形
	try							//try语句块检测可能抛出异常的代码
	{
		int num = 2;			//定义int类型变量num,表示纸张可画两个图形
		cout << "纸张可画图形个数：" << num << endl;
		Shape rectangle;		//画长方形
		Shape triangle;		 	//画三角形
	}
	catch (const char* e)		//捕获异常
	{
		cout << e << endl;
	}
	return 0;
}
