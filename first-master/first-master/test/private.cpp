#include<iostream>
#define DISALLOW_COPY_ASSIGN(TypeName) \
	TypeName(const TypeName&);          \
	TypeName &operator=(const TypeName&)

using namespace std;

class Foo
{
public:
	Foo(int f):f(f)
	{

	}
	//~Foo();
private:
	DISALLOW_COPY_ASSIGN(Foo);	
	int f;
};

int main()
{
	Foo f(5);
	Foo f2 = f;
	return 0;
}
