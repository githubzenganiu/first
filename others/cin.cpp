#include<iostream>
int main(void)
{

	char buff[5];
	std::cin.width(5);
	std::cin>>buff;//dangerous
	std::cout<<buff<<std::endl;
	return 0;
}
