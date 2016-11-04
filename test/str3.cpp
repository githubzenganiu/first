#include<iostream>
using namespace std;

int main()
{
	/*
	char buff[12] = {0};
	cin>>buff;//dangerous
	cout <<buff<<endl;
	*/
	/*safe version*/
	char buff[12] = {0};
	cin.width(12);
	cin>>buff;
	cout <<buff<<endl;
	return 0;
}
