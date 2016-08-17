#include<iostream>
using namespace std;

int main()
{
//	int array[]= {1,2,3,4};
//	int (*pt)[4] = &array;
	int a[3][4] = {1,2,3,4,
	5,6,7,8,
	9,10,11,12};
	cout << "address of the array "<<&a<<endl;
	cout << "address of the frst row "<< a<<endl;
	cout << "a+1 "<<(a+1)<<endl;
	cout << "address of the first number "<<&a[0][0]<<endl;
	cout << "&a[0][0]+1 "<<(&a[0][0] + 1)<<endl;
	cout << "&a[0] "<< &a[0]<<endl;
	cout << "&a[0] + 1 "<< (&a[0] + 1)<<endl;
	cout << "a[0] "<<a[0]<<endl;
	cout << "a[0] + 1 "<<a[0]+1<<endl;
	return 0;
}
