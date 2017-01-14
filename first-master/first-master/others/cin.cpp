#include<iostream>
int main(void)
{

	char buff[5];
//	std::cin.width(5); //if add this line, the program is safe
	std::cin>>buff;//dangerous
	std::cout<<buff<<std::endl;
	return 0;
}
