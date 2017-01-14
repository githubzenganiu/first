#define __STDC_WANT_LIB_EXT1__1
#include<stdio.h>
int main()
{
	char buffer[20] = {0};
	gets_s(buffer, 10);
	printf("buffer is %s\n", buffer);
	return 0;
}
