#include<iostream>
#include<string>
using namespace std;
class test
{
public:
	test(int number, const string &str):number(number),str(str){}
	void change(void) const
	{
		number = 100;
		str = "change";
	}

private:
	mutable int number;
	mutable string str;
	
};
int main()
{
	test t1(1, "lizhenbo");
	t1.change();
	return 0;
}
