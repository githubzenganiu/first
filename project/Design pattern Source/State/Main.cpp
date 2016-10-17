/********************************************************************
	created:	2006/08/05
	filename: 	Main.cpp
	author:		Àî´´
                http://www.cppblog.com/converse/

*********************************************************************/

#include "State.h"

int main()
{
	State *pState = new ConcreateStateA();
	Context *pContext = new Context(pState);
	pContext->Request();
	pContext->Request();
	pContext->Request();

	delete pContext;

	return 0;
}
