#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
	vector<int> vec;
	vec.reserve(20);
	for (int i=0; i<20; ++i)
	{
		vec.push_back(i);
	}
	vector<int>::iterator it;
	it = vec.begin();
	it++;
	cout << *it << endl;
	vec.push_back(44);
	cout << *it << endl;
	it++;
	cout << *it << endl;
	it++;
	cout << *it << endl;

	return 0;
}
