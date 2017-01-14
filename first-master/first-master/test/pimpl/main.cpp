#include"person.h"
#include"student.h"
int main()
{
	using namespace std;
/*	person *ptr1 = new person("zhangsan", 25, "411303199078564321", "Shanghai");
	cout << ptr1->get_name()<<endl;;
	cout <<ptr1->get_age()<<endl;
	cout <<ptr1->get_addr()<<endl;
	cout<<ptr1->get_id()<<endl;
	delete ptr1;*/

	student *sptr = new student("zhangsan", 25, "4113031992105143421", "Shangahi","MIT", "YY", "CS");
	cout << sptr->get_university()<<endl;
	cout << sptr->get_city()<<endl;
	cout << sptr->get_major()<<endl;

	cout << (sptr->get_ptr())->get_name()<<endl;
	cout << (sptr->get_ptr())->get_id()<<endl;
	cout << (sptr->get_ptr())->get_addr()<<endl;
	cout << (sptr->get_ptr())->get_age()<<endl;
//	sptr->get_city() = "1234";
	delete sptr;
	return 0;
}
