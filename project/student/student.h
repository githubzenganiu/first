#include <QWidget>
class QLabel;
class QUdpSocket;
class QByteArray;
class QPixmap;

class StuBroadcast : public QWidget
{
Q_OBJECT
public:
	StuBroadcast(QWidget * parent = 0, Qt::WindowFlags f = 0);
	~StuBroadcast();
public slots:
	void stuReadPacket();
private:
	QLabel *labelPic;
	QUdpSocket *sock;
	QByteArray *byteArrayPic;
	QPixmap *pixmapPic;
};

