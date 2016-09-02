#include<iostream>
using namespace std;
static int g_num;
void func(void)
{
	static int num = 1;
	cout <<"num in func is "<<num<<endl;
	num++;

}
int main()
{
	cout <<"g_num is "<<g_num<<endl;
	cout <<"g_num is "<<g_num<<endl;
	cout <<"g_num is "<<g_num<<endl;
	func();
	func();
	func();
	func();
	func();

	return 0;
}
