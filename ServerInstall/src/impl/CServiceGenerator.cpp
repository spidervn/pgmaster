#include "CServiceGenerator.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream> //std::stringstream
#include <regex>

#include "interface/IPgConfParser.h"
#include "interface/ISystemInquiry.h"

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
    std::string path_data;
    PostgresConfig config;
    PostgresLocal pg;           // Postgres installation on this Server

    if (!fconf.is_open())
    {
        return ERROR_GENERAL;
    }

    buff << fconf.rdbuf();
    strConf = buff.str();
   
    // 
    // Parse config directory 
    // Use regular expression
    // 

    IPgConfParserPtr cpp;
    cpp->load(inp.pg_config_folder + "/postgresql.conf");
    cpp->GetDataPath(path_data);
    cpp->GetConfig(config);

    //
    // Generator
    //    1. Generate script for run
    //    2. Write script to file.
    //
    ISystemInquiryPtr sip;
    sip->locatePostgres(pg);

    /* 
     * Generate information from
     *    PostgresInstance
     *      Exe-Path
     *    
     *    DatabaseConfig:
     *      ConfigPath.
     *      HBA Path.
     *      Data-Path.
     *      PID File.
     * 
     */
    // 
    // 

    /* Generate to file */


    return 0;
}