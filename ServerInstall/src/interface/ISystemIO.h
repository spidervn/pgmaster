#ifndef SERVERINSTALL_INTERFACE_ISYSTEMIO_H_
#define SERVERINSTALL_INTERFACE_ISYSTEMIO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <memory>

class ISystemIO
{
private:
    /* data */
public:
    virtual ~ISystemIO() {}
    virtual std::string shellex(std::string cmd) = 0;
};

typedef std::shared_ptr<ISystemIO> ISystemIOPtr;

#endif