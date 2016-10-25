#include<iostream>
#include<string>
#include<iterator>
using namespace std;

int main()
{
	string *ptr = new string("China Daily");
	cout<<ptr->capacity()<<endl;
	cout << ptr->size()<<endl;
	cout <<ptr->at(0)<<endl;
	delete ptr;
	return 0;
}
