#include<iostream>
using namespace std;
class base{
public:
	explicit base(int num):num(num) {}
	virtual void display(void)
	{
		cout <<num<<endl;
	}
	virtual ~base()
	{

	}
protected:
	int num;

};
class derived: public base
{
public:
	derived(int num, float b):base(num),b(b){}
	virtual void display(void)
	{
		cout <<num<<" "<<b<<endl;
	}
private:
	float b;
};

int main()
{
	base b1(2);
	b1.display();
	derived d1(3, 1.4);
	d1.display();
	base *pb1 = new derived(34, 3.14);
	pb1->display();
	delete pb1;

	base *pb2 = new base(100);
	pb2->display();
	delete pb2;
	
	
	base *pb3 = new derived(99, 100.1);
	derived *pd1 = dynamic_cast<derived*>(pb3);//dynamic_cast
	if (pd1 != NULL)
		pd1->display();
	else
		cout <<"convert failed"<<endl;
	return 0;
}
