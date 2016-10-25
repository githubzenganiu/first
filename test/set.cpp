#include<iostream>
#include<iterator>
#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> eg1;
	eg1.insert(1);
	eg1.insert(20);
	eg1.insert(5);
	eg1.insert(1);
	eg1.insert(10);
	eg1.insert(9);

	set<int>::iterator set_iter = eg1.begin();
	cout <<"Set name eg1:"<<endl;
	for (;set_iter!=eg1.end();++set_iter)
		cout <<*set_iter<<'\t';
	cout <<endl;
	cout <<"now there are "<<eg1.size()<<" elements in the set"<<endl;
	if (eg1.find(200) == eg1.end())
		cout <<"200 is not in the set eg1"<<endl;
	return 0;
}
