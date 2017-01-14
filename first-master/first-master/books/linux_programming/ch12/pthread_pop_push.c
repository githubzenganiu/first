#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

void cleanup()
{
	printf("cleanup\n");
	printf("test....20161110\n");
}
void *test_cancel(void)
{
	pthread_cleanup_push(cleanup,NULL);//注册线程退出之前的函数
	printf("test_cancel\n");
	while(1)
	{
		printf("test message\n");
		sleep(1);
	}
	pthread_cleanup_pop(1);//执行注册过的函数
}
int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,(void *)test_cancel,NULL);
	sleep(2);
	pthread_cancel(tid);
	pthread_join(tid,NULL);
}
