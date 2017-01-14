#include<iostream>
using namespace std;
template<class T>

T add(T a, T b)
{
	return a+b;
}

int main(int argc, char *argv[])
{
	cout <<add(1,2)<<endl;
	cout <<add(1.1,2.2)<<endl;
	return 0;
}
