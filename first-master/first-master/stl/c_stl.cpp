#include<iostream>
#include<vector>
using namespace std;

void display(int *array, int n)
{
	for (int i=0; i<n; ++i)
		cout <<array[i]<<"\t";
	cout <<endl;
}

int main(int argc, char **argv)
{
	vector<int>vec{1,2,34,56,23,90};
	display(&vec[0], 6);
	int array[]{56,33,90,89};
	display(array, 4);
	return 0;
}

