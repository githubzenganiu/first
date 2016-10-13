#include<iostream>
using namespace std;
typedef int (*PFUNC)(int);

int g(int a)
{
	return (a<<2);
}

void func(PFUNC pf, int p)
{
	int temp = pf(p);
	temp++;
	cout <<"temp = "<<temp<<endl;
}

int main()
{
	func(g, 100);
	return 0;
}
