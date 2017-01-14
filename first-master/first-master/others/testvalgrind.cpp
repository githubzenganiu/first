#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char *ptr = (char *)malloc(100);

	char *p = ptr;
	free(p);

	return 0;
}
