#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void *helloworld(char *argc);
int main(int argc,int argv[])
{
	int error;
	int *temptr;
	
	pthread_t thread_id;
	
	pthread_create(&thread_id,NULL,(void *)*helloworld,"helloworld");
	printf("helloworld function, *p=%x,p=%x\n",*helloworld,helloworld);
	if(error=pthread_join(thread_id,(void **)&temptr))
	{
		perror("pthread_join");
		exit(EXIT_FAILURE);	
	}
	printf("temp=%x,*temp=%c\n",temptr,*temptr);
	*temptr='d';
	printf("%c\n",*temptr);
	/*通过pthread_exit带回堆上分配的内存的地址,通过pthread_join 接受,temptr存储*/
	free(temptr);//主线程也可以free非主线程的heap内存
	return 0;
}

void *helloworld(char *argc)
{
	int *p;
	p=(int *)malloc(10*sizeof(int));//heap memory
	printf("the message is %s\n",argc);
	printf("the child id is %u\n",pthread_self());
	memset(p,'c',10);
	printf("heap address, p=%x\n",p);
	pthread_exit(p);//p是exit时候传出去的值
	//return 0;
}
