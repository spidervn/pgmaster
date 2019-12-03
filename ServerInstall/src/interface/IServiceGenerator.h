#ifndef SERVERINSTALL_ISERVICEGENERATOR_INTERFACE_H_
#define SERVERINSTALL_ISERVICEGENERATOR_INTERFACE_H_

#include "structs.h"

class IServiceGenerator
{
private:
    /* data */
public:
    virtual ~IServiceGenerator();

    virtual int GenerateService(ServiceInput inp, ServiceOutput out) = 0;    // File script will 
};

#endif