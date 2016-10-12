#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int values[]{1, 2, 3, 4};
	cout <<"sizeof(values) = "<<sizeof(values)<<endl;
	vector<int> v{4, 5,6,7,8};
	cout <<"sizeof(v) = "<<sizeof(v)<<endl;
	cout <<"v.capacity() = "<<v.capacity()<<endl;
	cout <<"v.size() = "<<v.size()<<endl;
	int j{};//c++ 11 initial
	cout <<"j = "<<j<<endl;

	return 0;
}
