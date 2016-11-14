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
	umask(0022);
	fd = open("./play.txt",O_RDWR|O_CREAT, 0666);
	if (fd < 0)
		perror("open error\n");
	return 0;
}
