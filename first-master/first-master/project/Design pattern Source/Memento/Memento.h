/********************************************************************
	created:	2006/08/09
	filename: 	Memento.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Memento模式的演示代码
*********************************************************************/

#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

typedef std::string State;

class Memento;

class Originator
{
public:
	Originator(const State& rState);
	Originator();
	~Originator();

	Memento*	CreateMemento();
	void		SetMemento(Memento* pMemento);
	State		GetState();
	void		SetState(const State& rState);
	void		RestoreState(Memento* pMemento);
	void		PrintState();

private:
	State		m_State;
};

class Memento
{
private:
	friend class Originator;
	Memento(const State& rState);
	void	SetState(const State& rState);
	State	GetState();

	State	m_State;
};

#endif
