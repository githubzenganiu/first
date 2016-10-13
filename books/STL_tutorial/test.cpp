#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> container;
	for (int i=0; i<10; ++i)
		container.push_back(i);
	vector<int>::iterator it;
	for (it = container.begin(); it!=container.end(); ++it)
	//	if (*it > 3)
	//		container.erase(it);
		if (*it > 3)
			it = container.erase(it);
		else
			it++;
	
	for (it = container.begin(); it!=container.end(); ++it)
		cout << *it <<'\t';
	cout <<endl;
	return 0;
}
