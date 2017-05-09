#include<iostream>

using namespace std;

class example{
private:
	int n;
	char *pc;
public:
	example();
	explicit example(int k);
	example(int k, char ch);
	example(const example& f):n(f.n){
		pc = new char[n];
		for (int i=0; i<n; ++i)
			pc[i] = f.pc[i];
	}

	example(example && f):n(f.n){
		pc = f.pc;
		p.pc = nullptr;
		f.n = 0;
	}

	~example();
};

