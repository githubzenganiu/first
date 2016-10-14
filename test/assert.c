#include<stdio.h>
//#define NDEBUG
#include<assert.h>

int main()
{
	//int a = 2;
	assert(sizeof(int*) != 8);
	printf("Normal\n");
	return 0;
}
