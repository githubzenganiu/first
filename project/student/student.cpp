#include "student.h"
#include <QLabel>
#include <QUdpSocket>
#include <QHostAddress>
#include <QByteArray>
#include <QPixmap>
#include <QHBoxLayout>

#include <sys/types.h>
#include <sys/socket.h>

#include <iostream>
using namespace std;

#define RCVBUF_SIZE (1024*1024)
#define UDP_PORT 9000
#define UDP_PKT_SIZE (50*1024)
#define WIN_WIDTH 1024
#define WIN_HEIGHT 800

StuBroadcast::StuBroadcast(QWidget * parent, Qt::WindowFlags f):QWidget(parent, f)
{
	labelPic = new QLabel;
	QHBoxLayout *hLayout;
	hLayout = new QHBoxLayout(this);
	hLayout->addWidget(labelPic);
	
	byteArrayPic = new QByteArray;
	pixmapPic = new QPixmap;
	sock = new QUdpSocket;
	
	sock->bind(UDP_PORT);

	int sockId;
	sockId = sock->socketDescriptor();
	//cout<<"sockId = "<<sockId<<endl;

	int opt;
/*
	socklen_t optLen;
	optLen = sizeof(opt);
	getsockopt(sockId, SOL_SOCKET, SO_RCVBUF, &opt, &optLen);
	cout<<"rcvbuf = "<<opt<<endl;
*/	
	opt = RCVBUF_SIZE;
	setsockopt(sockId, SOL_SOCKET, SO_RCVBUF, &opt, sizeof(opt));
/*	
	optLen = sizeof(opt);
        getsockopt(sockId, SOL_SOCKET, SO_RCVBUF, &opt, &optLen);
        cout<<"rcvbuf2 = "<<opt<<endl;
*/
	connect(sock,SIGNAL(readyRead()),this,SLOT(stuReadPacket()));
	
	//setWindowState(Qt::WindowMaximized);
	move(100, 100);
	setMinimumSize(WIN_WIDTH, WIN_HEIGHT);
}

StuBroadcast::~StuBroadcast()
{
	delete(labelPic);
	delete(sock);
	delete(byteArrayPic);
	delete(pixmapPic);
}

void StuBroadcast::stuReadPacket()
{
	qint64 ret;
	char buf[UDP_PKT_SIZE];
	//static qint64 count=0;
	
	//memset(buf, 0, UDP_PKT_SIZE);
	ret = sock->readDatagram(buf, UDP_PKT_SIZE);
	//cout<<"ret = "<<ret<<endl;

	if(strncmp(buf, "the end", 7)==0)
	{
		int height=WIN_HEIGHT, width=WIN_WIDTH;
		//cout<<"the end"<<endl;
		//cout<<"size = "<<byteArrayPic->size()<<endl;
		//cout<<"count = "<<count<<endl;
		
		pixmapPic->loadFromData(*byteArrayPic, "PNG");
		//labelPic->setPixmap(*pixmapPic);
		height = this->height();
		width = this->width();
		labelPic->setPixmap(pixmapPic->scaled(width, height));
		labelPic->resize(width, height);
		byteArrayPic->clear();
		
		//count = 0;
	}
	else
	{
		byteArrayPic->append(buf, ret);
		//count += ret;
	}
}
