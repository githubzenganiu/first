#include<stdio.h>
int main()
{
	char s[] = "hello world";//c style string, not array
	char s2[] = {"123456"};//c style string, not array
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(s2));
	return 0;
}
