#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#define BUFSIZE 10

void getMemory(char *ptr)
{
	ptr = (char *)malloc(BUFSIZE);
	if (ptr == NULL)
	{
		printf("allocate memory error\n");
		exit(-1);
	}
	memset(ptr, 0, BUFSIZE);
	
}

void getMemoryVersion2(char **p)
{
	*p = (char *)malloc(BUFSIZE);
	if (*p == NULL)
	{
		printf("allocate memory error\n");
		exit(-1);
	}
	memset(*p, 0, BUFSIZE);
}

char *getMemoryVersion3(void)
{
	char *ptr =  (char *)malloc(BUFSIZE);
	if (ptr == NULL)
	{
		printf("allocate memory error\n");
		exit(-1);
	}
	memset(ptr, 0, BUFSIZE);
	return ptr;
}
int main()
{
	//char *p = NULL;
	//getMemoryVersion2(&p);
	//char *p = getMemoryVersion3();
	char *p = getMemoryVersion3();
	if (p == NULL)
	{
		printf("get memory failed\n");
	}
	else
		printf("get memory succeeded\n");
	return 0;
}
