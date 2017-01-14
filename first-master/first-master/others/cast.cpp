#include<iostream>
#include<exception>
#include<typeinfo>
using namespace std;


struct ST
{
	int a;
	double b;

};



class base
{
protected:
	int a;
public:
	explicit base(int a):a(a) {}
	virtual void show()
	{

		cout << "a = "<<a<<endl;
	}

};

class derived:public base
{
private:
	float f;
public:
	derived(int a, float f):base(a),f(f) {}
	virtual void show()
	{
		base::show();
		cout << "f = " << f << endl;
 
	}


};




int main()
{
	/*int a = 100;
	double d = static_cast<double>(a);
	cout << "d = "<< d <<endl;
	const ST st1{1, 1.2};
//	st1.a = 99;
	ST *ptr = const_cast<ST*>(&st1);
	ptr->a = 999;
	cout << st1.a<<endl;*/
	base *pb1 = new base(1);
	pb1->show();
	derived * pd1 = NULL;
	try{
		 pd1 = dynamic_cast<derived *>(pb1);
	}
	catch(bad_cast& e)
	{
		cout << "message:"<<e.what()<<endl;
	}
//	pd1->show();
	return 0;
}
