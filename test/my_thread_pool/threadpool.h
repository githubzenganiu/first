#ifndef THREADPOOL_H_
#define THREADPOOL_H_

#include<pthread.h>

#ifdef DEBUG
#define PRINT(str) printf(str);printf("\n")
#else 
#define PRINT(str)
#endif

typedef struct job_tag
{
	void *(*pfunc)(void *args);
	void *args;

}job_t, *pjob_t;

typedef struct node_tag
{
	pjob_t job;
	struct node_tag *prior;
	struct node_tag *next;
}node, *pnode;

typedef struct pool_tag
{
	pnode task_list;
	pthread_mutex_t lock;
	pthread_cond_t cond;
}thread_pool, *pthread_pool;





#endif
