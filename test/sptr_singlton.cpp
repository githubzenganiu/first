#include<iostream>
#include<memory>

using namespace std;

class singlton;
typedef shared_ptr<singlton> SPTR;
class singlton
{
public:
	static SPTR getInstance();
	void show(void) const
	{
		cout << "a = "<<a<<endl;
	}
	~singlton()
	{
		cout <<"destructor"<<endl;
	}
private:
	explicit singlton(int a):a(a) {}
	int a;

	static SPTR ptr_instance;
	
};

SPTR singlton::ptr_instance = nullptr;

SPTR  singlton::getInstance()
{
	if(ptr_instance == nullptr)
	{
		//ptr_instance.reset(new singlton(1));
		ptr_instance = shared_ptr<singlton>(new singlton(2));

	}
	return ptr_instance;

}

int main()
{
	(singlton::getInstance())->show();	
	(singlton::getInstance())->show();	
	(singlton::getInstance())->show();
	return 0;
}
