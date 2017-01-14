/********************************************************************
	created:	2006/08/06
	filename: 	Main.cpp
	author:		lichuang
                http://www.cppblog.com/converse/

	purpose:	Strategyģʽ�Ĳ��Դ���
*********************************************************************/

#include "Strategy.h"

int main()
{
	Strategy* pStrategy = new ConcreateStrategyA();//��Context����������delete
	Context*  pContext  = new Context(pStrategy);

	pContext->ContextInterface();
	
	Strategy *p = new ConcreateStrategyB();
	Context *pc = new Context(p);
	pc->ContextInterface();

	delete pContext;
	delete pc;
	return 0;
}
