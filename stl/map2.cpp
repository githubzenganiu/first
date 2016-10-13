#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{
	map<int, string>mp;
	mp.insert(pair<int,string>(1,"tesing"));
	mp[1] = "China";
	mp.insert(pair<int,string>(4,"Xiaomi"));
	mp.insert(pair<int,string>(3,"Apple"));
	mp.insert(pair<int,string>(2,"vivo"));
	map<int, string>::iterator it;
	for (auto it = mp.begin(); it!=mp.end(); ++it)
		cout <<it->first<<" "<<it->second<<endl;
	return 0;
}
