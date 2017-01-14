#include<stdio.h>

int main(int argc, char *argv[])
{
	int err = 123;
	char *ptr = "hello world";
	fprintf(stderr, "occurs error\n");
	fprintf(stdout, "%d\n", err);
	fprintf(stdout, "%s\n", ptr);

	return 0;
}
