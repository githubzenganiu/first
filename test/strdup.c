#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *s = "China Daily";
	char *ptr = strdup(s);
	printf("%s\n", ptr);
//	free(ptr);
	ptr = NULL;
	return 0;
}
