#include<iostream>
using namespace std;
#pragma pack(1)//1字节对齐
struct AA{
	char a;
	int b;
	char c;
};

struct BB
{
	char a;
	char c;
	int b;
	
};

int main()
{
	cout <<sizeof(struct AA)<<endl;
	cout <<sizeof(struct BB)<<endl;
	return 0;
}
