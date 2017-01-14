/********************************************************************
	created:	2006/07/20
	filename: 	Brige.h
	author:		lichuang
                http://www.cppblog.com/converse/

	purpose:	Brigeģʽ
*********************************************************************/

#ifndef BRIDEG_H
#define BRIDEG_H

class Implementor;

class Abstraction
{
public:
	Abstraction(Implementor* pImplementor);
	virtual ~Abstraction();

	void Operation();

protected:
	Implementor* m_pImplementor;//pimpl
};

class Implementor
{
public:
	Implementor(){}
	virtual ~Implementor(){}

	virtual void OperationImpl() = 0;
};

class ConcreateImplementorA
	: public Implementor
{
public:
	ConcreateImplementorA(){}
	virtual ~ConcreateImplementorA(){}

	virtual void OperationImpl();
};

class ConcreateImplementorB
	: public Implementor
{
public:
	ConcreateImplementorB(){}
	virtual ~ConcreateImplementorB(){}

	virtual void OperationImpl();
};

#endif
