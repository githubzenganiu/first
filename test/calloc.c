#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr = calloc(5, sizeof(char));
	if (ptr != NULL)
	{
		printf("allocate memory succeed\n");
	}
	else
	{
		printf("allocate memory filed\n");
	}
	free(ptr);
	return 0;
}
