#include<iostream>
using namespace std;
class complex_
{
private:
	int x;
	int y;
public:
	complex_(int x, int y):x(x),y(y){}
	complex_(const complex_& rhs)
	{
		cout <<"copy constructor"<<endl;
		this->x = rhs.x;
		this->y = rhs.y;
	}
	const complex_ operator=(const complex_ &rhs)
	{
		cout <<"operator ="<<endl;
		if (this == &rhs)
			return *this;
		this->x = rhs.x;
		this->y = rhs.y;
		return *this;
	}
	complex_& operator++()
	{
		x++;
		y++;
		return *this;
	}
	complex_ operator++(int)
	{
		complex_ a = *this;
		x++;
		y++;
		return a;
	}
	void display()
	{
		cout <<"("<<x<<", "<<y<<")"<<endl;
	}


};

int main()
{
	complex_ c1(1, 2);
	c1++;
	c1.display();
	complex_ c2(3, 5);
	complex_ c3 = c2++;
	c3.display();
	c2.display();

	complex_ c4(0, 0);
	c4 = c2;
	c4.display();
	return 0;
}
