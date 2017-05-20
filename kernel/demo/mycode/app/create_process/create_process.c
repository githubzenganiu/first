#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>

int main()
{
	int fd;
	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		//execle("/bin/ls", NULL);
		printf("child 1 process\n");
		//exit(2);

	}

	if (waitpid(pid) < 0)
		printf("wait error one ,%s\n", strerror(errno));
	pid = fork();
	if (pid == 0)
	{
		fd = open("Chapter_03.txt", O_RDONLY);
		close(fd);
		//exit(1);

	}
	int ret;
	if ((ret = waitpid(pid) )< 0)
		printf("wait error two,%s\n", strerror(errno));
	exit(0);
}
