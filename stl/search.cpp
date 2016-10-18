#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	vector<int> v1;
	for (int i=0; i<5; ++i)
		v1.push_back(i+5);
	vector<int> v2;
	for (int i=0; i<2; i++)
		v2.push_back(i+111);
	vector<int>::iterator it;
	it = search(v1.begin(), v1.end(),  v2.begin(), v2.end());
	if (it != v1.end())
		cout <<v1[it-v1.begin()]<<endl;
	else
		cout <<"not found"<<endl;
	return 0;
}
