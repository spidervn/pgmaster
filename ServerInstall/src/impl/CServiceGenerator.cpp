#include "CServiceGenerator.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream> //std::stringstream

using namespace std;


CServiceGenerator::CServiceGenerator(/* args */)
{
}

CServiceGenerator::~CServiceGenerator()
{
}

int CServiceGenerator::GenerateService(ServiceInput inp, ServiceOutput out)
{
    /* 
     * 
     * Read whole file.
     * 
     */

    std::string data_directory;
    ifstream fconf(inp.pg_config_folder);
    std::stringstream buff;
    std::string strConf;

    if (!fconf.is_open())
    {
        return ERROR_GENERAL;
    }

    buff << fconf.rdbuf();
    strConf = buff.str();
   
    // 
    // Parse config directory 
    // Use regular expression

    return 0;
}