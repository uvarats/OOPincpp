#pragma once
#include <vector>
#include <string>
#include <sstream>
using namespace std;
class StringUtils
{
public:
	StringUtils();
	static vector<string> split(string str, string delimiter);
	static vector<int> stringsToInt(vector<string> strs);

	template < typename T >
	static void vectorToString(stringstream& ss, string message, vector<T>& objects);
};

template<typename T>
inline void StringUtils::vectorToString(stringstream& ss, string message, vector<T>& objects)
{
	ss << message;
	for (auto t : objects) {
		ss << t << "\n";
	}
	ss << "\n";
}
