#ifndef SERVERINSTALL_INTERFACE_ISYSTEMIO_H_
#define SERVERINSTALL_INTERFACE_ISYSTEMIO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <memory>
#include <vector>

typedef std::pair<std::string, std::string> FilePath;

class ISystemIO
{
private:
    /* data */
public:
    virtual ~ISystemIO() {}
    virtual std::string shellex(std::string cmd) = 0;

    virtual int find_in_folder(std::string folder, std::vector<FilePath>& v, bool bRecursive = false) = 0;
};

typedef std::shared_ptr<ISystemIO> ISystemIOPtr;

#endif