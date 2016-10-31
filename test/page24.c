#include<stdio.h>
#define CUBE(x) ((x)*(x)*(x))

int main()
{
	int i = 2;
	int result = CUBE(++i);
	printf("%d\n", result);
	return 0;
}
