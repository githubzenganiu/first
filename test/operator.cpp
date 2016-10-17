#include<iostream>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

class my_time
{
public:
	my_time(int hour, int minute, int second);
	my_time(const my_time &rhs);
	my_time &operator=(const my_time& rhs);
	void show_time() const
	{
		cout <<hour<<":"<<minute<<":"<<second<<endl;
	}
	void set_time(int hour, int minute, int second)
	{
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
//	friend const my_time operator +(const my_time &lhs, const my_time &rhs);
	const my_time operator+(const my_time &rhs)
	{
		    int second =(this->second+rhs.second)%60;
			int minute = (this->minute+rhs.minute+((this->second+rhs.second)/60))%60;
			int hour = ((this->minute+rhs.minute+((this->second+rhs.second)/60))/60+this->hour+rhs.hour)%24;
			my_time temp(hour, minute, second);
			return temp;
	}
	my_time& operator++()//前置
	{
		this->second=(this->second+1)%60;
		this->minute=(1+this->minute+(this->second+1)/60)%60;
		this->hour = (1+this->hour+(this->minute+(this->second+1)/60)/60)%24;
		return *this;
	}
	const my_time operator++(int)//后置
	{
		my_time temp = *this;
		cout <<this->second<<":"<<this->minute<<":"<<this->second<<endl;
		cout <<temp.second<<":"<<temp.minute<<":"<<temp.second<<endl;
		this->second=(this->second+1)%60;
		this->minute=(1+this->minute+(this->second+1)/60)%60;
		this->hour = (1+this->hour+(this->minute+(this->second+1)/60)/60)%24;
		return temp;
	}

private:
	int hour;
	int minute;
	int second;
};
my_time::my_time(int hour, int minute, int second)
{
	if (hour<0 || hour>24 || minute<0 || minute>=60 || second<0 || second>=60)
		exit(-1);
	
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}
my_time::my_time(const my_time &rhs)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

my_time& my_time::operator=(const my_time &rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	cout <<"line 75"<<endl;	
	this->hour = rhs.hour;
	this->minute = rhs.minute;
	this->second = rhs.second;

}

/*
 const my_time operator +(const my_time &lhs, const my_time &rhs)
 {
	int second =(lhs.second+rhs.second)%60;
	int minute = (lhs.minute+rhs.minute+((lhs.second+rhs.second)/60))%60;
	int hour = ((lhs.minute+rhs.minute+((lhs.second+rhs.second)/60))/60+lhs.hour+rhs.hour)%24;
	my_time temp(hour, minute, second);
	return temp;
 }*/
int main()
{
	/*my_time * const pt = new my_time(13,45,34);
	pt->show_time();
	pt->set_time(0,0,0);
	delete pt;
	my_time t1(1, 1, 1);
	my_time t2(23, 1, 1);
	my_time t3 = t1+t2;
	t3.show_time();
	
	my_time t4(23,0,0);
	++t4;
	t4.show_time();*/
	my_time t5(1,1,1);
	my_time t6=t5;
	t6.show_time();
	t5.show_time();
	return 0;

}
