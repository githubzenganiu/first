#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<int, string> mp1;
	mp1.insert(pair<int, string>(1, "byte"));
	cout << "mp1[1] "<<mp1[1]<<endl;
	mp1.insert(pair<int, string>(2, "word"));
	mp1.insert(pair<int, string>(9, "sentence"));
	mp1.insert(pair<int, string>(4, "text"));
	for (auto it = mp1.begin(); it!=mp1.end(); ++it)
		cout << it->first <<" "<<it->second<<endl;
	//mp1[4] = "liz";	
	//cout <<mp1[4]<<endl;
	cout <<"mp1.size() " <<mp1.size()<<endl;
	return 0;
}
