#include "CommandLine.h"
using namespace std;

CommandLine::CommandLine(int argc, char* argv[]) {
    for(auto idx = 1; idx < argc; idx++) {
        auto parm = argv[idx];
    }
}
CommandLine::~CommandLine() {}
