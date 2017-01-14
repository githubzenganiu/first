#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{
	if (argc !=2)
	{
		cout << "argc is error"<<endl;
		return -1;
	}
	string	s = string(argv[1]);
	cout << "s.size() " << s.size()<<endl; 
	return (int)(s.size());
}
