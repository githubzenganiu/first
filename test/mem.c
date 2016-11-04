#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 9;
	int b = 10;
	int *ptr1 = (int *)malloc(sizeof(int));
	int *ptr2 = (int *)malloc(sizeof(int));

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", ptr1);
	printf("%p\n", ptr2);
	free(ptr1);
	free(ptr2);

	return 0;
}
