#include<iostream>
#include<map>
#include<iostream>
#include<hash_map>
using namespace std;
using namespace __gnu_cxx;

int main()
{
	hash_map<int, string> hmp1;
	hmp1.insert(pair<int, string>(1, "string"));
	hmp1.insert(pair<int, string>(2, "second"));
	hmp1.insert(pair<int, string>(3, "three"));
	hmp1.insert(pair<int, string>(4, "fourth"));
	hash_map<int, string>::const_iterator it;
	for (it=hmp1.begin(); it!=hmp1.end(); ++it)
		cout <<it->first<<"\t"<<it->second<<endl;
	return 0;
}
