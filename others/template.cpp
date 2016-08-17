#include<iostream>
#include<string>
using namespace std;
template<typename T>
inline void callWithMax(const T&a, const T& b)
{
	cout << "The max is "<<((a>b)?a:b)<<endl;

}

int main()
{

	callWithMax(1,5);
	string s1 = "myson";
	string s2 = "mydd";
	callWithMax(s1,s2);
	callWithMax('c','C');
	callWithMax(2.3,1.6);

	return 0;
}
