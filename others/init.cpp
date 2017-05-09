#include<iostream>
#include<vector>
#include<cmath>
#include<assert.h>
using namespace std;

int main()
{

/*	int values[]{1, 2, 3, 4};
	vector<int> v{2, 3, 4, 5, 6, 7};
	vector<string> cities{"Beijing", "Nanjing", "Shanghai"};
//	complex<double> c{3.9, 7.8};
	int i;
	int j{};
	assert(j == 0);
	int *p;
	int *q{};
	assert(q == nullptr);
*/
/*	int x1(5.3);
	int x2 = 5.3;
	int x3{5.0};
	int x4 = {5.3};
	char c1{7};
	char c2{9999};*/
	vector<int> v1{1, 2, 3, 4, 5,5};
	vector<int> v2{1, 2.3, 3.4};
	cout << "ve1's capacity "<<v1.capacity()<<endl;
	cout << "ve1's size "<<v1.size()<<endl;

	return 0;
}
