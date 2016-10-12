#include<iostream>
using namespace std;
class object
{
public:
	explicit object(int a):a(a) {}
	object(const object& t);
	object& operator=(const object& t);
	void display(void)
	{
		cout <<"a = "<<a<<endl;
	}
private:
	int a;
	static int num;

};
int object::num = 10;
object::object(const object& t)
{	
	cout <<"copy constructor"<<endl;
	this->a = t.a;
}
object&  object::operator=(const object& t )
{
	cout <<"operator ="<<endl;
	if (this == &t)
		return *this;
	this->a = t.a;
	return *this;
}
int main(int argc, char *argv[])
{
	object o1(10);
	o1.display();	
	object o2(0);
	o2 = o1;
	o2.display();	
	object o3 = o1;
	o3.display();	

	return 0;
}
