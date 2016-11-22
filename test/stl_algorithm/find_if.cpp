#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

bool divby5(int x)
{
	return x%5?0:1;
}

int main()
{
	vector<int> v(20);
	for (int i=0; i<v.size(); i++)
	{
		v[i] = (i+1)*(i+3);
		cout <<v[i]<<'\t';
	}
	cout <<endl;
	vector<int>::iterator it;
	it = find_if(v.begin(), v.end(), divby5);
	if(it != v.end())
	{
		cout <<"first number "<<*it<<endl<<" and index is "<<it-v.begin()<<endl;

	}
	return 0;
}
