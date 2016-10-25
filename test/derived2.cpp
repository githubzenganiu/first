#include<iostream>
#include<string>
#include<memory>
using namespace std;

class C1
{
public:
	explicit C1(int a);
	virtual void show(void) const;
	void logo(void ) const
	{
		cout << "logo"<<endl;
	}
private:
	int a;
};

C1::C1(int a):a(a)
{

}
 void C1::show(void) const
{
	cout <<"a = "<<a<<endl;
}

class A1:public C1
{
public:
	A1(int a, float b);
	void show(void) const;
private:
	float b;
};

A1::A1(int a, float b):C1(a),b(b)
{
	
}

void A1::show(void) const
{
	C1::show();
	cout <<"b = "<<b<<endl;
}
int main()
{
	shared_ptr<C1> pc1(new C1(99));
	pc1->show();
	pc1->logo();
	//shared_ptr<C1> p2(new A1(77, 9.0));
	//p2->show();
	pc1.reset(new A1(77, 9.0));
	pc1->show();
	pc1->logo();
	return 0;
}
