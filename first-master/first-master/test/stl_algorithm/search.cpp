#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;


int main()
{
	vector<int> v1;
	cout <<"v1:";
	for (int i=0; i<5; ++i)
	{
		v1.push_back(i+5);
		cout <<v1[i]<<'\t';
	}
	vector<int> v2;

	cout<<"v2:";

	for(int i=0;i<2;i++)

		{

			v2.push_back(i+7);

			cout<<v2[i]<<' ';

		}

		cout<<endl;
	vector<int>::iterator it;
	it = search(v1.begin(), v1.end(), v2.begin(), v2.end());
	if (it != v1.end())
		cout<<"v2的元素包含在v1中，起始元素为"<<"v1["<<it-v1.begin()<<']'<<endl;
	else
			cout<<"v2的元素不包含在v1中"<<endl;
	return 0;
}
