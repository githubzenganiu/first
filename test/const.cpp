#include<iostream>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

int main()
{
	const int i = 9;
	const int  *ptr = &i;
	//int * const ptr = &i;
	//*ptr = 12;
	int *p = new(std::nothrow)int[3];
	if (ptr == NULL)
	{
		exit(-1);
	}
	return 0;
}
