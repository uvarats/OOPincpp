#include "StringUtils.h"

StringUtils::StringUtils()
{
}



vector<string> StringUtils::split(string str, string delimiter)
{
    vector<string> results;
    size_t pos;
    while ((pos = str.find(delimiter)) != string::npos) {
        results.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    results.push_back(str);
    return results;
}

vector<int> StringUtils::stringsToInt(vector<string> strs)
{
    vector<int> intValues;
    for (string &str : strs) {
        intValues.push_back(stoi(str));
    }
    return intValues;
}
