#ifndef _STUDENT_H_
#define _STUDENT_H_
#include"personfwd.h"

class student
{
public:
	student(const std::string &name, int age, const std::string &id, const std::string &address,
		const std::string &university, const std::string &city, const std::string &major);
	const std::string &get_university(void) const;
const std::string &get_city(void) const;
	const std::string &get_major(void) const;
	const person * const get_ptr(void) const;
	~student();
private:
	person *ptr;
	std::string university;
	std::string city;
	std::string major;

};




#endif
