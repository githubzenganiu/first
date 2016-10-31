#include<iostream>
using namespace std;

class A
{
public:
	A(int a, string s);
	void key(void) const;
private:
	mutable int a;
	mutable string str;
};

A::A(int a, string s):a(a),str(s)
{

}

void A::key(void) const
{
	this->str = "key";
	a = 99;

}

int main()
{
	A a(1, "vb");
	a.key();
	return 0;
}
