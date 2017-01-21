#include<iostream>
#include<string>

using namespace std;
class test
{
public:
	test(int number, const string &str):number(number),str(str){}
	test(const test &t)
	{
		cout << "copy constructor"<<endl;
		this->number = t.number;
		this->str = t.str;
	}

	test &operator=(const test &t)
	{
		cout << "operator ="<<endl;
		if (this == &t)
			return *this;
		this->number = t.number;
		this->str = t.str;
		return *this;
	}
	void display(void ) const
	{
		cout <<number<<" "<<str<<endl;
	}

private:
	int number;
	string str;
};
int main()
{
	test t1(1, "qwer");
	test t2 = t1;
	t2.display();
	test t3(2, "<<lk");
	t3 = t1;
	t1.display();
	test t4(t1);
	t4.display();

	return 0;
}
