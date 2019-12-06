#include <stdlib.h>
#include "interface/ISystemInquiry.h"

#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
    string exe;
    ISystemInquiryPtr sip;

    sip->findExecutable(exe);
    

    return 0;
}

