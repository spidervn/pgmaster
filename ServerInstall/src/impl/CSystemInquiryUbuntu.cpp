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

int CSystemInquiryUbuntu::locatePostgres(std::vector<std::string> vSuggestFolder, std::vector<PostgresBinary>& vAlternatives, std::string version)
{
    int n = ARRAYLEN(generalPath);
    vAlternatives.clear();

    for (int a=0; a<n; ++a)
    {
        IPostgresInstancePtr pgp = CPostgresInstancePtrNew(generalPath[a].c_str());

        if (pgp->isValidInstance())
        {
            vAlternatives.push_back(pgp->getBinaryInfo());
        }
    }

    for (int a=0; a<vSuggestFolder.size(); ++a)
    {
        IPostgresInstancePtr pgp = CPostgresInstancePtrNew(vSuggestFolder[a].c_str());

        if (pgp->isValidInstance())
        {
            vAlternatives.push_back(pgp->getBinaryInfo());
        }
    }

    return 0;
}