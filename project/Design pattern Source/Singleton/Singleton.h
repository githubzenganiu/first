/********************************************************************
	created:	2006/07/20
	filename: 	Singleton.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Singleton模式的演示代码
*********************************************************************/

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
	Singleton(){};
	~Singleton(){};

	static Singleton* GetInstancePtr();
	static Singleton  GetInstance();

	void Test();

private:
	static Singleton* m_pStatic;
};

#endif
