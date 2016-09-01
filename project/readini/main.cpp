#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <map>
#include "INIParser.h"
using namespace std;


int main()
{
    INIParser ini_parser;
    int ret = ini_parser.ReadINI("conf.ini");
	if (ret == 0)
	{
		cout <<"can't not find file"<<endl;
		return -1;
	}
    cout << ini_parser.GetValue("default", "server_port") << endl;
    cout << ini_parser.GetValue("default", "name") << endl;
    ini_parser.Clear();
    cout << ini_parser.GetSize() << endl;

    //ini_parser.SetValue("class1","name1","Tom");
    //ini_parser.SetValue("class2","name2","Lucy");
    //ini_parser.WriteINI("test.ini");
    return 0;
}
