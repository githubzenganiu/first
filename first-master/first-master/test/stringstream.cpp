#include<sstream>
#include<stdio.h>
using namespace std;
int main()
{
	stringstream ss;
	string result;
	int n = 1;
	ss<<n;
	ss>>result;
	printf("result :%s, str :%s\n", result.c_str(), ss.str().c_str());

	ss.clear();
	ss<<n;
	ss>>result;
	printf("result :%s, str :%s\n", result.c_str(), ss.str().c_str());

	ss.str("");
	ss<<n;
	ss>>result;
	printf("result :%s, str :%s\n", result.c_str(), ss.str().c_str());

	ss.clear();
	ss.str("");
	ss<<n;
	ss>>result;
	printf("result :%s, str :%s\n", result.c_str(), ss.str().c_str());
	return 0;
}
