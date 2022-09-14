#pragma once
#include <vector>
#include <string>
using namespace std;
class StringUtils
{
public:
	StringUtils();
	static vector<string> split(string str, string delimiter);
	static vector<int> stringsToInt(vector<string> strs);
};

