#pragma once
#include "Team.h"
#include "StringUtils.h"
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
class TeamUtils
{
public:
	vector<Team> getTeamsByCondition(vector<Team> teams, bool (*condition)(Team& t));
	void sortTeamsByCondition(vector<Team>& teams, bool (*condition)(Team& t1, Team& t2));
	int countTeamsByCountry(vector<Team> teams, string country);
	Coach getYoungestCoach(vector<Team> teams);
	string getReport(vector<Team>& teams, string country);
};

