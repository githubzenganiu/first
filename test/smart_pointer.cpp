#include<iostream>
#include<memory>

using namespace std;

class object
{
public:
	explicit object(int a):a(a) 
	{
		cout <<"class constructor"<<endl;
	}
	void show(void) const
	{
		cout << a <<endl;
	}
	~object()
	{
		cout <<"class destructor"<<endl;
	}
private:
	int a;
};

void my_delete(object *ptr)
{
	cout <<"my_delete ptr"<<endl;
	delete ptr;

}
int main(int argc, char *argv[])
{
	/*shared_ptr<object> sp1(new object(1));	
	sp1->show();
	(sp1.get())->show();
	cout <<"sp1 use cunt "<<sp1.use_count()<<endl;
	shared_ptr<object> sp2 = sp1;
	cout <<"sp1 use cunt "<<sp1.use_count()<<endl;
	shared_ptr<object> sp3 = sp2;
	cout <<"sp1 use cunt "<<sp1.use_count()<<endl;
	cout <<"sp1 use cunt "<<sp2.use_count()<<endl;
	cout <<"sp1 use cunt "<<sp3.use_count()<<endl;
*/

	shared_ptr<object> sps(new object(99), my_delete);//deletor
	return 0;
}
