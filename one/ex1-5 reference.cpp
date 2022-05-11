#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &ra=a;
    cout<<"变量a的地址"<<hex<<&a<<endl;
    cout<<"引用ra的地址:"<<hex<<&ra<<endl;
    cout<<"引用ra的值:"<<dec<<ra<<endl;
    return 0;
}
