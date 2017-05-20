#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
	int fd;
	int len;
	char buf[1024];
	if (mkfifo("fifo1",0666) <0 && errno!=EEXIST)
		perror("create FOFO failed");
	if ((fd = open("fifo1",O_RDONLY)) < 0)
	{
		perror("open failed");
		exit(1);
	}
	while ((len = read(fd, buf, 1024)) > 0)
		printf("read messages :%s\n", buf);
	close(fd);
	return 0;

}
