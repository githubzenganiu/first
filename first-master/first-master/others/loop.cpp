#include<iostream>
using namespace std;
int main()
{
	int pubsize = 450;
	char temp[4] = {0};
	temp[0] = pubsize & 0xFF;
	temp[1] = (pubsize >>8) & 0xFF;
	temp[2] = (pubsize >>16) & 0xFF;
	temp[3] = (pubsize >>24) & 0xFF;
	int final_num = (unsigned char)temp[0] + (((unsigned char)temp[1])<<8) + 
	(((unsigned char)temp[2])<<16) + (((unsigned char)temp[3])<<24);
	cout << "final_num is "<<final_num<<endl;
	unsigned char temp2[4] = {0};
	for (int i=0; i<4; ++i)
		temp2[i] = temp[i];
	int final_num2 = (int)temp2[0] + (((int)temp2[1])<<8) + 
	(((int)temp2[2])<<16) + (((int)temp2[3])<<24);
	cout << "final_num2 is "<<final_num2<<endl;
	return 0;
}
