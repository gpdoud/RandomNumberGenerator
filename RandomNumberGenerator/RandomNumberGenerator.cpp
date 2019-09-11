#include <iostream>
#include "Random.h"
#include "CommandLine.h"
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Random Number Generator : -l(ow) n -h(igh) n -c(ount) n" << endl;
    Random rnd;
    CommandLine cl(argc, argv);
    int count = 1;
    for(auto str : cl.Keys()) {
        if(str == "l") {
            rnd.low = atoi(cl.CmdParm(str).c_str());
        } else if(str == "h") {
            rnd.high = atoi(cl.CmdParm(str).c_str());
        } else if(str == "c") {
            count = atoi(cl.CmdParm(str).c_str());
        }
    }
    cout << "Generate " << count << " ints between " << rnd.low
        << " and " << rnd.high << " inclusive." << endl;
    cout << rnd.Generate(count) << endl;
}
