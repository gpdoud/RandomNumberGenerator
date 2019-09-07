#pragma once
#include <map>
#include <string>
using namespace std;

class CommandLine {
    map<string, string> cmdParms;
public:
    CommandLine(int argc, char*argv[]);
    ~CommandLine();

};

