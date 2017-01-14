#include<iostream>
#include<string>
using namespace std;

class b
{
public:
	b()
	{
		cout <<" b constructor"<<endl;
	}
};
class a
{
public:

/*	string get_str()
	{
		return this->str;
	}*/
private:
	b bstr;
};

int main(int argc, char *argv[])
{
	a a1;
	//std::cout <<a1.get_str()<<endl;
	return 0;
}
