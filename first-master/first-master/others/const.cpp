#include<iostream>
using namespace std;
class test
{
private:
	int a;
	float b;
public:
	test(int a, float b):a(a),b(b){}
//	void show (void) const;
	void show(void);


};

/*void test::show(void) const
{
	cout << "const version"<<endl;
	cout << "a = "<<a<<"b = "<<b<<endl;

}*/
void test::show(void) 
{
	cout << "non-const version"<<endl;
	cout << "a = "<<a<<"b = "<<b<<endl;
}
int main()
{
	const test t1(1,11.1);
	test t2(2, 22.2);
//	t1.show();
	t2.show();
	return 0;
}
