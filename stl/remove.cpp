#include"include.h"
using namespace std;
#define NUM 10
int main()
{
	vector<int> v;
	for (int i=0; i<NUM; ++i)
		v.push_back(i);
	for (auto it=v.begin(); it!=v.end(); ++it)
		cout << *it <<'\t';
	cout <<endl;	
	v.erase(remove(v.begin(), v.end(), 6),v.end());//this methos also can be applyed to string, dequeue
	/*list can use list::remove member function*/
	for (auto it=v.begin(); it!=v.end(); ++it)
		cout << *it <<'\t';
	cout <<endl;
	return 0;
}

