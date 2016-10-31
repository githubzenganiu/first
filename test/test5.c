#include<stdio.h>
#include<limits.h>
#include<string.h>
int main()
{
	char a[1000] = {0};	
	int i;
	for (i=0; i<1000; ++i)
	{
		a[i] = -1-i;
	}
	printf("%d\n", strlen(a));
	for (int i=0; i<255; ++i)
		printf("%d\n", a[i]);
	return 0;
}
