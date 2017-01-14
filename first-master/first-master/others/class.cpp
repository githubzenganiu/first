#include<iostream>
using namespace std;
class A
{
public:
	A():x(0),b(false) {}
	void show(void)
	{
		cout << "x = "<<x<<"\t"<<"b = "<<b<<endl;
	}
private:
	int x;
	bool b;

};

class B{

public:
	explicit B(int x=0, bool b=true):x(x),b(b) {}
	void show(void)
	{
		cout << "x = "<<x<<"\t"<<"b = "<<b<<endl;
	}
private:
	int x;
	bool b;

};

class C{
public:
	explicit C(int x):x(x),b(false) {};
	void show(void)
	{
		cout << "x = "<<x<<"\t"<<"b = "<<b<<endl;
	}
private:
	int x;
	bool b;
};

void display(C c)
{
	cout << "display"<<endl;
	c.show();
}


int main()
{
	A a1;
	a1.show();
	B b1(2, true);
	b1.show();
	C c1(1);
	c1.show();
	cout << "---"<<endl;
	display(c1);

	return 0;
}
