#include<iostream>
#include<string>
using namespace std;

class base
{
public:
	virtual void action(void)=0;

private:
	int a;
};


class derived:public base
{
public:
	derived(const string &str):str(str) {}
	virtual void action(void)
	{

		cout <<"action derived"<<endl;
	}
private:
	string str;

};
int main()
{
	//base b;
	derived d1("yy");
	d1.action();
	return 0;
}
