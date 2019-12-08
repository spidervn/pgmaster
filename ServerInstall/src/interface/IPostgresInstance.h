#ifndef SERVERINSTALL_INTERFACE_IPOSTGRESINSTANCE_H_
#define SERVERINSTALL_INTERFACE_IPOSTGRESINSTANCE_H_

#include <string>
#include <memory>

class IPostgresInstance
{
private:
    /* data */
public:
    virtual ~IPostgresInstance() {}

    virtual int initialize(std::string bin_path) = 0;
    virtual bool isValidInstance() = 0;
    virtual std::string getVersion() = 0;
};

typedef std::shared_ptr<IPostgresInstance> IPostgresInstancePtr;

#endif