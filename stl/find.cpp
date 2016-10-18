#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int num_to_find = 6;
	vector<int> v1;
	for (int i=0; i<10; ++i)
		v1.push_back(2*i);
	vector<int>::iterator result;
	result = find(v1.begin(), v1.end(), num_to_find);
	if (result == v1.end())
		cout <<"can't find match "<<num_to_find<<endl;
	else	
		cout <<"index is "<<result-v1.begin()<<endl;
	return 0;
}
