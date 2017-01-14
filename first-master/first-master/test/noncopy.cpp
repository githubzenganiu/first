#include<iostream>
using namespace std;
class noncopy
{
public:
	noncopy(){}
private:
	noncopy(const noncopy &);
	noncopy &operator=(const noncopy &);
};

class base:private noncopy
{
public:
	explicit base(int a)
	{
		this->a = a;
	}

private:
	//base(const base &rhs);
	//base &operator=(const base &rhs);
	int a;
};

int main()
{
	base b1(1);
	base b2(0);
	b2 = b1;
	return 0;
}
