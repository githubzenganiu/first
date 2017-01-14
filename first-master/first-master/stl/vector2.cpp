#include"include.h"
using namespace std;
class base
{
public:
//	base(int a):a(a) {}
	explicit base(int a):a(a) {}
	base(const base &rhs)
	{
		cout<<"base copy constructor"<<endl;
		this->a = rhs.a;
	}
	base & operator=(const base &rhs)
	{
		cout <<"base operator ="<<endl;
		if (this == &rhs)
			return *this;
		else
			this->a = rhs.a;
		return *this;
	
	}
	virtual void display(void) const
	{
		cout << a<<endl;
	}
	virtual ~base()
	{
		cout <<"base destructor"<<endl;
	}
protected:
	int a;
};


class derived:public base
{
public:
	derived(int a, float b):base(a),b(b) {}
	derived (const derived &rhs):base(rhs)//call base copy constructor
	{
		cout <<"derived copy constructor"<<endl;
		//this->a = rhs.a;
		this->b = rhs.b;
	}
	derived &operator=(const derived &rhs)
	{
		cout <<"derived operator ="<<endl;
		if (this == &rhs)
			return *this;
		else
		{

			base::operator=(rhs);
			this->b = rhs.b;
		}
	}
	void display(void) const
	{
		cout <<a<<" "<<b<<endl;
	}
	virtual ~derived()
	{
		cout<<"derived destructor"<<endl;
	}
private:
	float b;
};

int main()
{
	//vector<base> v1;
//	vector<derived> v2;
	//derived d1(1,1.1);
	//derived d2 = d1;
	//derived d4 (0,0.0);
	//d4 = d1;
	//derived d3(d1);
	//d2.display();
	//d3.display();
//	d4.display();
//	v2.push_back(d1);	
//	vector<base *> v;
//	base *pd1 = new derived(1,1.1);
//	v.push_back(pd1);
//	delete pd1;
	vector<shared_ptr<base>> v3;
	//base pd2 = new derived(2, 3.14);
	//shared_ptr<base> sp(new derived(2,2.3));
	//v3.push_back( sp);
	v3.push_back(shared_ptr<base> (new derived(2,2.3)));
	(v3[0].get())->display();
	v3[0]->display();
	return 0;
}
