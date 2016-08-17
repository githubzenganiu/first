#include<stdio.h>
#include<iostream>
using namespace std;

class base
{
protected:
	int data;
public:
	explicit base(int data):data(data) {}
	virtual void show(void)
	{
		cout << "base show function"<<endl;
	}
};

class derived:public base
{
protected:
	float b;
public:
	derived(int data, float b):base(data),b(b) {
		show();
		}
	virtual void show(void)
	{
		cout << "derived show function"<<endl;
	}


};
int main()
{

	derived(11,12.3);
	return 0;
}
