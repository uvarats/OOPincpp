#pragma once
#include "TeamResult.h"
#include "Coach.h"
#include <iterator>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Team
{
	string name;
	vector<string> participants;
	string country;
	TeamResult teamResult;
	Coach coach;
public:
	Team(string name, string country, TeamResult teamResult, Coach coach);
	Team(string name, string country, Coach coach);
	Team(string name, string country);
	Team(string name);
	Team();

	string getName();
	Team& setName(string name);

	vector<string>& getParticipants();
	Team& setParticipants(vector<string> participants);

	string getCountry();
	Team& setCountry(string country);

	TeamResult& getResult();

	Coach& getCoach();
	Team& setCoach(Coach coach);

	friend ostream& operator<< (ostream& outs, const Team& t);
};

