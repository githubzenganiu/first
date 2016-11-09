#include<iostream>
#include<array>
#include<string>
#include<vector>
using namespace std;
struct object
{
int a;
string b;
};

int main()
{
	vector<object> array2;
	
	object obj1{1, "times"};
	array2.push_back(obj1);

	vector<int> array1 {1, 2, 3, 4, 5, 6};
	for (auto it = array1.begin(); it!=array1.end(); ++it)
	{
		cout << *it<<endl;
	}
	cout << "array1.at(2)" << array1.at(2)<<endl;
	cout << "array1[3]" << array1[3]<<endl;
	return 0;
}
