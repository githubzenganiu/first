#include<iostream>
//using namespace std;

namespace std
{
	const string MYNAME("lizhenbo");
	class logo
	{
	public:
		explicit logo(const string &s);
		void show(void) const;
	private:
		string s;
	};
	logo::logo(const string &s):s(s)
	{
		//this->s = s;
	}
	void logo::show(void) const
	{
		cout << s <<endl;
	}


};//namespace std

int main()
{
	std::cout <<std::MYNAME<<std::endl;
	std::logo logo1("my logo");
	logo1.show();
	return 0;	
}


