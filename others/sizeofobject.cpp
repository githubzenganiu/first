#include<iostream>
using namespace std;
class object
{
public:
	object(int a, float b):a(a), b(b){}
	void display(void)
	{
		cout <<a<<" "<<b<<endl;
	}
	void dis(void)
	{
		cout<< "a"<<endl;
	}
	static int num;
	virtual void get()
	{
		cout <<"get"<<endl;
	}
	virtual void make()
	{
		cout <<"make"<<endl;
	}
private:
	int a;
	float b;

};

int object::num = 1000;

int main()
{
	object ob1(1,1.2);
	cout <<"sizeof(ob1) = "<<sizeof(ob1)<<endl;

	return 0;
}
