#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
int num = 0;						//定义全局变量num
mutex mtx;							//定义互斥锁mtx
void func()
{
	mtx.lock();						//上锁
	cout << "线程id: " << this_thread::get_id() << endl; //获取当前线程id
	num++;
	cout << "counter:" << num << endl;
	mtx.unlock();					//解锁
}
int main()
{
	thread ths[3];					//定义线程数组
	for (int i = 0; i < 3; i++)
		ths[i] = thread(func);		//分配线程任务
	for (auto& th : ths)
		th.join();					//将线程加入程序
	cout << "主线程工作结束" << endl;
	return 0;
}
