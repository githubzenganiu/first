#include"person.h"

person::person(const std::string &name, int age, const std::string &id, const std::string &address):
	name(name),age(age),id(id), address(address)
{

}
const std::string &person::get_name(void) const
{
	return this->name;
}

int person::get_age(void) const
{
	return this->age;
}

const std::string &person::get_id(void) const
{
	return this->id;
}

const std::string &person::get_addr(void) const
{
	return this->address;
}
