#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>

void *thread_routine(void *args);
int main(int argc, char *argv)
{
	int  listen_fd, connected_fd;
	int backlog = 5;
	int sin_size=sizeof(struct sockaddr_in); 
	struct sockaddr_in server_address;
	struct sockaddr_in client_address;
	memset(&server_address,0,sizeof(server_address));
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = INADDR_ANY;
	server_address.sin_port = htons(12000);
	int listen_fd  = socket(AF_INET, SOCK_STREAM, 0 );
	if (ret < 0)
	{
		perror("socket error\n");
	   exit(EXIT_FAILURE);
	}
	int on=1;
	if((setsockopt(listein_fd,SOL_SOCKET,SO_REUSEADDR,&on,sizeof(on)))<0)
	{   
	   perror("setsockopt failed");
	   exit(EXIT_FAILURE);
	}   

	if((bind(listen_fd,(struct sockaddr *)&server_address,sizeof(struct sockaddr)))<0)
	{   
		 perror("server socket bind failed");
		 exit(EXIT_FAILURE);
	}   
	for (;;)
	{
		connected_fd = accept(listed_fd, (struct sockaddr *)&client_address, (socklen_t*)&sin_size);
		if (connect_fd < 0)
		{
			perror("accept error");
		 	exit(EXIT_FAILURE);
		}
		pthread_t thread_id;
		int ret = pthread_create(&thread_id, NULL, thread_routine, &connected_fd )
		if (ret < 0)
		{
			perror("create thread error");
		 	exit(EXIT_FAILURE);

		}
		
	}


	return 0;
}

void *thread_routine(void *args)
{
	int fd = *(int*)args;
	



}
