#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;//set and map use RB-tree datastructure
	s.insert(1);
	s.insert(2);
	s.insert(3);
//	s.insert(1);
	cout <<"set size is "<<s.size()<<endl;
	cout <<"set maxsize is "<<s.max_size()<<endl;
	cout<<"set first element is "<<*s.begin()<<endl;
	cout<<"set last element is "<<*s.end()<<endl;
	cout <<"1 times "<<s.count(1)<<endl;
	cout <<"3 times "<<s.count(3)<<endl;
	cout <<"5 times "<<s.count(5)<<endl;

	s.clear();
	if (s.empty())
	{
		cout <<"s is empty "<<endl;
	}

	cout <<"set size is "<<s.size()<<endl;
	cout <<"set maxsize is "<<s.max_size()<<endl;
	return 0;
}
