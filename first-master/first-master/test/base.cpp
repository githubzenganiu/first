#include<iostream>
using namespace std;

class C
{
public:
	explicit C(int a):a(a){}
	
public:
	int a;
};

int main()
{
	C c1(123);
	c1.a = 111;
	return 0;
}
