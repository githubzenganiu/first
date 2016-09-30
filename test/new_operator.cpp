#include<iostream>
using namespace std;
int main()
{
	char *ptr = new(std::nothrow) char[100];
	if (ptr == NULL)
	{
		cout <<"allocate memory failed"<<endl;
	}
	else
		cout <<"allocate memory succeded"<<endl;

	return 0;
}
