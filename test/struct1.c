#include<stdio.h>
struct node
{
	char a;
	char b;
	short c;
	int d;

};
int main()
{
	struct node s = {3, 5, 6, 99};
	struct node *ptr = &s;
	printf("%x\n", *(int*)ptr);//low and high
	return 0;
}
