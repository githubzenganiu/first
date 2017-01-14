#include<stdio.h>

int main()
{
	const char s[3] = "abc";
	const char s1[]="abc";
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(s1));
	return 0;
}
