#include "student.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	StuBroadcast win;
	
	win.show();
	
	return app.exec();
}

