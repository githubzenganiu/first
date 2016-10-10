#include<stdio.h>
size_t count = 0;
#define EXEC_BUMP(func) (func(), ++count)

void g(void)
{
	printf("Called g, count = %zu.\n", count);
}

int main(int argc, char *argv[])
{

	size_t count = 0;
	while (count++ < 10)
		EXEC_BUMP(g);
	return 0;
}
