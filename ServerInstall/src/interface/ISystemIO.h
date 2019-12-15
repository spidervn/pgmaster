#ifndef SERVERINSTALL_INTERFACE_ISYSTEMIO_H_
#define SERVERINSTALL_INTERFACE_ISYSTEMIO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <memory>
#include <vector>

class ISystemIO
{
private:
    /* data */
public:
    virtual ~ISystemIO() {}
    virtual std::string shellex(std::string cmd) = 0;

    // virtual int find_folder_recursive(std::string folder, std::vector<std::string& v) = 0;
};

typedef std::shared_ptr<ISystemIO> ISystemIOPtr;

#endif