#include<iostream>
using namespace std;
class base
{
public:
	explicit base(int a):a(a) {}
	void display(void) const
	{
		cout <<"display cosnt version"<<endl;
		cout <<a<<endl;
	}
	void display(void) 
	{
		cout <<"display non-const version"<<endl;
		cout <<a<<endl;
	}
private:
	int a;
	
};

int main()
{
	base b1(1);
	b1.display();
	const base b2(3);
	b2.display();

	base *ptr1 = new base(99);
	ptr1->display();

	const base *ptr2 = new base(199);
	ptr2->display();
	base * const ptr3 = new base(88);
	ptr3->display();
	return 0;
}
