#include <dirent.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
void GetFileInDir(string dirName)
{
	DIR* Dir = NULL;
	struct dirent* file = NULL;
	if (dirName[dirName.size()-1] != '/')
	{
		dirName += "/";
	}
	if ((Dir = opendir(dirName.c_str())) == NULL)
	{
		cerr << "Can't open Directory" << endl;
		exit(1);
	}
	while (file = readdir(Dir))
	{
		//if the file is a normal file
		if (file->d_type == DT_REG)//regular files
		{
			cout << dirName + file->d_name << endl;
		}
		//if the file is a directory
		else if (file->d_type == DT_DIR && strcmp(file->d_name, ".") != 0 && strcmp(file->d_name, "..") != 0)
		{
			GetFileInDir(dirName + file->d_name);//dirs
		}
	}
}
int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		cerr << "Need Directory" << endl;
		exit(1);
	}
	string dir = argv[1];
	GetFileInDir(dir);
}
