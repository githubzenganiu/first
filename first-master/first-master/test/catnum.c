#include<stdio.h>
int main(int argc, char *argv[])
{
	short int v = -12346;
	unsigned short uv = (unsigned short)v;
	printf("v = %d, uv = %u\n", v, uv);
	return 0;
}

