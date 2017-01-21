#include<iostream>
#include<string>
#include<ostream>
//using namespace std;
class test;
//std::ostream &operator <<(std::ostream &out, const test &t);
class test
{
public:
	test(int number, const std::string& str):number(number),str(str)
	{
		std::cout<<"create an object"<<std::endl;
	}
	~test()
	{
		std::cout<<"delete an object"<<std::endl;
	}
	//friend std::ostream &operator<<(std::ostream &out, const test &t);
	/*std::ostream &operator <<(std::ostream &out)
	{
		out<<number<<" "<<string;
		return out;
	}*/
private:
	int number;
	std::string str;


};
/*
std::ostream &operator <<(std::ostream& out, const test &t)
{
	out<<t.number<<" "<<t.str<<std::endl;
	return out;
}*/
int main()
{
	test t1(1, "lizhenbo");
	std::cout<<t1<<std::endl;
	return 0;
}
