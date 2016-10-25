#include<iostream>
#include<string>
using namespace std;
class base
{
public:
	explicit base (int i):i(i) 
	{

		cout <<"base constructor"<<endl;
	}
	virtual void display(void) const
	{
		cout << i <<endl;
	}
	base(const base &rhs)
	{
		cout <<"base copy constructor"<<endl;
		this->i = rhs.i;
	}
	base& operator=(const base &rhs)
	{
		cout <<"base operator ="<<endl;
		if (this == &rhs)
			return *this;
		this->i = rhs.i;
		return *this;
	}
private:
	int i;

};

class derived:public base
{
public:
	derived(int i, const string &s):base(i),s(s) {
		
		cout <<"derived constructor"<<endl;
		}
	virtual void  display(void) const
	{
		//cout << i<< " "<<s<<endl;
		base::display();
		cout << s <<endl;
	}
	derived(const derived &rhs):base(rhs)
	{
		cout <<"derived copy constructor"<<endl;
		this->s = rhs.s;
	}
	derived& operator =(const derived &rhs)
	{
		cout <<"derived operator ="<<endl;
		if (this == &rhs)
			return *this;
		base::operator=(rhs);
		this->s = rhs.s;
		return *this;
	}
protected:
	string s;
};


int main()
{
	/*base b1(1);
	base b2(b1);
	base b3 = b2;
	base b4(0);
	b4 = b3;
	b1.display();
	b2.display();
	b3.display();
	b4.display();*/

	derived d1(1, "China");
	/*derived d2(d1);
	derived d3 = d1;
	derived d4(0, "");
	d4 = d1;
	d1.display();
	d2.display();
	d3.display();
	d4.display();*/
	derived d2(2, "America");
	derived d3(3, "Japan");
	derived d4(4, "France");

	d1.display();
	d2.display();
	d3.display();
	d4.display();


	return 0;
}
