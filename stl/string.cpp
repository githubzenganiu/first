#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	cout <<"s1.capacity() = "<<s1.capacity()<<endl;
	cout <<"s1.size() = "<<s1.size()<<endl;
	s1 = "teing string";
	cout <<"s1[2] = "<<s1[2]<<endl;
	cout <<"s1.at[3] = "<<s1.at(3)<<endl;
	s1 += " makefile";
	cout <<" s1 :"<<s1<<endl;
	s1.push_back('6');
	cout <<" s1 :"<<s1<<endl;
	cout << "s1.c_str() = "<<s1.c_str()<<endl;
	cout <<"s1.data() = "<< s1.data()<<endl;


	if (s1.find("make") != string::npos)
	{
		cout <<" find \"make\" "<<endl;
	}
	cout << s1.find_last_of("ng")<<endl;
	cout << s1.find_first_of("ng")<<endl;
	cout <<"s1.sustr(1,3) :"<<s1.substr(1,3);
	cout << endl;
	
	cout << "s1.capacity() = "<<s1.capacity()<<endl;
	string s2;
	std::getline(std::cin, s2);
	cout <<"s2 is :"<<s2<<endl; 
	return 0;
}

