#include "Random.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string Random::Generate(int count, char c) {
    vector<int> ints;
    for(auto idx = 0; idx < count; idx++) {
        ints.push_back(Next());
    }
    return Join(ints, &c);
}
int Random::Next() {
    return rand() % (high - low + 1) + low;
}
string Random::Join(const vector<int>& vec, const char* delim) {
    char ch = ' ';
    stringstream ss;
    for(auto idx = 0; idx < vec.size(); idx++) {
        ss << ch << ' ' << vec[idx];
        ch = *delim;
    }
    return ss.str();
}
Random::Random() {
    srand(time(NULL));
}
Random::~Random() {}