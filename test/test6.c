#include<stdio.h>
int g_a = 100;
int main()
{
	int a = 0;
	printf("%p\n", &a);
	printf("%p\n", &g_a);
	return 0;
}
