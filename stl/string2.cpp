#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1 = "China Daily";
	const char *p1 = s1.c_str();
	const char *p2 = s1.data();
	cout <<p1<<endl;
	cout <<p2<<endl;
	return 0;
}
