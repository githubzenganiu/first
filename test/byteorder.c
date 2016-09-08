#include<stdio.h>
int main()
{
	int a = 0x11223344;

	char c;
	if ((c=*(char *)(&a)) == 0x44)
	{
		printf("little edian\n");
	}
	else
	{

		printf("big edian\n");
	}
	return 0;
}
