#include <iostream>
#include "Random.h"
#include "CommandLine.h"
using namespace std;

int main(int argc, char* argv[]) {
    CommandLine cl(argc, argv);
    Random rnd;
    rnd.low = 0;
    rnd.high = 100;
    cout << rnd.Generate(10) << endl;
}
