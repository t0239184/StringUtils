#include "StringUtils.h"

#include <string>

using namespace std;

bool StringUtils::isEmpty(string &str){
    return str == "\0" || str.size() <= 0;
};

bool StringUtils::isBlank(string &str){
    return str == "\0" || trim(str).size() <= 0;
};

string StringUtils::trim(string &str) {
    if (str.empty())
        return str;

    string result = str;

    result.erase(0, result.find_first_not_of(" "));
    result.erase(result.find_last_not_of(" ") + 1);
    return result;
}