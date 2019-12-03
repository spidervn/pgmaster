#ifndef SERVERINSTALL_IMPL_CSERVICEGENERATOR_H_
#define SERVERINSTALL_IMPL_CSERVICEGENERATOR_H_

#include "interface/IServiceGenerator.h"

class CServiceGenerator: public IServiceGenerator
{
private:
    /* data */
public:
    CServiceGenerator(/* args */);
    virtual ~CServiceGenerator();

    int GenerateService(ServiceInput inp, ServiceOutput out);
};

#endif
