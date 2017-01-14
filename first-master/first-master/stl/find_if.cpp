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
	vector<int> v(20);//size is 20
	cout <<"v size is "<<v.size()<<endl;
	cout <<"v capacity is "<<v.capacity()<<endl;
	for (int i=0; i<v.size(); ++i)
		v[i]=(1+i)*(i+3);
	vector<int>::iterator it;
	it = find_if(v.begin(), v.end(), divby5);
	if (it != v.end())
		cout <<"index is "<<it-v.begin()<<endl;
	vector<int>().swap(v);
	cout <<"v size is "<<v.size()<<endl;
	cout <<"v capacity is "<<v.capacity()<<endl;

	return 0;
}


