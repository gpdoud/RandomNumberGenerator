#pragma once
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

class Random {
public:
    int low = 0;
    int high = RAND_MAX;
    Random();
    ~Random();
    int Next();
    string Generate(int count, char c = ',');
    string Join(const vector<int>& vec, const char* delim);
};

