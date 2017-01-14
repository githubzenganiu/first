#include<iostream>
#include<stdlib.h>
using namespace std;
void *operator new[](size_t size)
{
	cout <<"\e[32m\e[1mOPERATOR NEW[]\e[0m"<<endl;
	return malloc(size);	
}
void *operator new(size_t size)
{
	cout <<"\e[32m\e[1mOPERATOR NEW\e[0m"<<endl;
	return malloc(size);	
}
void operator delete[](void *ptr)
{
	
	cout <<"\e[32m\e[1mOPERATOR DELETE[]\e[0m"<<endl;
	free(ptr);
	ptr = NULL;
}

void operator delete(void *ptr)
{
	
	cout <<"\e[32m\e[1mOPERATOR DELETE\e[0m"<<endl;
	free(ptr);
	ptr = NULL;
}
class integer
{
public:
	explicit integer(int i):i(i) 
	{
		cout << "constructor"<<endl;
	}
	~integer()
	{
		cout << "desctructor"<<endl;
	}
private:
	int i;

};
int main()
{
	char *ptr= new char[4];
	delete[] ptr;
	integer *p = new integer(23);
	delete p;
	return 0;

}
