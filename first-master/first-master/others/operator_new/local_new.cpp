#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class three_d
{
private:
    int x,y,z;
public:
    three_d(int a,int b,int c);
    ~three_d()
    {
        cout << "Destructing\n";
    }
    void *operator new(size_t size);
    void operator delete(void *p);
    friend ostream & operator <<(ostream &stream,three_d obj);
};

three_d::three_d(int a,int b,int c)
{
    cout << "Constructing\n";
    x = a;
    y = b;
    z = c;
}

void *three_d::operator new(size_t size)
{
    cout << "in threee_d new\n";
    return malloc(size);
}

void three_d::operator delete(void *p)
{
    cout << "in three_d delete\n" ;
    free(p);
}

ostream &operator <<(ostream &os,three_d obj)
{
    os << obj.x << ",";
    os << obj.y << ",";
    os << obj.z << "\n";
    return os;
}

int main(int argc,char *argv[])
{
    three_d *p = new three_d(1,2,3);
    three_d *p1 = new three_d(4,5,6);
    if(!p || !p1)
    {
        cout << "Allocation failure" << endl;
        return 1;
    }
    cout << *p << *p1;
    delete p;
    delete p1;
    int *pnum;
    pnum = new int;
    *pnum = 0;
    cout << "num = " << *pnum << endl;
    delete pnum;
    cout << "Application Run Successfully!" << endl;
    return 0;
}
