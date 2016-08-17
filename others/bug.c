#include<stdio.h>
int main()
{
	int a = 450;
	char temp[4] = {0};
	temp[0] = a & 0xFF;
	temp[1] = (a>>8) & 0xFF;
	temp[2] = (a>>16) & 0xFF;
	temp[3] = (a>>24) & 0xFF;
	int num =temp[0]+(temp[1]<<8)+ (temp[2]<<16) + (temp[3]<<24);
	printf("num is %d\n", num);
	return 0;
}
