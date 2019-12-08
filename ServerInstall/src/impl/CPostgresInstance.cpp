#include "CPostgresInstance.h"
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>

using namespace std;

CPostgresInstance::CPostgresInstance(std::string bin_path)
{
    isValid = false;
}

CPostgresInstance::~CPostgresInstance()
{
}

int CPostgresInstance::initialize(std::string bin_path)
{
    the_bin_path = bin_path;
    bool bValid = true;

    ifstream f_pgctl(bin_path + "/pg_ctl");
    bValid &= f_pgctl.good();

    
}

bool CPostgresInstance::isValidInstance()
{

}

std::string CPostgresInstance::getVersion()
{

}