#include<iostream>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
const int size = 10;

class base
{
public:
	base()
	{
		ptr = new(std::nothrow)char[size];
		if (ptr == NULL)
		{
			cout <<"accolate memory failed"<<endl;
			exit(-1);
		}
	}
	virtual ~base()
	{
		cout <<"base destructor"<<endl;
		delete[]ptr;
	}
	virtual void set_dis(char *buf)
	{
		if (strlen(buf)>=(size-1))
		{
			cout <<"buff is too long"<<endl;
			exit(-1);
		}
		strcpy(ptr, buf);
		cout <<ptr<<endl;
	}
protected:
	char *ptr;
};

class derived:public base
{
public:
	derived():base()
	{
		link = new(std::nothrow)int[1];
		if (link == NULL)
		{
			cout <<"allocate memory filed"<<endl;
			exit(-1);
		}

	}
	~derived()
	{
		cout <<"derived desctructor"<<endl;
		delete[]link;
	}
	void set_dis(char *buf)
	{
		base::set_dis(buf);
		*link = 100;
		cout <<*link<<endl;
	}
private:
	int *link;
};
int main(int argc, char *argv[])
{
	base *pb = new derived();
	char *s = "China";
	pb->set_dis(s);
	delete pb;
	return 0;
}
