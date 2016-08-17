/********************************************************************
	created:	2006/08/06
	filename: 	Strategy.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Strategy模式的演示代码
*********************************************************************/

#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy;

class Context//锦囊
{
public:
	Context(Strategy *pStrategy);
	~Context();

	void ContextInterface();
private:
	Strategy* m_pStrategy;//锦囊包裹妙计
};

class Strategy//妙计
{
public:
	virtual ~Strategy(){}

	virtual void AlgorithmInterface() = 0;
};

class ConcreateStrategyA//妙计1
	: public Strategy
{
public:
	virtual ~ConcreateStrategyA(){}

	virtual void AlgorithmInterface();
};


class ConcreateStrategyB//妙计1
	: public Strategy
{
public:
	virtual ~ConcreateStrategyB(){}

	virtual void AlgorithmInterface();
};

#endif
