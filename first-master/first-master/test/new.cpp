#include<iostream>
using namespace std;

class NoHeap
{
public:
	explicit NoHeap(int a):a(a) {}

private:
	~NoHeap();
	int a;
	void *operator new(size_t );
	void operator delete(void *);
	void *operator new[](size_t);
	void operator delete[](void *);
};

int main()
{
	NoHeap n1(100);
	//NoHeap *ptr = ::new NoHeap(1);
	//::delete ptr;
	return 0;
}
