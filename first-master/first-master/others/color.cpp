#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	std::cout << "\033[31;4mRed Underline Text\033[0m" << std::endl;
	printf("\e[32m%s\e[0m\n", "hello world");
	printf("\e[32m\e[1m%s\e[0m\n", "hello world");
	char *tokenName = "epass 2000 auto";
	printf("token name is :\033[41m %s \033[0m\n", tokenName);
	return 0;
}
