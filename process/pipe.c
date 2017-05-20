#include<stdio.h>
#include<unistd.h>
int main()
{
	int fd[2];
	pid_t pid;
	char buff[20];
	if (pipe(fd) < 0)
	{
		perror("create pipe error\n");
	}
	if ((pid = fork()) < 0)
	{
		perror("create process error\n");

	}
	else if (pid > 0)
	{
		close(fd[0]);
		write(fd[1], "hello world", 11);
	}
	else
	{
		close(fd[1]);
		read(fd[0],buff, 20);
		printf("%s\n", buff);

	}
	return 0;
}
