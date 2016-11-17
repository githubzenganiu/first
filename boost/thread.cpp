#include <stdio.h>
#include <string.h>
#include <iostream>
#include <boost/threadpool.hpp>

using namespace std;
using namespace boost::threadpool;


void task_1()
{
	cout << "task_1 start" << endl;
	cout << "thead_id(task_1): " << boost::this_thread::get_id() << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "1111111111111111111111111" << endl;
		sleep(1);
	}
}

void task_2()
{
	cout << "task_2 start" << endl;
	cout << "thead_id(task_2): " << boost::this_thread::get_id() << endl;
	for (int i = 0; i < 30; i++)
	{
		cout << "222222222222222222222222" << endl;
		sleep(1);
	}
}

void DoGetVersionNoForUpdate(int a)
{
	cout << "task_3 start" << endl;
	cout << "thead_id(task_3): " << boost::this_thread::get_id() << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a*a << endl;
		sleep(1);
	}
}


int main(int argc, char *argv[])
{
	//设置允许开启的线程数
	pool tp(10);

	//加入线程调度，可以通过指针传参
	tp.schedule(&task_1);
	tp.schedule(&task_2);
	int i =10;
	tp.schedule(boost::bind(DoGetVersionNoForUpdate, i));

	//tp.wait();
	
	return (0);
}

