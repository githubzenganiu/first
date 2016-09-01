#include<iostream>
using namespace std;
int main()
{
	int a = 0x11223344;
	if ( *((char*)(&a)) == 0x44)
	{
		cout <<"little edian"<<endl;
	}
	else  
		cout <<"big edian"<<endl;
	cout << *((char *)(&a))<<endl;
	return 0;
}
