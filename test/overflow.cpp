#include<stdio.h>
#include<limits.h>
#include<iostream>
int main(int argc, char **argv)
{
	unsigned char x = 0xff;
	printf("%d\n", ++x);
	signed char y = 0x7f;
	printf("%d\n", ++x);
	int ix = INT_MAX;
	
	printf("%d\n", ++ix);
	ix = INT_MIN;

	printf("%d\n", --ix);
	unsigned char c = 0;
	--c;
	std::cout<<(int)c<<std::endl;

	return 0;
}
