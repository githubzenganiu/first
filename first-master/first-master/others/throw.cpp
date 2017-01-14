#include<iostream>
using namespace std;

void func1(void)
{

	throw 23;
}

void func2() throw(const char *)
{

	throw "testing";
}

void func3() throw()
{
	cout << "don't throw"<<endl;
}

int main()
{

	try
	{
		func3();
	}
	catch(const char *)
	{
		cout << "over"<<endl;

	}
	return 0;
}
