#ifndef SERVERINSTALL_IMPL_CCPOSTGRESINSTANCE_H_
#define SERVERINSTALL_IMPL_CCPOSTGRESINSTANCE_H_

#include "interface/IPostgresInstance.h"
#include <string>
#include <memory>

#define CPostgresInstancePtrNew(path) std::make_shared<CPostgresInstance>(path)

class CPostgresInstance: public IPostgresInstance
{
private:
    /* data */
    std::string the_bin_path;
    bool isValid;
    std::string version;
public:
    CPostgresInstance(std::string bin_path);
    virtual ~CPostgresInstance();

    int initialize(std::string bin_path);
    bool isValidInstance();
    std::string getVersion();

    PostgresBinary getBinaryInfo();
};

#endif 