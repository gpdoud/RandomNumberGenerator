#pragma once
#include <map>
#include <string>
#include <optional>
using namespace std;

class CommandLine {
    map<string, string> cmdParms;
    vector<string> keys;
public:
    const string Empty = string("");
    CommandLine(int argc, char*argv[]);
    ~CommandLine();
    string CmdParm(string key);
    vector<string> Keys();
};

