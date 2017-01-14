#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class TextBlock
{
private:
	char *text;
public:
	TextBlock(const char *s)
	{
		int len = strlen(s);
		try {
				text = new char[len+1];
			}
		catch(bad_alloc&)
		{
			exit(-1);
		}
		memset(text, 0, len+1);
		strncpy(text, s, len);
		cout << "constructor "<<endl;
	}
	~TextBlock()
	{
		delete []text;
		cout << "destructor "<<endl;
	}
	const char& operator[](size_t position) const
	{
		cout << "const version"<<endl;
		int len = strlen(text);
		if (len <= position)
		{
			cout << "index is too enough"<<endl;
			exit(-1);
		}
		return text[position];

	}

	char& operator[](size_t position) 
	{
		cout << "non-const version"<<endl;
		int len = strlen(text);
		if (len <=position)
		{
			cout << "index is too big"<<endl;
			exit(-1);
		}

		return text[position];

	}
};
int main()
{
	const TextBlock  t1("China");
	cout << t1[4]<<endl;
	TextBlock t2("America");
	cout << t2[3]<<endl;

	return 0;
}
