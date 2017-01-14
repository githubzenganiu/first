#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void *thread_routine(void *args)
{
	int args1 = *(int*)args;
	printf("thread args is %d\n", args1);
	pthread_exit("hello world");
}


int main()
{
	pthread_t thread_id;
	int ret;
	int num = 199;
	ret = pthread_create(&thread_id, NULL, thread_routine, (void *)&num);
	if (ret == -1)
	{
		perror("create thread error");
		return -1;
	}
	char *ptr;
	pthread_join(thread_id, (void **)&ptr);
	printf("return str is %s\n", ptr);
	
	return ;
}
