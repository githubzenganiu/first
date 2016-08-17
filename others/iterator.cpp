#include<vector>
#include<iterator>
#include<iostream>
using namespace std;
int main()
{
	std::vector<int> vec;
	for (int i=0; i<10; ++i)
		vec.push_back(i);
	const std::vector<int>::iterator iter = vec.begin();
	*iter = 10;
	cout << "*iter = "<<*iter<<endl;
	std::vector<int>::const_iterator cIter = vec.begin();
	++cIter;
	return 0;
}
