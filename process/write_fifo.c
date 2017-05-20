#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<time.h>


int main()
{
	int fd;
	int n, i;
	char buf[1024];
	time_t tp;
	printf("I am %d process.\n", getpid());
	if ((fd = open("fifo1", O_WRONLY)) < 0)
	{
		perror("open FIFO failed\n");
		exit(1);
	}
	for (i-0; i<10; ++i)
	{
		time(&tp);
		n = sprintf(buf, "process %d's time is %s", getpid(), ctime(&tp));
		printf("send message: %s\n", buf);
		if (write(fd, buf, n+1) < 0)
		{

			perror("write FIFO failed\n");
			close(fd);
			exit(1);
		}
		sleep(1);
	}
	close(fd);
	return 0;
}
