#include <string>
#include <optional>
#include <vector>
#include "CommandLine.h"
using namespace std;

string CommandLine::CmdParm(string key) {
    if(cmdParms.find(key) == cmdParms.end()) {
        return Empty;
    }
    return cmdParms[key];
}
vector<string> CommandLine::Keys() {
    return keys;
}
CommandLine::CommandLine(int argc, char* argv[]) {
    for(auto idx = 1; idx < argc; idx += 2) {
        auto key = string(argv[idx]).erase(0, 1);
        auto val = string(argv[idx + 1]);
        cmdParms.emplace(key, val);
        keys.push_back(key);
    }
}
CommandLine::~CommandLine() {}
