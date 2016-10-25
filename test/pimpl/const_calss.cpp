#include<iostream>
#include<string>
using namespace std;
class A
{
public:
	explicit A(int a, const string &str):a(a),str(str) {}
	const string &get_str(void) const//the return value must be const
	{
		return this->str;
	}
	
private:
	int a;
	string str;
};


int main(int argc, char *argv[])
{
	A a1(1, "China");
	cout <<a1.get_str()<<endl; 
	return 0;
}

