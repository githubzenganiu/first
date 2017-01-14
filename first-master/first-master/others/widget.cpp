#include<iostream>
using namespace std;
class Widget
{
public:
	Widget(int data):data(data) {}
	Widget();
	Widget(const Widget& rhs);
	Widget& operator=(const Widget& rhs);
	void show(void)
	{
		cout << "data -> "<<data<<endl;
	}
private:
	int data;
};

Widget::Widget()
{
	cout << "constructor"<<endl;
	data = 0;
}
Widget::Widget(const Widget& rhs)
{
	cout << "copy constructor"<<endl;
	data = rhs.data;
}

Widget& Widget::operator=(const Widget& rhs)
{
	cout << "operator = "<<endl;
	data = rhs.data;
	return *this;
}

void display(Widget& w)
{
	w.show();

}

int main()
{
/*	Widget w1;
	w1.show();

	Widget w2(99);
	w2.show();

	Widget w3 = w2;
	w3.show();

	Widget w4;
	w4 = w2;

	Widget w5(w2);
	w5.show();*/
	Widget ww(890);
	display(ww);
	return 0;
}
