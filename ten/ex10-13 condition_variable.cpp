#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
#include <queue>
using namespace std;
queue<int> products;				//创建队列容器products
mutex mtx;							//创建互斥锁mtx
condition_variable cvar;			//定义条件变量cvar
bool done = false;					//定义变量done，标识产品是否生产完毕
bool notified = false;				//定义变量notified，标识是否唤醒线程
void produce()						//生产函数
{
	for (int i = 1; i <= 5; i++)
	{
		//让当前线程休眠2s
		this_thread::sleep_for(chrono::seconds(2));
		//创建unique_lock对象locker，获取互斥锁mtx
		unique_lock<mutex> locker(mtx);
		//生产产品，并将产品存放到products容器中
		cout << "生产产品" << i << " ";
		products.push(i);
		//将notified值设置为true
		notified = true;
		//唤醒一个线程
		cvar.notify_one();
	}
	done = true;					//生产完毕，设置done的值为true
	cvar.notify_one();				//唤醒一个线程
}
void consume()						//定义消费函数
{
	//创建unique_lock对象locker，获取互斥锁mtx
	unique_lock<mutex> locker(mtx);
	while (!done)					//判断产品是否生产完毕
	{
		while (!notified)			//避免虚假唤醒
		{
			cvar.wait(locker);		//继续阻塞
		}
		while (!products.empty())	//如果products容器不为空
		{
			//消费产品
			cout << "消费产品" << products.front() << endl;
			products.pop();
		}
		notified = false;			//消费完之后，将notified的值设置为false
	 }
}
int main()
{
	thread producer(produce);		//创建生产线程
	thread consumer(consume);		//创建消费线程
	producer.join();
	consumer.join();
    return 0;
}
