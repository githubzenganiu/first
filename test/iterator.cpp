#include<iterator>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> num;
	cout <<"input numbers, end by zero"<<endl;

	istream_iterator<int> input(cin), input_end;
	while (input != input_end)
	{
		num.push_back(*input+1);
	}
	ostream_iterator<int> it(cout, "	");
	copy(num.begin(), num.end(), it);
	return 0;
}
