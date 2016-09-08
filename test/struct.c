#include<stdio.h>
struct info
{
	int num;
	double mh;
	char * ptr;

};
typedef struct hk
{
	double lon;
	double lat;
	char *ptr;

}HK;

HK hk1 = {1,1,NULL};

int main()
{
	struct info object1 = {1, 12.3, NULL};
	return 0;
}
