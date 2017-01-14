#include<iostream>
using namespace std;
int main()
{
	int len = 7;
	char str[1] = {len};
	cout << "str = "<< str <<endl;
	cout << int(*str)<<endl;
	return 0;
}
