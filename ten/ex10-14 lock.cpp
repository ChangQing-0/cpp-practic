#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
mutex mtx;							//定义互斥锁
int num = 0;							//定义全局变量num
void func()
{
    lock_guard<mutex> locker(mtx);				//加锁
    for (int i = 0; i < 100000; i++)
    {
        num++;							//通过for循环修改num的值
    }
    cout << "func()num: " << num << endl;
}
int main()
{
    thread t1(func);						//创建线程t1执行func()函数
    thread t2(func);						//创建线程t2执行func()函数
    t1.join();
    t2.join(); 
    cout << "main()num: " << num << endl;
    return 0;
}
