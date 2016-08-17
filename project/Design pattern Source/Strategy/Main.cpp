/********************************************************************
	created:	2006/08/06
	filename: 	Main.cpp
	author:		lichuang
                http://www.cppblog.com/converse/

	purpose:	Strategy模式的测试代码
*********************************************************************/

#include "Strategy.h"

int main()
{
	Strategy* pStrategy = new ConcreateStrategyA();//由Context的析构函数delete
	Context*  pContext  = new Context(pStrategy);

	pContext->ContextInterface();
	
	Strategy *p = new ConcreateStrategyB();
	Context *pc = new Context(p);
	pc->ContextInterface();

	delete pContext;
	delete pc;
	return 0;
}
