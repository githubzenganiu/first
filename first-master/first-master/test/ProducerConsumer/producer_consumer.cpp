#include"producer_consumer.h"
using namespace std;
#define INITBUFFERSIZE 20

procon::procon()
{

	storage.reserve(INITBUFFERSIZE);
}

void procon::producer(void)
{
	//pthread_t thread_num;
	int ret = pthread_create(&thread_num_write, NULL, thread_routine_write, NULL);
	if (ret == -1)
	{
		std::cout<<"producer create thread failed"<<std::endl;
		return; 
	}
}


void procon::consumer(void)
{
	int ret = pthread_create(&thread_read, NULL, thread_routine_read, NULL)
	if (ret == -1)
	{
		
		std::cout<<"consumer create thread failed"<<std::endl;
		return; 
	}

}
