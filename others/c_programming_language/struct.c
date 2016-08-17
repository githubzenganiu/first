#include<stdio.h>

struct ST
{
char *ptr;
int data;
};
main()
{
	//struct ST a{NULL, 1};
	struct ST a1 = {NULL, 11};
	struct ST a2 = {.ptr = NULL, .data = 123};

}
