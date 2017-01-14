#include<iostream>
#include<typeinfo>
#include<exception>

class Polymorphic
{
	virtual void member()
	{
	}

};

int main(int argc, char *argv[])
{
	try
	{
		std::cout<<typeid(int).name()<<std::endl;
		std::cout<<typeid(double).name()<<std::endl;
		std::cout<<typeid(char).name()<<std::endl;
		std::cout<<typeid(long).name()<<std::endl;
		Polymorphic *pb = 0;
		typeid(*pb);
	}
	catch(std::exception& e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	return 0;
}
