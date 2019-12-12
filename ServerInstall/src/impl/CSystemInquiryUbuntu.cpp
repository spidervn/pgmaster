#include "CSystemInquiryUbuntu.h"
#include <stdio.h>
#include <stdlib.h>
#include "CPostgresInstance.h"

using namespace std;

std::string generalPath[] = {
    "/usr/local/pgsql/bin/"
};

CSystemInquiryUbuntu::CSystemInquiryUbuntu(/* args */)
{
}

CSystemInquiryUbuntu::~CSystemInquiryUbuntu()
{
}

int CSystemInquiryUbuntu::findExecutable(std::string& pathfound, std::string version)
{

    return 0;
}

int CSystemInquiryUbuntu::locatePostgres(std::vector<PostgresBinary>& vAlternatives, std::string version)
{
    int n = ARRAYLEN(generalPath);

    for (int a=0; a<n; ++a)
    {
        IPostgresInstancePtr pgp = CPostgresInstancePtrNew(generalPath[a].c_str());
    }

    return 0;
}