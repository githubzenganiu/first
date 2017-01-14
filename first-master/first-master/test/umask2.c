#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dirent.h>
#include <linux/types.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
	int fd;
	int a, b;
	a = umask(0);
	printf("%o\n", a);
	b = umask(a);
	
	printf("%o\n", b);

	return 0;
}
