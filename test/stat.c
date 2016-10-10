#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>

int main()
{
	struct stat buf;
	int ret = stat("/etc/hosts", &buf);
	if (ret == 0)
		printf("/etc/hosts file size = %d\n", buf.st_size);
	else
		printf("stat error\n");
	return 0;

}
