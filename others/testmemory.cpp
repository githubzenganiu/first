#include<iostream>
#include<stdlib.h>
using namespace std;
int memory(int a)
{
	char  *p = new char[33];
	if (a > 0)
		return 1;
	//free(p);
	else if (a == 0)
	{
		delete[]p;
		return 0;
	}



}
int main()
{
	memory(1);
	return 0;
}
