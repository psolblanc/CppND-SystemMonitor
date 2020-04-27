#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
    int hour = seconds / 3600;
    int minute = (seconds % 3600) / 60;
    int second = minute % 60;
    string res = {};
    return res;

}