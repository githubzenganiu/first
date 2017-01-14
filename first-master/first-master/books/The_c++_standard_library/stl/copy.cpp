#include<iostream>
#include<vector>
#include<list>
#include <algorithm>
using namespace std;
int main()
{
	vector<int>vec1;
	list<int> list1;
	list1.push_back(1);
	list1.push_back(3);
	list1.push_back(4);
	list1.push_back(5);
	list1.push_back(6);
	copy(list1.begin(), list1.end(), vec1.begin());
	vec1.resize(list1.size());
//	for (auto it=vec1.begin(); it!=vec1.end(); ++it)
//		cout <<*it<<endl;
	return 0;
}
