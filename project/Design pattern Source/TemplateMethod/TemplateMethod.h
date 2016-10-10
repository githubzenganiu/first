/********************************************************************
	created:	2006/07/20
	filename: 	TemplateMethod.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	TemplateMethod模式的演示代码
*********************************************************************/

class AbstractClass
{
public:
	AbstractClass(){}
	virtual ~AbstractClass(){}

	void TemplateMethod();

protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

class ConcreateClass
	: public AbstractClass
{
public:
	ConcreateClass(){}
	virtual ~ConcreateClass(){}

protected:
	virtual void PrimitiveOperation1();
	virtual void PrimitiveOperation2();
};
