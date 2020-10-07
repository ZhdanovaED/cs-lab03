#ifndef HISTOGRAM_H_INCLUDED
#define HISTOGRAM_H_INCLUDED
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Input {
    vector<double> numbers;
    size_t bin_count;
};

void find_minmax(const vector<double>& numbers, double& min, double& max);


vector<size_t> make_histogram(const Input& data);

string make_info_text();

vector<size_t> make_histogram(const vector<double>& numbers, size_t bin_count);


#endif // HISTOGRAM_H_INCLUDED
