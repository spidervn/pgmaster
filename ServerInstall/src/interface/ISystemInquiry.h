#ifndef SERVERINSTALL_INTERFACE_ISYSTEMINQUIRY_H_
#define SERVERINSTALL_INTERFACE_ISYSTEMINQUIRY_H_

#include <string>
#include <memory>
#include "structs.h"
#include <vector>

class ISystemInquiry
{
private:
    /* data */
public:
    virtual ~ISystemInquiry() {}

    virtual int findExecutable(std::string& pathfound, std::string version = "9.6") = 0;
    virtual int locatePostgres(std::vector<std::string> vSuggestFolder, std::vector<PostgresBinary>& vAlternatives, std::string version="9.6") = 0;
};

typedef std::shared_ptr<ISystemInquiry> ISystemInquiryPtr;

#endif