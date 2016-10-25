#include"include.h"
using namespace std;
bool badValue(int x)
{
	return (x%3)?0:1;
}
int main()
{
	set<int> c;
	c.insert(1);
	c.insert(4);
	c.insert(3);
	c.insert(2);
	c.insert(6);
	c.insert(7);
	ostream_iterator<int> stdoutIT(cout, "\t");
	copy(c.begin(), c.end(), stdoutIT);
	cout <<endl;
	for (auto it=c.begin(); it!=c.end(); )
		if(badValue(*it))
			c.erase(it++);
		else
			++it;

	copy(c.begin(), c.end(), stdoutIT);
	cout <<endl;
	return 0;
}
