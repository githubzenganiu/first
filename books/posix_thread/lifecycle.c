/*
 * lifecycle.c
 *
 * Demonstrate the "life cycle" of a typical thread. A thread is
 * created, and then joined.
 */
#include <pthread.h>
#include "errors.h"

/*
 * Thread start routine.
 */
void *thread_routine (void *arg)
{
	int *ptr = (int*)arg;
	*ptr = 1111;

    //return ptr; 
	pthread_exit(ptr);
}

main (int argc, char *argv[])
{
    pthread_t thread_id;
    void *thread_result;
    int status;
	int num = 99;
    status = pthread_create (
        &thread_id, NULL, thread_routine,(void *)&num);
    if (status != 0)
        err_abort (status, "Create thread");

    status = pthread_join (thread_id, &thread_result);//pthread_exit or return 
    if (status != 0)
        err_abort (status, "Join thread");
    if (thread_result == NULL)
	{
    	printf("thread_result is null\n");
		return 0;
	}
    else
	{
    	printf("thread_result is not null\n");
		printf("result is %d\n", *(int*)thread_result);
	 	return 1;
	}
}
