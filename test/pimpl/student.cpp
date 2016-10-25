#include"person.h"
#include"student.h"

student::student(const std::string &name, int age, const std::string &id, const std::string &address,
		const std::string &university, const std::string &city, const std::string &major):ptr(new person(name, age, id, address)),
		university(university),city(city),major(major)
{
//	ptr = new person(name, age, id, address);

}

const std::string &student::get_university(void)  const
{
	return this->university;
}
const std::string &student::get_city(void) const
{
	return this->city;
}

const std::string &student::get_major(void) const
{
	return this->major;
}

const person * const student::get_ptr(void) const
{
	return ptr;

}

student::~student()
{
	if (ptr != NULL)
		delete ptr;
	ptr = NULL;
}
