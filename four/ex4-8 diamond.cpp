#include <iostream>
using namespace std;
class Furniture							//家具类Furniture
{
public:
	Furniture(string wood);				//Furniture类构造函数
protected:
	string _wood;						//成员变量_wood，表示材质
};
Furniture::Furniture(string wood)		//类外实现构造函数
{
	_wood=wood;
}
class Sofa:public Furniture				//沙发类Sofa，公有继承Furniture类
{
public:
	Sofa(float length,string wood);		//Sofa类构造函数
protected:
	float _length;						//成员变量_length，表示沙发长度
};
//类外实现Sofa类构造函数
Sofa::Sofa(float length,string wood):Furniture(wood)
{
	_length=length;
};
class Bed:public Furniture				//床类Bed，公有继承Furniture类
{
public:
	Bed(float width, string wood);		//Bed类构造函数
protected:
	float _width;						//成员变量_width，表示床的宽度
};
//类外实现Bed类构造函数
Bed::Bed(float width, string wood):Furniture(wood)
{
	_width=width;
}
class Sofabed:public Sofa,public Bed	//Sofabed类，公有继承Sofa类和Bed类
{
public:
	//构造函数
	Sofabed(float length,string wood1, float width,string wood2);
	void getSize();						//成员函数getSize()，获取沙发床大小
};
//类外实现Sofabed类构造函数
Sofabed::Sofabed(float length, string wood1, float width, string wood2):
	Sofa(length,wood1),Bed(width,wood2)
{
}
void Sofabed::getSize()					//类外实现getSize()函数
{
	cout<<"沙发床长"<<_length<<"米"<<endl;
	cout<<"沙发床宽"<<_width<<"米"<<endl;
	cout<<"沙发床材质为"<< _wood<<endl;
}
int main()
{
	Sofabed sbed(1.8,"梨木",1.5,"檀木");	//创建Sofabed类对象sbed
	sbed.getSize();						//调用getSize()函数获取沙发床信息
	return 0;
}
