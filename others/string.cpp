#include<string>
#include<iostream>
using namespace std;

int main()
{
	string s = "China bridge";
	const char *ptr = s.c_str();
	cout << " ptr = "<<ptr<<endl;
	return 0;
}
