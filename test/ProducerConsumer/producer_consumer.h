#ifndef PRODUCER_CONSUMER_H_
#define PRODUCER_CONSUMER_H_
#include<vector>
#include<iostream>
#include<pthread.h>
typedef void*(*PFUNC)(void *);
class procon
{
	//const static int THREADNUM = 2;
public:
	procon();
	void producer(void);
	void consumer(void);
	
private:
	std::vector<char> storage;
	pthread_mutex_t lock;
	pthread_cond_t cond;
	person(const person &);
	person &operator=(const person &);
	PFUNC thread_routine_write;
	PFUNC thread_routine_read;
	pthread_t thread_num_write;
	pthread_t thread_num_read;
};




#endif
