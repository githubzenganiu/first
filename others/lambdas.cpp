#include<iostream>
using namespace std;
int main()
{
	auto l = [] {
		cout << "hello world"<<endl;
	};//lambdas;

	auto a = [] (const string& s)
	{
		cout << s<<endl;
	};
	auto b= [] () -> double {
		return 42;
	};
	int x = 0;
	int y = 42;
	auto qqq = [x, &y]{
		cout << "x = "<<x<<endl;
		cout << "y = "<<y<<endl;
		++y;
	};
	l();
	a("hello lambdas");
	auto result = b();
	cout << "result is "<< result <<endl;
	qqq();
	qqq();
	cout << "x = "<<x<<endl;
	cout << "y = "<<y<<endl;
	return 0;
}
