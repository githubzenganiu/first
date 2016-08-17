#include<iostream>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
using namespace std;

void *thread_routine(void *args)
{

	sleep(8);
	printf("thread 2\n");
	pthread_exit(NULL);

}

int main()
{
	pthread_t id;
	int ret = pthread_create(&id, NULL, thread_routine, NULL);
	if (ret == -1)
	{
		perror("create thread error");
		return -1;
	}
//	pthread_exit(NULL);
	return 0;
}
