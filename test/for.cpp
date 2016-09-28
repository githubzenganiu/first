#include<iostream>
using namespace std;
void print()
{
	int v[] = {0, 1,2,3,4,5,6,7,8,9};
	for (auto x:v)
		//cout <<x<<"\n";
		cout <<x<<'\n';
	for (auto x :{11,22,33,44,55})
		//cout <<x<<"\n";
		cout <<x<<'\n';
}
int main()
{
	print();
	return 0;
}
