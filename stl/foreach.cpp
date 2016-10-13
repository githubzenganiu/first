#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int a[]={1,2,3,4,5,6,7};
	for (int &i:a)
	{
		if (i == 2)
			i = 3;
	}
	for (int &i:a)
		cout <<i<<endl;
	return 0;
}
