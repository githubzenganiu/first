#include<iostream>
using namespace std;

class base
{
protected:
	int data;
public:
	explicit base(int data):data(data) {
		cout << "base constructor"<<endl;
	}
	~base()
	{
		cout << "base destructor"<<endl;
	}

	virtual void func1(void)
	{
		cout << "func1"<<endl;
	}
	
	virtual void func2(void)
	{
		cout << "func2"<<endl;
	}

	virtual void func3(void)
	{
		cout << "func3"<<endl;
	}

};

int main()
{
	base b1(1);
	typedef void (*FUNC_PTR)(void);
	FUNC_PTR fptr = (FUNC_PTR)*((int*)*(int*)&b1+0);
	fptr();

	fptr = (FUNC_PTR)*((int*)*(int*)&b1+2);
	fptr();

	fptr = (FUNC_PTR)*((int*)*(int*)&b1+4);
	fptr();
	cout << "======================================="<<endl;


	return 0;
}
