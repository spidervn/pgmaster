#include "CSystemIOUbuntu.h"
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <dirent.h>
#include <sys/types.h>
#include <dirent.h>

using namespace std;
CSystemIOUbuntu::CSystemIOUbuntu(/* args */)
{
}

CSystemIOUbuntu::~CSystemIOUbuntu()
{
}

std::string CSystemIOUbuntu::shellex(std::string cmd)
{
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd.c_str(), "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}

int CSystemIOUbuntu::find_in_folder(std::string folder, std::vector<FilePath>& v, bool bRecursive)
{
    struct dirent *drnt;
    // DIR dr;
    // dr = opendir(folder.c_str());
    
    drnt = readdir(dr);


    return 0;
}