#ifndef SERVERINSTALL_IMPL_CCPOSTGRESINSTANCE_H_
#define SERVERINSTALL_IMPL_CCPOSTGRESINSTANCE_H_

#include "interface/IPostgresInstance.h"
#include <string>

class CPostgresInstance
{
private:
    /* data */
    std::string the_bin_path;
    bool isValid;
public:
    CPostgresInstance(std::string bin_path);
    virtual ~CPostgresInstance();

    int initialize(std::string bin_path);
    bool isValidInstance();
    std::string getVersion();
};

#endif