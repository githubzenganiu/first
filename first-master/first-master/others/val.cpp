#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char buffer[5] = {0};
	buffer[5] = 7;
	char *ptr = (char *)malloc(4*sizeof(char));
	ptr[4] = 'c';
	free(ptr);
	ptr  = NULL;
	return 0;
}
