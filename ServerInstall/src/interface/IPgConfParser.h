#ifndef SERVERINSTALL_INTERFACE_IPGCONFPARSER_H_
#define SERVERINSTALL_INTERFACE_IPGCONFPARSER_H_

#include <string>
#include <memory>
#include "interface/structs.h"

class IPgConfParser
{
private:
    /* data */
public:
    virtual ~IPgConfParser() {}

    virtual int load(std::string pgconf) = 0;   // postgresql.conf
    virtual int GetDataPath(std::string& path) = 0;
    virtual int GetConfig(PostgresConfig& conf) = 0;
};

typedef std::shared_ptr<IPgConfParser> IPgConfParserPtr;

#endif