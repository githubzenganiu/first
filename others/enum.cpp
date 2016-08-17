#include<iostream>
using namespace std;
int main()
{
	enum EP
	{
		a=0,
		b,
		c
	};
	EP e1;
	cout << "e1 ="<<e1<<endl;	
	cout << "address of e1"<<&e1<<endl;	
	return 0;
}
