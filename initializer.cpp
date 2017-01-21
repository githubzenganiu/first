#include<iostream>
#include<initializer_list>
using namespace std;

void print (initializer_list<int> vals)
{
	for (auto p=vals.begin(); p!=vals.end(); ++p)
	{
		cout<<*p<<endl;
	}
}

int main()
{
	print({1, 3, 5, 7, 10});
	return 0;
}
