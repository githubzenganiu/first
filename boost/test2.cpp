#include<boost/lexical_cast.hpp>
#include<iostream>
using namespace std;

int main()
{
	using boost::lexical_cast;

	int a = lexical_cast<int>("123");
	double b =lexical_cast<double>("123.0123456789");
	string s0 = lexical_cast<string>(a);
	string s1 = lexical_cast<string>(b);
	cout <<"a = "<<a<<endl;
	cout <<"b = "<<b<<endl;
	cout <<"s0 = "<<s0<<endl;
	cout <<"s1 = "<<s1<<endl;
	int c = 0;
	try
	{
		c = lexical_cast<int>("abcd");
	}
	catch(boost::bad_lexical_cast &e)
	{
		cout <<e.what()<<endl;
	}
	return 0;

}
