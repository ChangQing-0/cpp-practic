#include <iostream>
#include <math.h>
using namespace std;
class Point
{
public:
    Point (float x,float y);
    ~Point();
    static float getLen(Point &p1,Point &p2);
    static float _len; 
private:
    float _x;
    float _y;
};
float Point::_len=0;
Point::Point(float x=0,float y=0):_x(x),_y(y)
{
    cout<<"初始化坐标点"<<endl;
}
Point::~Point(){}
float Point::getLen(Point &p1,Point &p2)
{
    float x=abs(p1._x-p2._x);
    float y=abs(p1._y-p2._y);
    _len=sqrtf(x*x+y*y);
    return _len;
}
int main()
{
    Point p1(1,2);
    Point p2(6,8);
    cout<<Point::getLen(p1,p2)<<endl;
    return 0;
}
