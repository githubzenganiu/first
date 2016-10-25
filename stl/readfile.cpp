#include"include.h"
using namespace std;

int main(int argc, char *argv[])
{
	ifstream file("vector.cpp");
	istreambuf_iterator<char> i_file(file);
	istreambuf_iterator<char> eof;
	string buffer;
	while (i_file !=eof)
	{
		buffer += *i_file;
		if (*i_file == '\n')
		{
			cout <<buffer;
			buffer.clear();
		}
		++i_file;
	}
	return 0;
}
