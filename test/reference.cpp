#include<iostream>
using namespace std;

class object{
public:
	explicit object(int a):a(a) {}
	void display(void)
	{
		cout <<"a = "<<a<<endl;
	}
	object(const object &rhs)
	{
		cout <<"copy constructor"<<endl;
		this->a = rhs.a;
	}
	object &operator =(const object &rhs)
	{
		cout <<"operator ="<<endl;
		if (this == &rhs)
			return *this;
		else
			this->a = rhs.a;
		return *this;
	}
private:
	int a;

};

int main(int argc, char *argv[])
{
	float b = 3.14;
	float &c = b;
	cout <<"c = "<<c<<endl;
	object o1(1);
	object o2(0);
	o2 = o1;
	o2.display();
	return 0;
}
