
#include "get_config.h"
 
int main()
{
    map<string, string> m;
    ReadConfig("ifcfg", m);
    PrintConfig(m);
     
    return 0;
}
