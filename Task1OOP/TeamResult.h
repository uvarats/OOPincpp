#pragma once
#include <iostream>
using namespace std;
class TeamResult
{
	int tasksSolved;
	int points;
	int penaltyPoints;
public:
	TeamResult(int tasksSolved, int points, int penaltyPoints);
	TeamResult();

	int getTasksSolved();
	TeamResult& setTasksSolved(int tasksSolved);

	int getPoints();
	TeamResult& setPoints(int points);

	int getPenaltyPoints();
	TeamResult& setPenaltyPoints(int penaltyPoints);

	friend ostream& operator<< (ostream& outs, const TeamResult& t);
};

