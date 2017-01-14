#include<iostream>
#include<fstream>
using namespace std;
#define LEN 256
int main()
{
	ifstream in;
	in.open("./text", ios_base::in|ios_base::out);
	if (!in.is_open())
	{
		cout << "open file error"<<endl;
		return -1;
	}
	char buffer[LEN] = {0};
	while (!in.eof())
	{
		in.getline(buffer, LEN);
		cout << buffer;
		cout << "\n";
	}
	in.close();
	return 0;
}
