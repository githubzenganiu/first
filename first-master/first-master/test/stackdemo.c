#include<stdio.h>
void fun()
{
	printf("teing, being hacked!");
}

int main(int argc, char **argv)
{
	char buf[10]; 
    strcpy(buf,argv[1]); 
     printf("buf's 0x%8x\n",&buf); 
     printf("fun is at 0x%8x\n",fun); 
	return 0;
}
