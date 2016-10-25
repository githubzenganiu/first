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
	list<int> list1;
	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(90);
	list1.push_back(23);
	list1.push_back(0);
	for (auto it=list1.begin(); it!=list1.end(); ++it)
		cout << *it <<'\t';
	cout <<endl;
	
	list1.remove(23);
	for (auto it=list1.begin(); it!=list1.end(); ++it)
		cout << *it<<'\t' ;
	cout <<endl;
	list1.remove(23);



	return 0;
}

