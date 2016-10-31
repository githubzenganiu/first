#include<iostream>
using namespace std;

class object
{
public:
	explicit object(int a):a(a){}
	//~object();

private:
	int a;
	static void *operator new(size_t size);
	static void operator delete(void *ptr); 
};


int main()
{
	object *ptr = new object(1);
	delete ptr;
//	object o1(22);
	return 0;
}
