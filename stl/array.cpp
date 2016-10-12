#include<iostream>
#include<array>
using namespace std;
int main()
{
	vector<int> array1 {1, 2, 3, 4, 5, 6};
	for (auto it = array1.begin(); it!=array1.end(); ++it)
	{
		cout << *it<<endl;
	}
	//array1.push_back(7);
	cout << "array1.at(2)" << array1.at(2)<<endl;
	cout << "array1[3]" << array1[3]<<endl;
	return 0;
}
