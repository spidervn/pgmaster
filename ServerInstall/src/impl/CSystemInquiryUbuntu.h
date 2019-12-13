#ifndef SERVERINSTALL_IMPL_CSYSTEMINQUIRYUBUNTU_H_
#define SERVERINSTALL_IMPL_CSYSTEMINQUIRYUBUNTU_H_

#include "interface/ISystemInquiry.h"

class CSystemInquiryUbuntu: public ISystemInquiry
{
private:
    /* data */
public:
    CSystemInquiryUbuntu(/* args */);
    virtual ~CSystemInquiryUbuntu();

    int findExecutable(std::string& pathfound, std::string version = "9.6");
    int locatePostgres(std::vector<std::string> vSuggestFolder, std::vector<PostgresBinary>& vAlternatives, std::string version="9.6");
};

#endif