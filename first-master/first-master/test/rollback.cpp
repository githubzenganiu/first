#include<iostream>
#include<limits.h>
using namespace std;


int main(int argc, char *argv[])
{
	/*integer rollback*/
	cout <<"int max "<<INT_MAX<<endl;
	cout <<"int min "<<INT_MIN<<endl;
	int a = INT_MAX;
	a++;
	cout <<"a = "<<a<<endl;
	int b = INT_MIN;
	b--;
	cout <<"b = "<<b<<endl;

	cout <<"uint max "<<UINT_MAX<<endl;
	unsigned int c = UINT_MAX;
	c++;
	cout <<"c = "<<c<<endl;	
	unsigned int d = 0;
	d--;
	cout <<"d = "<<d<<endl;
	return 0;
}
