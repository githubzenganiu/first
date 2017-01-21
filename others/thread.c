#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void *thread_routine(void *args)
{
	int num = *(int*)args;
	printf("num = %d\n", num);
	//pthread_exit(89);
	pthread_exit("hello world");


}

int main(int argc, char *argv[])
{
	pthread_t id1;
	int ret;
	int num = 99;
	ret = pthread_create(&id1, NULL, thread_routine, &num);
	if (ret == -1)
	{
		perror("create thread error");
	}
	int retval;
	printf("main thread\n");
	char *ptr;
	//pthread_join(id1, &retval);
	pthread_join(id1, &ptr);
	//printf("retval = %d\n", retval);
	printf("ptr = %s\n", ptr);
	return 0;
}
