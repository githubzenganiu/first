/********************************************************************
	created:	2006/07/20
	filename: 	Singleton.h
	author:		�
                http://www.cppblog.com/converse/

	purpose:	Singletonģʽ����ʾ����
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
