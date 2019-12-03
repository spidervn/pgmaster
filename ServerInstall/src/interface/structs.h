#ifndef SERVERINSTALL_INTERFACE_STRUCTS_H_
#define SERVERINSTALL_INTERFACE_STRUCTS_H_

#include <string>

#define CODE_SUCCESS            0
#define ERROR_GENERAL           1
#define ERROR_DUPLICATE_SERVICE 2

enum OS 
{
    WINDOWS,
    UBUNTU,
    REDHAT,
    OPENSUSE
};

enum ScriptType
{
    Python,
    BASH
};

struct ServiceInput
{
    std::string pg_config_folder;    // postgres.conf; hba.conf here
    std::string os_name;

    // Installation information
    std::string service_name;
    ScriptType script;
};

struct ServiceOutput
{
    std::string file_service_run;        // Fileoutput    
};

#endif