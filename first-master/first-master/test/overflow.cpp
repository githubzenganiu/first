#include<stdio.h>
#include<limits.h>
#include<iostream>

int main(int argc, char **argv)
{
	/*unsigned char x = 0xff;
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
*/
	unsigned int c = UINT_MAX;
	c++;
	std::cout<<c<<std::endl;
	std::cout<<"INT_MIN = "<<INT_MIN<<std::endl;
	int ic = INT_MAX;
	ic++;//整型回绕
	std::cout<<ic<<std::endl;
	return 0;
}
