#include<iostream>
using namespace std;

void func(int array[])
{

	cout <<"sizeof(array) = "<<sizeof(array)<<endl;
}

int main()
{
	int a[] = {1, 3,4,5,6};
	func(a);
	return 0;
}
