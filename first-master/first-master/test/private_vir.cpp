#include<iostream>
#include<string>
using namespace std;

class base
{
public:
	explicit base(const string &str);
	void key(void) const;
private:
	virtual void show(void) const;	
	string str;
};

base::base(const string &str):str(str)
{

}

void base::key(void) const
{
	show();
}

void base::show(void) const
{
	cout <<"str = "<<str<<endl;
}

class derived:public base
{
public:
	derived(const string &str, int a);
private:
	virtual void show(void) const;
	int a;
};
derived::derived(const string &str, int a):base(str),a(a)
{

}

void derived::show(void) const
{
	cout <<"str = "<<str<<"\t"<<"a = "<<a<<endl;
}

int main()
{
	derived d("China", 1);
	d.key();
	return 0;
}



