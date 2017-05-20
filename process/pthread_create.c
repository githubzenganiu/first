#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void *thread_routine(void *args)
{
	char *s = (char *)args;
	printf("args is %s\n", s);
	//exit(3);
	//return (3);
	pthread_exit((void *)3);
}
int main()
{
	pthread_t  pid;
	char *s = "testing pthread";
	int exit_status;
	int ret = pthread_create(&pid, NULL, (void *)thread_routine,(void*)s );
	if (ret < 0)
	{

		perror("create thread_error\n");
		return 0;
	}
	ret = pthread_join(pid, (void **)(&exit_status));
	printf("ret is %d\n", ret);
	if (ret < 0)
	{
		perror("pthread_join error\n");
		return 0;
	}
	printf("thread rexit value is %d\n", exit_status);

	return 0;

}
