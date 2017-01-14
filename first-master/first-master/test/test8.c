#include<stdio.h>
int main()
{
	int a = 100;
	char buffer[8] = {0};
	int b = 90;
	printf("%p\n", &a);
	printf("%p\n", buffer);
	printf("%p\n", &b);
	return 0;
}
