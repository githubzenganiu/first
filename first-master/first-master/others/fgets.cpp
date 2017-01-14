#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	char buffer[50] = {0};
/*	fgets(buffer, 50, stdin);//'\n' is included by the buffer
	printf("strlen(buffer) = %u\n", strlen(buffer));
	printf("%s", buffer);
	memset(buffer, 0, 50);
	cin.getline(buffer, 50);
	printf("strlen(buffer) = %u\n", strlen(buffer));
	
	memset(buffer, 0, 50);
*/	
	cin.get(buffer, 50);
	
	printf("strlen(buffer) = %u\n", strlen(buffer));
	return 0;
}
