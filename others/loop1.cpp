#include<iostream>
using namespace std;
int main()
{
	int pubsize = 450;
	unsigned char temp[4] = {0};
	temp[0] = pubsize & 0xFF;
	temp[1] = (pubsize >>8) & 0xFF;
	temp[2] = (pubsize >>16) & 0xFF;
	temp[3] = (pubsize >>24) & 0xFF;
	int final_num = temp[0] + (temp[1]<<8) + (temp[2]<<16) + (temp[3]<<24);
	cout << "final_num is "<<final_num<<endl;
	return 0;
}
