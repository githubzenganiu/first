/********************************************************************
	created:	2006/08/06
	filename: 	Strategy.h
	author:		�
                http://www.cppblog.com/converse/

	purpose:	Strategyģʽ����ʾ����
*********************************************************************/

#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy;

class Context//����
{
public:
	Context(Strategy *pStrategy);
	~Context();

	void ContextInterface();
private:
	Strategy* m_pStrategy;//���Ұ������
};

class Strategy//���
{
public:
	virtual ~Strategy(){}

	virtual void AlgorithmInterface() = 0;
};

class ConcreateStrategyA//���1
	: public Strategy
{
public:
	virtual ~ConcreateStrategyA(){}

	virtual void AlgorithmInterface();
};


class ConcreateStrategyB//���1
	: public Strategy
{
public:
	virtual ~ConcreateStrategyB(){}

	virtual void AlgorithmInterface();
};

#endif
