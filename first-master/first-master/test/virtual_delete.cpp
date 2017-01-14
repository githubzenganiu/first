#include<iostream>
#include<string>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#define BUFF 20
using namespace std;

class a
{
public:
	explicit a(string &str):str(str) {}
protected:
	string str;
public:
	virtual void set(string &str) 
	{
		this->str = str;
	}
	virtual ~a()
	{
		cout <<"class a desstructor"<<endl;
	}
};

class b:public a
{
public:
	b(string &str):a(str)
	{
		ptr = new(std::nothrow) char[BUFF];
		if (ptr == NULL)
		{
			cout <<"allocate memory error"<<endl;
			exit(-1);
		}
		memset(ptr, 0, BUFF);

	}
	void set(string &str)
	{
		this->str = str;
		strcpy(ptr, "hello world");
	}
	~b()
	{
		cout <<"class b desstructor"<<endl;
		delete[]ptr;
	}
private:
	char *ptr;
};

int main(int argc, char *argv[])
{
	string s1("China Daily");
	a *p = new b(s1);//class a need a virtual destructor
	delete p;

	return 0;
}
