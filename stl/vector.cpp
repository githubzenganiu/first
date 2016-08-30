#include<iostream>
#include<vector>
using namespace std;
#define LEN 20

int main()
{
	vector<int> vec1;
	for (int i=0; i< LEN; ++i)
		vec1.push_back(i*2);
	cout << "vec1.capacity()"<<vec1.capacity()<<endl;
	cout << "vec1.size()"<<vec1.size()<<endl;
	for (auto it=vec1.begin(); it!=vec1.end(); ++it)
		cout << *it <<endl;
	return 0;
}
