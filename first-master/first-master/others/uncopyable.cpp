#include<iostream>
using namespace std;

class uncopyable
{
protected:
	uncopyable() {}
	~uncopyable() {}
private:
	uncopyable& operator=(const uncopyable&);
	uncopyable(const uncopyable&); 
};

class test:private uncopyable
{
private:
	int data;
public:
	explicit test(int a):data(a) {}
	void show(void)
	{
		cout << "data = "<<data<<endl;
	}

};

int main()
{
	test t1(1);
	t1.show();
//	test t2 = t1;
	return 0;
}

