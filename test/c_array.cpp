#include<iostream>
#include<vector>
using namespace std;

void display(int *arr, int n)
{
	for (int i=0; i<n; ++i)
		cout <<arr[i]<<"\t";
	cout <<endl;

}


int main()
{
	vector<int> vec;
	vec.reserve(10);//reserve 10 elements space
	vec.push_back(1);
	vec.push_back(6);
	vec.push_back(5);
	vec.push_back(1);

	display(&vec[0], vec.size());
	vector<int>::const_iterator it;
	for (it=vec.begin(); it!=vec.end(); ++it)
		cout << *it<<endl;
	return 0;
}


