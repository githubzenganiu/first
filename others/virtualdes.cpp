#include<iostream>
#define SIZE 10
#include<stdlib.h>
#include<string.h>
using namespace std;

class base
{
protected:
	int a;
public:
	explicit base(int a):a(a) { 
		cout << "base constructot"<<endl;
		}
	virtual	~base()
	{
		cout << "base destructor"<<endl;
	}
	virtual void show(void)
	{
		cout << "data = "<<a<<endl;
	}
};

class derived :public base
{
private:
	char *ptr;
public:
	derived(int a):base(a)
	{
		try
		{
			ptr = new char[SIZE];
		}
		catch(bad_alloc&)
		{
			cout << "acclocate memory error"<<endl;
			exit(-1);
		}
		strcpy(ptr, "hello");
		cout << "derived constructor"<<endl;
	}
	~derived()
	{
		delete[]ptr;
		cout << "derived destrucot"<<endl;
	}
	virtual void show()
	{
		cout << "data = "<<a<<"\t buffer is :"<<ptr<<endl;
	}

};

int main()
{
	base *pb = new derived(230);
	delete pb;
	
	return 0;
}
