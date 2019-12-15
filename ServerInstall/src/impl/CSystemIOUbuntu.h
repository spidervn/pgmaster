#ifndef SERVERINSTALL_IMPL_CSYSTEMIO_H_
#define SERVERINSTALL_IMPL_CSYSTEMIO_H_

#include "interface/ISystemIO.h"
#include <memory>

#define CSystemIOUbuntuPtrNew std::make_shared<CSystemIOUbuntu>()

class CSystemIOUbuntu: public ISystemIO
{
private:
    /* data */
public:
    CSystemIOUbuntu();
    virtual ~CSystemIOUbuntu();
    std::string shellex(std::string cmd);

    int find_in_folder(std::string folder, std::vector<FilePath>& v, bool bRecursive = false);
};

#endif