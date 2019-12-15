#include <stdlib.h>
#include "interface/ISystemInquiry.h"
#include "impl/CSystemIOUbuntu.h"
#include <string>
#include <iostream>
#include <boost/filesystem.hpp>

using namespace std;

int main(int argc, char const* argv[])
{
    string exe;
    string r;

    ISystemIOPtr siop = CSystemIOUbuntuPtrNew;
    r = siop->shellex("/usr/local/pgsql/bin/postgres -V");

    printf("%s\r\n", r.c_str());

    for (boost::filesystem::recursive_directory_iterator end, dir("./"); dir != end; ++dir)
    {
        std::cout << dir->path().filename() << std::endl;
    }

    return 0;
}