#include <iostream>
#include <math.h>
using namespace std;
class Point;
class Circle
{
public:
    float getArea(Point &p1,Point &p2); 		//声明计算面积的成员函数
private:
    const float PI=3.14;
};
class Point
{
//声明类Circle的getArea()函数为友元函数声明
friend float Circle::getArea(Point &p1,Point &p2);	
public:
    Point (float x,float y);
    ~Point();
private:
    float _x;
    float _y;
};
Point::Point(float x=0,float y=0):_x(x),_y(y)	//实现Point类的构造函数
{
    cout<<"初始化坐标点"<<endl;
}
Point::~Point(){}
float Circle::getArea(Point &p1,Point &p2)
{
    double x=abs(p1._x-p2._x); 					//获取横轴坐标间的距离
    float y=abs(p1._y-p2._y); 					//获取纵轴坐标间的距离
    float len=sqrtf(x*x+y*y);					//计算两个坐标点之间的距离
    cout<<"获取两个坐标点之间的距离是"<<len<<endl;
    return len*len*PI; 							//友元函数访问私有成员变量PI
}
int main()
{
    Point p1(5,5);
    Point p2(10,10);
    Circle circle;
    float area=circle.getArea(p1,p2);
    cout<<"圆的面积是："<<area<<endl;
    return 0;
}
