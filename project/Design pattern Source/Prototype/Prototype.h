/********************************************************************
	created:	2006/07/20
	filename: 	Prototype.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Prototype模式的演示代码
*********************************************************************/

#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype
{
public:
	Prototype(){}
	virtual ~Prototype(){}

	virtual Prototype* Clone() = 0;
};

class ConcreatePrototype1
	: public Prototype
{
public:
	ConcreatePrototype1();
	ConcreatePrototype1(const ConcreatePrototype1&);//copy constructor
	virtual ~ConcreatePrototype1();

	virtual Prototype* Clone();
};

class ConcreatePrototype2
	: public Prototype
{
public:
	ConcreatePrototype2();
	ConcreatePrototype2(const ConcreatePrototype2&);
	virtual ~ConcreatePrototype2();

	virtual Prototype* Clone();
};

#endif
