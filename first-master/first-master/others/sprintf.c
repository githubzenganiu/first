#include<stdio.h>
int main()
{
	char buffer[1024] = {0};
	double pi = 3.14;
	int len = 100;
	char *s1 = "testing";
	snprintf(buffer,5, "%fll %d len %s++", pi, len, s1 );
	printf("%s\n", buffer);

	return 0;
}
