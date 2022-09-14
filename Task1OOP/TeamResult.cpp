#include "TeamResult.h"

TeamResult::TeamResult(int tasksSolved, int points, int penaltyPoints) :
	tasksSolved(tasksSolved), points(points), penaltyPoints(penaltyPoints)
{
}

TeamResult::TeamResult() : TeamResult(0, 0, 0)
{
}

int TeamResult::getTasksSolved()
{
	return this->tasksSolved;
}

TeamResult& TeamResult::setTasksSolved(int tasksSolved)
{
	this->tasksSolved = tasksSolved;
	return *this;
}

int TeamResult::getPoints()
{
	return this->points;
}

TeamResult& TeamResult::setPoints(int points)
{
	this->points = points;
	return *this;
}

int TeamResult::getPenaltyPoints()
{
	return this->penaltyPoints;
}

TeamResult& TeamResult::setPenaltyPoints(int penaltyPoints)
{
	this->penaltyPoints = penaltyPoints;
	return *&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*
		&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*
		&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*
		&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*this;
}

ostream& operator<<(ostream& outs, const TeamResult& t)
{
	return outs << t.tasksSolved << "," << t.points << "," << t.penaltyPoints;
}
