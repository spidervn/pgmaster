#ifndef SERVERINSTALL_INTERFACE_ISERVICEGENERATOR_H_
#define SERVERINSTALL_INTERFACE_ISERVICEGENERATOR_H_

#include "structs.h"

class IServiceGenerator
{
private:
    /* data */
public:
    virtual ~IServiceGenerator() {}
    virtual int GenerateService(ServiceInput inp, PostgresBinary postgres, ServiceOutput out) = 0;    // File script will 
};

#endif