#ifndef _PERSON_H_
#define _PERSON_H_
#include<iostream>
#include<string>

class person
{
public:
	person(const std::string &name, int age, const std::string &id, const std::string &address);
	const std::string& get_name(void) const;
	 int get_age(void) const;
	 const std::string &get_id(void) const;
	 const std::string &get_addr(void) const;
private:
	std::string name;
	int age;
	std::string id;
	std::string address;
};




#endif
