#include<stdio.h>
#include<stdlib.h>
void get_y_or_n(void)
{
	char response[8] = {0};
	puts("Continue? [y] n:");
	gets(response);//dangrous
	if (response[0] == 'n')
		exit(0);
	return;

}

int main()
{
	get_y_or_n();
	return 0;
}
