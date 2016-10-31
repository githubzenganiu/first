#include<new>
#include<iostream>
#include<cstdlib>
void outOfMem()
{
	std::cerr<<"Unable to satify request for memory"<<std::endl;
	abort();
}
int main()
{
	std::set_new_handler(outOfMem);
	int *ptr = new int[1000000000L];
	std::set_new_handler(NULL);
	return 0;
}
