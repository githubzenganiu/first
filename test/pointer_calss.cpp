#include<iostream>
using namespace std;
class C
{
public:
	C(int a_):a_(a_) {}
	int a_;
};

int main()
{
	int C::*pimC;
	C ac(99);
	C *pc = &ac;
	pimC = &C::a_;
	ac.*pimC = 1000;
	int b = pc->*pimC;
	cout << b <<endl;

	return 0;
}
